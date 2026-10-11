#include "mindustry/mod/DataManager.h"
#include "arc/graphics/Pixmaps.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/func/Prov.h"
#include "mindustry/mod/DataManager_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/files/Fi.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_9.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_8.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/graphics/MultiPacker.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataBundleLoader.h"
#include "mindustry/mod/DataPatcher.h"
#include "mindustry/mod/DataManager.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Prov_2.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Prov_3.h"
#include "mindustry/mod/DataImagePacker.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/mod/data/ContentAsset.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_13.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_12.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_15.h"
#include "mindustry/mod/data/ImageAsset.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_14.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_11.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Boolf_10.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "mindustry/mod/DataAudioLoader.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/DataManager_invoke_arc_func_Cons2_1.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_mod_DataManager(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_DataManager *) object;
	if (self->F_patcher)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patcher)->clazz)->markFunction)((jobject) self->F_patcher, mark, depth + 1);
	if (self->F_packer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packer)->clazz)->markFunction)((jobject) self->F_packer, mark, depth + 1);
	if (self->F_soundLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_soundLoader)->clazz)->markFunction)((jobject) self->F_soundLoader, mark, depth + 1);
	if (self->F_bundleLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bundleLoader)->clazz)->markFunction)((jobject) self->F_bundleLoader, mark, depth + 1);
	if (self->F_assets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assets)->clazz)->markFunction)((jobject) self->F_assets, mark, depth + 1);
	if (self->F_orderedAssets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_orderedAssets)->clazz)->markFunction)((jobject) self->F_orderedAssets, mark, depth + 1);
	if (self->F_orderedExternalAssets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_orderedExternalAssets)->clazz)->markFunction)((jobject) self->F_orderedExternalAssets, mark, depth + 1);
}

void clinit_mindustry_mod_DataManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_DataManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher);
	init_mindustry_mod_DataPatcher(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_patcher = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataImagePacker(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataImagePacker);
	init_mindustry_mod_DataImagePacker(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_packer = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataAudioLoader(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataAudioLoader);
	init_mindustry_mod_DataAudioLoader(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_soundLoader = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataBundleLoader(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataBundleLoader);
	init_mindustry_mod_DataBundleLoader(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_bundleLoader = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_assets = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_orderedAssets = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataManager *) NULL_CHECK(sp[0].o))->F_orderedExternalAssets = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getAudioName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_soundLoader;
	sp[0].o = (jobject)((func_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_reloadContent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:reloadContent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].i));
	LINE_NUMBER(33);
	((func_mindustry_mod_DataManager_rebuildOrderedAssets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_regenerateContentSprites_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:regenerateContentSprites", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	sp[0].o = (jobject)((func_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(41);
	if ((frame[1].i) == 0) goto label_12;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_mod_DataManager_reloadImages) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_reloadImages])(ctx, sp[0].o);
label_12:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(48);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[7].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	sp[0].o = (jobject)((func_mindustry_mod_data_ContentAsset_hashData_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_ContentAsset_hashData_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[8].o), (frame[9].o));
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[9].o));
	LINE_NUMBER(55);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_9);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_10);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	}
label_27:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(74);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[10].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"dp-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[10].o));
	LINE_NUMBER(75);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[9].o = sp[0].o;
	LINE_NUMBER(77);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(78);
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	sp[1].o = (jobject)SM_arc_graphics_Pixmaps_blankPixmap_R_arc_graphics_Pixmap(ctx);
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_UnlockableContent, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[12].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[13].o = sp[0].o;
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"assets/sprites/generated"_j))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(83);
	clinit_mindustry_mod_DataManager$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataManager$1);
	init_mindustry_mod_DataManager$1_mindustry_mod_DataManager_boolean_Array1_java_lang_String_arc_files_Fi_arc_struct_Seq_Array1_int_arc_struct_ObjectMap_arc_struct_ObjectMap_arc_graphics_g2d_PixmapRegion(ctx, sp[0].o, (frame[0].o), (jint(0)), (frame[13].o), (frame[14].o), (frame[7].o), (frame[9].o), (frame[8].o), (frame[10].o), (frame[11].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[16].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(148);
	ARRAY_ACCESS(jobject, (frame[12].o), (jint(0))) = (frame[17].o);
	LINE_NUMBER(149);
	sp[0].o = frame[13].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[17].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_java_lang_String, sp[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(152);
	((func_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker])(ctx, (frame[17].o), (frame[15].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(155);
	goto label_42;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(153);
	frame[18].o = sp[0].o;
	LINE_NUMBER(154);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[18].o));
	}
label_42:;
	LINE_NUMBER(156);
	goto label_38;
label_39:;
	{
	LINE_NUMBER(158);
	sp[0].o = frame[10].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[11].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(161);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_46;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[9].o), (jint(0)))) > 0) goto label_47;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_46;
label_47:;
	{
	LINE_NUMBER(162);
	((func_mindustry_mod_DataManager_reloadImages) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_reloadImages])(ctx, (frame[0].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[16].o = sp[0].o;
	}
label_49:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(166);
	((func_mindustry_ctype_UnlockableContent_loadIcon) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_loadIcon])(ctx, (frame[17].o));
	LINE_NUMBER(167);
	((func_mindustry_ctype_UnlockableContent_load) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_load])(ctx, (frame[17].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(170);
	goto label_51;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(168);
	frame[18].o = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[17].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to load icons for \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[18].o));
	}
label_51:;
	LINE_NUMBER(171);
	goto label_49;
label_46:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:reloadPatches", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	((func_mindustry_mod_DataPatcher_unapply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_unapply])(ctx, sp[0].o);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(181);
	((func_mindustry_mod_DataManager_rebuildOrderedAssets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets])(ctx, (frame[0].o));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_reloadImages(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:reloadImages", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_mindustry_mod_DataImagePacker_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataImagePacker_unload])(ctx, sp[0].o);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_packer;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataImagePacker_pack_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataImagePacker_pack_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(188);
	((func_mindustry_mod_DataManager_rebuildOrderedAssets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets])(ctx, (frame[0].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_reloadImages_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:reloadImages", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(194);
	((func_mindustry_mod_DataManager_reloadImages) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_reloadImages])(ctx, (frame[0].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:addTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(200);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(201);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_removeTexture_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:removeTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_reloadAudio(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:reloadAudio", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_soundLoader;
	((func_mindustry_mod_DataAudioLoader_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAudioLoader_unload])(ctx, sp[0].o);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_soundLoader;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(213);
	((func_mindustry_mod_DataManager_rebuildOrderedAssets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets])(ctx, (frame[0].o));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_load_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	((func_mindustry_mod_DataManager_unload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_unload])(ctx, (frame[0].o));
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[3].o));
	LINE_NUMBER(223);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_soundLoader;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(227);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_8;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_bundleLoader;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataBundleLoader_load_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataBundleLoader_load_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_packer;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataImagePacker_pack_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataImagePacker_pack_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq])(ctx, (frame[0].o));
	((func_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(234);
	((func_mindustry_mod_DataManager_rebuildOrderedAssets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets])(ctx, (frame[0].o));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_unload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:unload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	((func_mindustry_mod_DataPatcher_unapply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_unapply])(ctx, sp[0].o);
	LINE_NUMBER(239);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_2;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_bundleLoader;
	((func_mindustry_mod_DataBundleLoader_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataBundleLoader_unload])(ctx, sp[0].o);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_mindustry_mod_DataImagePacker_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataImagePacker_unload])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_soundLoader;
	((func_mindustry_mod_DataAudioLoader_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAudioLoader_unload])(ctx, sp[0].o);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_assets;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedAssets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedExternalAssets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_rebuildOrderedAssets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:rebuildOrderedAssets", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedAssets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedExternalAssets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(253);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(255);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedAssets;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(257);
	if (((jint)((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[4].o)))->F_embedded) != 0) goto label_7;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedExternalAssets;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_7:;
	{
	LINE_NUMBER(253);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getMissingAssets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedExternalAssets;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getAllAssets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedAssets;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:hasAssetPath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_12);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:hasAssetName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_13);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:hasAssetNameOrPath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_14);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager_hasExternalAssets_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:hasExternalAssets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedExternalAssets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

jobject M_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getAllExternalAssets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_orderedExternalAssets;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:isPatched", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_patcher;
	jint temp0 = (jint)((func_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getAssets", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_mod_DataManager *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager_clearGeneratedImages(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:clearGeneratedImages", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataManager_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_mod_DataManager_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_mod_DataManager_invoke_arc_func_Boolf_15);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getImages_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getImages", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_image;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getPatches", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_patch;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getMusic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_music;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getSounds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_sound;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getBundles", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_bundle;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager_getContent_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:getContent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_content;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataManager_lambda$hasAssetNameOrPath$0_java_lang_String_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$hasAssetNameOrPath$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_2;
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

jbool SM_mindustry_mod_DataManager_lambda$hasAssetName$0_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$hasAssetName$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataManager_lambda$hasAssetPath$0_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$hasAssetPath$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataManager_lambda$getMissingAssets$0_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$getMissingAssets$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_mindustry_mod_data_DataAsset_isCached_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_isCached_R_boolean])(ctx, (frame[0].o));
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

void SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$3_java_lang_String_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$regenerateContentSprites$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$2_arc_struct_ObjectSet_arc_struct_ObjectMap_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$regenerateContentSprites$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$1_arc_struct_ObjectSet_arc_struct_ObjectSet_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$regenerateContentSprites$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[2].o)))->F_path;
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(64);
	jint temp1 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[4].o));
	if (temp1 != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$0_mindustry_ctype_Content_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager:lambda$regenerateContentSprites$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_DataManager;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getAudioName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_mod_DataManager[] {
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
	(void *) M_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String,
	(void *) M_mindustry_mod_DataManager_reloadContent_boolean,
	(void *) M_mindustry_mod_DataManager_regenerateContentSprites_boolean,
	(void *) M_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_reloadImages,
	(void *) M_mindustry_mod_DataManager_reloadImages_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte,
	(void *) M_mindustry_mod_DataManager_removeTexture_java_lang_String,
	(void *) M_mindustry_mod_DataManager_reloadAudio,
	(void *) M_mindustry_mod_DataManager_load_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_unload,
	(void *) M_mindustry_mod_DataManager_rebuildOrderedAssets,
	(void *) M_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_DataManager_hasExternalAssets_R_boolean,
	(void *) M_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean,
	(void *) M_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_clearGeneratedImages,
	(void *) M_mindustry_mod_DataManager_getImages_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataManager_getContent_R_arc_struct_Seq,
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
	{ "getAudioName", "(Larc/files/Fi;)Ljava/lang/String;" },
	{ "reloadContent", "(Z)V" },
	{ "regenerateContentSprites", "(Z)V" },
	{ "reloadPatches", "(Larc/struct/Seq;)V" },
	{ "reloadImages", "()V" },
	{ "reloadImages", "(Larc/struct/Seq;)V" },
	{ "addTexture", "(Ljava/lang/String;[B)V" },
	{ "removeTexture", "(Ljava/lang/String;)V" },
	{ "reloadAudio", "()V" },
	{ "load", "(Larc/struct/Seq;)V" },
	{ "unload", "()V" },
	{ "rebuildOrderedAssets", "()V" },
	{ "getMissingAssets", "()Larc/struct/Seq;" },
	{ "getAllAssets", "()Larc/struct/Seq;" },
	{ "hasAssetPath", "(Lmindustry/mod/data/DataAssetType;Ljava/lang/String;)Z" },
	{ "hasAssetName", "(Lmindustry/mod/data/DataAssetType;Ljava/lang/String;)Z" },
	{ "hasAssetNameOrPath", "(Lmindustry/mod/data/DataAssetType;Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "hasExternalAssets", "()Z" },
	{ "getAllExternalAssets", "()Larc/struct/Seq;" },
	{ "isPatched", "(Ljava/lang/Object;)Z" },
	{ "getAssets", "(Lmindustry/mod/data/DataAssetType;)Larc/struct/Seq;" },
	{ "clearGeneratedImages", "()V" },
	{ "getImages", "()Larc/struct/Seq;" },
	{ "getPatches", "()Larc/struct/Seq;" },
	{ "getMusic", "()Larc/struct/Seq;" },
	{ "getSounds", "()Larc/struct/Seq;" },
	{ "getBundles", "()Larc/struct/Seq;" },
	{ "getContent", "()Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "patcher", &class_mindustry_mod_DataPatcher, offsetof(mindustry_mod_DataManager, F_patcher), "Lmindustry/mod/DataPatcher;", 2 },
	{ "packer", &class_mindustry_mod_DataImagePacker, offsetof(mindustry_mod_DataManager, F_packer), "Lmindustry/mod/DataImagePacker;", 2 },
	{ "soundLoader", &class_mindustry_mod_DataAudioLoader, offsetof(mindustry_mod_DataManager, F_soundLoader), "Lmindustry/mod/DataAudioLoader;", 2 },
	{ "bundleLoader", &class_mindustry_mod_DataBundleLoader, offsetof(mindustry_mod_DataManager, F_bundleLoader), "Lmindustry/mod/DataBundleLoader;", 2 },
	{ "assets", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataManager, F_assets), "Larc/struct/ObjectMap;", 2 },
	{ "orderedAssets", &class_arc_struct_Seq, offsetof(mindustry_mod_DataManager, F_orderedAssets), "Larc/struct/Seq;", 2 },
	{ "orderedExternalAssets", &class_arc_struct_Seq, offsetof(mindustry_mod_DataManager, F_orderedExternalAssets), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataManager, 0, "()V", 1 },
	{ "getAudioName", (intptr_t) M_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String, VTABLE_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String, "(Larc/files/Fi;)Ljava/lang/String;", 1 },
	{ "reloadContent", (intptr_t) M_mindustry_mod_DataManager_reloadContent_boolean, VTABLE_mindustry_mod_DataManager_reloadContent_boolean, "(Z)V", 1 },
	{ "regenerateContentSprites", (intptr_t) M_mindustry_mod_DataManager_regenerateContentSprites_boolean, VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean, "(Z)V", 1 },
	{ "reloadPatches", (intptr_t) M_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "reloadImages", (intptr_t) M_mindustry_mod_DataManager_reloadImages, VTABLE_mindustry_mod_DataManager_reloadImages, "()V", 1 },
	{ "reloadImages", (intptr_t) M_mindustry_mod_DataManager_reloadImages_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_reloadImages_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "addTexture", (intptr_t) M_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte, VTABLE_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte, "(Ljava/lang/String;[B)V", 1 },
	{ "removeTexture", (intptr_t) M_mindustry_mod_DataManager_removeTexture_java_lang_String, VTABLE_mindustry_mod_DataManager_removeTexture_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "reloadAudio", (intptr_t) M_mindustry_mod_DataManager_reloadAudio, VTABLE_mindustry_mod_DataManager_reloadAudio, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_mod_DataManager_load_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_load_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "unload", (intptr_t) M_mindustry_mod_DataManager_unload, VTABLE_mindustry_mod_DataManager_unload, "()V", 1 },
	{ "rebuildOrderedAssets", (intptr_t) M_mindustry_mod_DataManager_rebuildOrderedAssets, VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets, "()V", 2 },
	{ "getMissingAssets", (intptr_t) M_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getAllAssets", (intptr_t) M_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "hasAssetPath", (intptr_t) M_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean, VTABLE_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean, "(Lmindustry/mod/data/DataAssetType;Ljava/lang/String;)Z", 1 },
	{ "hasAssetName", (intptr_t) M_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean, VTABLE_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean, "(Lmindustry/mod/data/DataAssetType;Ljava/lang/String;)Z", 1 },
	{ "hasAssetNameOrPath", (intptr_t) M_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean, VTABLE_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean, "(Lmindustry/mod/data/DataAssetType;Ljava/lang/String;Ljava/lang/String;)Z", 1 },
	{ "hasExternalAssets", (intptr_t) M_mindustry_mod_DataManager_hasExternalAssets_R_boolean, VTABLE_mindustry_mod_DataManager_hasExternalAssets_R_boolean, "()Z", 1 },
	{ "getAllExternalAssets", (intptr_t) M_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "isPatched", (intptr_t) M_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean, VTABLE_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getAssets", (intptr_t) M_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq, "(Lmindustry/mod/data/DataAssetType;)Larc/struct/Seq;", 1 },
	{ "clearGeneratedImages", (intptr_t) M_mindustry_mod_DataManager_clearGeneratedImages, VTABLE_mindustry_mod_DataManager_clearGeneratedImages, "()V", 1 },
	{ "getImages", (intptr_t) M_mindustry_mod_DataManager_getImages_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getPatches", (intptr_t) M_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getMusic", (intptr_t) M_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getSounds", (intptr_t) M_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getBundles", (intptr_t) M_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getContent", (intptr_t) M_mindustry_mod_DataManager_getContent_R_arc_struct_Seq, VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "lambda$hasAssetNameOrPath$0", (intptr_t) SM_mindustry_mod_DataManager_lambda$hasAssetNameOrPath$0_java_lang_String_java_lang_String_mindustry_mod_data_DataAsset_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/mod/data/DataAsset;)Z", 4106 },
	{ "lambda$hasAssetName$0", (intptr_t) SM_mindustry_mod_DataManager_lambda$hasAssetName$0_java_lang_String_mindustry_mod_data_DataAsset_R_boolean, 0, "(Ljava/lang/String;Lmindustry/mod/data/DataAsset;)Z", 4106 },
	{ "lambda$hasAssetPath$0", (intptr_t) SM_mindustry_mod_DataManager_lambda$hasAssetPath$0_java_lang_String_mindustry_mod_data_DataAsset_R_boolean, 0, "(Ljava/lang/String;Lmindustry/mod/data/DataAsset;)Z", 4106 },
	{ "lambda$getMissingAssets$0", (intptr_t) SM_mindustry_mod_DataManager_lambda$getMissingAssets$0_mindustry_mod_data_DataAsset_R_boolean, 0, "(Lmindustry/mod/data/DataAsset;)Z", 4106 },
	{ "lambda$regenerateContentSprites$3", (intptr_t) SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$3_java_lang_String_arc_graphics_g2d_PixmapRegion, 0, "(Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;)V", 4106 },
	{ "lambda$regenerateContentSprites$2", (intptr_t) SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$2_arc_struct_ObjectSet_arc_struct_ObjectMap_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Larc/struct/ObjectSet;Larc/struct/ObjectMap;Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$regenerateContentSprites$1", (intptr_t) SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$1_arc_struct_ObjectSet_arc_struct_ObjectSet_mindustry_mod_data_ImageAsset_R_boolean, 0, "(Larc/struct/ObjectSet;Larc/struct/ObjectSet;Lmindustry/mod/data/ImageAsset;)Z", 4106 },
	{ "lambda$regenerateContentSprites$0", (intptr_t) SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$0_mindustry_ctype_Content_R_boolean, 0, "(Lmindustry/ctype/Content;)Z", 4106 },
};

Class class_mindustry_mod_DataManager{
		.nativeName = (intptr_t) "mindustry/mod/DataManager",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataManager),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataManager,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataManager,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_DataManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataManager = registerClass(&class_mindustry_mod_DataManager);

}
