#include "mindustry/mod/DataPatcher.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/mod/DataPatcher_invoke_mindustry_mod_ContentParser_ParseListener_1.h"
#include "arc/util/serialization/Json_FieldMetadata.h"
#include "java/lang/Runnable.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/func/Boolf.h"
#include "mindustry/mod/NoPatch.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_10.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_11.h"
#include "arc/util/Nullable.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_12.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_13.h"
#include "mindustry/gen/Building.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_14.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_15.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_16.h"
#include "java/lang/Object.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_17.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/mod/DataPatcher_FieldData.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "java/lang/System.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/struct/OrderedMap.h"
#include "mindustry/game/Rules.h"
#include "arc/func/Cons.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/mod/Mod.h"
#include "mindustry/mod/data/ContentAsset.h"
#include "mindustry/mod/DataPatcher_1.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/mod/DataPatcher_2.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "java/lang/ClassLoader.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/mod/data/PatchAsset.h"
#include "mindustry/mod/DataPatcher_invoke_java_lang_Runnable_9.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_25.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_24.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_23.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/serialization/SerializationException.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_22.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_21.h"
#include "mindustry/mod/DataPatcher.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_20.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "arc/util/Structs.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_16.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_15.h"
#include "mindustry/mod/ContentParser.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_14.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_13.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_19.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_18.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Cons_17.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_19.h"
#include "arc/util/serialization/Jval_Jformat.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_17.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "java/lang/reflect/Array.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_18.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_15.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_16.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_13.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_14.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_11.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_12.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Boolf_1.h"
#include "arc/util/serialization/Jval.h"
#include "mindustry/mod/DataPatcher_PatchRecord.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Func_1.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "arc/util/Reflect.h"
#include "arc/util/Strings.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_20.h"
#include "mindustry/mod/DataPatcher_invoke_arc_func_Prov_21.h"

extern "C" {

jobject SF_mindustry_mod_DataPatcher_dpModMeta;
jobject SF_mindustry_mod_DataPatcher_dpMod;
jint SF_mindustry_mod_DataPatcher_maxImageSize;
jint SF_mindustry_mod_DataPatcher_patchFormatVersion;
jbool SF_mindustry_mod_DataPatcher_needsArrayFix;
jobject SF_mindustry_mod_DataPatcher_root;
jobject SF_mindustry_mod_DataPatcher_nameToType;
jobject SF_mindustry_mod_DataPatcher_currentDataPatcher;
jobject SF_mindustry_mod_DataPatcher_parser;

void mark_mindustry_mod_DataPatcher(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_DataPatcher_dpModMeta)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataPatcher_dpModMeta)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataPatcher_dpModMeta, mark, depth + 1);
		if (SF_mindustry_mod_DataPatcher_dpMod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataPatcher_dpMod)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataPatcher_dpMod, mark, depth + 1);
		if (SF_mindustry_mod_DataPatcher_root)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataPatcher_root)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataPatcher_root, mark, depth + 1);
		if (SF_mindustry_mod_DataPatcher_nameToType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataPatcher_nameToType)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataPatcher_nameToType, mark, depth + 1);
		if (SF_mindustry_mod_DataPatcher_currentDataPatcher)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataPatcher_currentDataPatcher)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataPatcher_currentDataPatcher, mark, depth + 1);
		if (SF_mindustry_mod_DataPatcher_parser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataPatcher_parser)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataPatcher_parser, mark, depth + 1);
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
	auto self = (mindustry_mod_DataPatcher *) object;
	if (self->F_contentLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentLoader)->clazz)->markFunction)((jobject) self->F_contentLoader, mark, depth + 1);
	if (self->F_usedpatches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_usedpatches)->clazz)->markFunction)((jobject) self->F_usedpatches, mark, depth + 1);
	if (self->F_resetters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resetters)->clazz)->markFunction)((jobject) self->F_resetters, mark, depth + 1);
	if (self->F_afterCallbacks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_afterCallbacks)->clazz)->markFunction)((jobject) self->F_afterCallbacks, mark, depth + 1);
	if (self->F_visitStack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visitStack)->clazz)->markFunction)((jobject) self->F_visitStack, mark, depth + 1);
	if (self->F_addedContent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addedContent)->clazz)->markFunction)((jobject) self->F_addedContent, mark, depth + 1);
	if (self->F_currentlyApplyingPatch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentlyApplyingPatch)->clazz)->markFunction)((jobject) self->F_currentlyApplyingPatch, mark, depth + 1);
	if (self->F_currentlyApplyingContent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentlyApplyingContent)->clazz)->markFunction)((jobject) self->F_currentlyApplyingContent, mark, depth + 1);
	if (self->F_addedVars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addedVars)->clazz)->markFunction)((jobject) self->F_addedVars, mark, depth + 1);
}

void init_mindustry_mod_DataPatcher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_usedpatches = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_resetters = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_afterCallbacks = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_visitStack = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_addedContent = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_addedVars = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_createParser_R_mindustry_mod_ContentParser(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:createParser", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	{
	LINE_NUMBER(67);
	clinit_mindustry_mod_DataPatcher$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$2);
	init_mindustry_mod_DataPatcher$2(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(76);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowClassResolution = (jint(0));
	LINE_NUMBER(77);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowAssetLoading = (jint(0));
	LINE_NUMBER(78);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching = (jint(0));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:isPatched", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_usedpatches;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(89);
	((func_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:apply", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(95);
	if (((jint)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_applied) == 0) goto label_24;
	}
	{
	LINE_NUMBER(96);
	((func_mindustry_mod_DataPatcher_unapply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_unapply_boolean])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(97);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_applied = (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_27;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_27;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_27:;
	{
	LINE_NUMBER(102);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_currentDataPatcher = (frame[0].o);
	LINE_NUMBER(103);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_applied = (jint(1));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_copy_R_mindustry_core_ContentLoader) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_copy_R_mindustry_core_ContentLoader])(ctx, sp[1].o);
	((mindustry_mod_DataPatcher *) NULL_CHECK(sp[0].o))->F_contentLoader = (jref) sp[1].o;
	LINE_NUMBER(106);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_Attribute, 1), sp[0].o));
	LINE_NUMBER(107);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_map;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_reset_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(116);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_erroredContent;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_mod_data_ContentAsset, sp[0].o));
	LINE_NUMBER(119);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_errored = (jint(0));
	LINE_NUMBER(120);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_content = (jref) (jobject(nullptr));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(123);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingContent = (jref) (frame[7].o);
	LINE_NUMBER(125);
	clinit_mindustry_mod_data_ContentAsset(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_ContentAsset_loadableContent;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_45;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Content @ is of type '@', which is not supported. Skipping."_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_path;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(127);
	goto label_38;
	}
label_45:;
	{
	LINE_NUMBER(130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(131);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_path;
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	if (sp[0].o == sp[1].o) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	if (sp[0].o == sp[1].o) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	if (sp[0].o != sp[1].o) goto label_0;
	}
label_50:;
	{
	LINE_NUMBER(136);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_needsArrayFix = (jint(1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[7].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[2].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	sp[3].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_name;
	sp[4].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_data;
	sp[5].o = frame[9].o;
	sp[6].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_content = (jref) sp[1].o;
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset = (jref) (frame[7].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(155);
	goto label_52;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(143);
	frame[10].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_warnings;
	sp[1].o = (jobject)SM_arc_util_Strings_getFinalMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[7].o)))->F_errored = (jint(1));
	LINE_NUMBER(147);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(148);
	if ((frame[8].o) == (frame[11].o)) goto label_57;
	}
	INST_ALOAD(11);
	if ((--sp)->o == nullptr) goto label_57;
	{
	LINE_NUMBER(149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_remove_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_remove_mindustry_ctype_Content])(ctx, sp[0].o, (frame[11].o));
	LINE_NUMBER(151);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[1].o = frame[11].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[2].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	((func_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].o), (frame[10].o));
	goto label_52;
	}
label_57:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Error loading content: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[10].o));
	}
label_52:;
	LINE_NUMBER(156);
	goto label_38;
label_39:;
	{
	LINE_NUMBER(158);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingContent = (jref) (jobject(nullptr));
	LINE_NUMBER(160);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	((func_mindustry_mod_ContentParser_finishParsing) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_finishParsing])(ctx, sp[0].o);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_addedContent;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_addedContent;
	frame[6].o = sp[0].o;
	LINE_NUMBER(165);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_64:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_65;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(166);
	sp[0].o = frame[6].o;
	sp[1].o = frame[10].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	INST_IINC(9, 1);
	goto label_64;
	}
label_65:;
	{
	LINE_NUMBER(169);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_erroredContent;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_68:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_error;
	if (sp[0].o == nullptr) goto label_71;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_71;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_warnings;
	sp[1].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[1].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[1].o))->F_error;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_71:;
	{
	LINE_NUMBER(173);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_remove_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_remove_mindustry_ctype_Content])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(174);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_74:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_75;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(178);
	((func_mindustry_ctype_Content_init) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ctype_Content_init])(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(183);
	goto label_76;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(179);
	frame[9].o = sp[0].o;
	LINE_NUMBER(180);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_remove_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_remove_mindustry_ctype_Content])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_79;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_errored = (jint(1));
	}
label_79:;
	{
	LINE_NUMBER(182);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[1].o = frame[8].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[2].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	sp[3].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[3].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[3].o))->F_sourceFile;
	((func_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[9].o));
	}
label_76:;
	LINE_NUMBER(184);
	goto label_74;
label_75:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_80:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_81;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(188);
	((func_mindustry_ctype_Content_postInit) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ctype_Content_postInit])(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(193);
	goto label_82;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(189);
	frame[9].o = sp[0].o;
	LINE_NUMBER(190);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_remove_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_remove_mindustry_ctype_Content])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_85;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_errored = (jint(1));
	}
label_85:;
	{
	LINE_NUMBER(192);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[1].o = frame[8].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[2].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	sp[3].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[3].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[3].o))->F_sourceFile;
	((func_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[9].o));
	}
label_82:;
	LINE_NUMBER(194);
	goto label_80;
label_81:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_86:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_87;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_mindustry_ctype_Content_hasErrored_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ctype_Content_hasErrored_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_89;
	}
	{
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_89;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[8].o)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	sp += 1;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_type_StatusEffect)) == 0) goto label_91;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"status-"_j));
	goto label_92;
label_91:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_92:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[9].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_get_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_get_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_89;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_addedVars;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_logicVars;
	sp += 2;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_type_StatusEffect)) == 0) goto label_94;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"status-"_j));
	goto label_95;
label_94:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_95:;
	{
	sp -= 3;
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[9].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o, (frame[9].o), (jint(0)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_89:;
	LINE_NUMBER(201);
	goto label_86;
label_87:;
	{
	LINE_NUMBER(203);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_96;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_98:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(206);
	((func_mindustry_ctype_Content_loadIcon) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ctype_Content_loadIcon])(ctx, (frame[8].o));
	LINE_NUMBER(207);
	((func_mindustry_ctype_Content_load) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ctype_Content_load])(ctx, (frame[8].o));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_13;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[8].o)));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[9].o)))->F_uiIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[9].o));
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[9].o));
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_warnings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[9].o)))->F_name;
	sp[2].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[9].o)))->F_minfo;
	sp[2].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[2].o))->F_mod;
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (temp0 + (jint(1))));
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[9].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[\u0001] Could not find an icon. Ensure that you have an image named '\u0001' loaded. Remember that imported images always have the 'dp-' prefix automatically applied."_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(217);
	goto label_103;
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(213);
	frame[9].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_105;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_errored = (jint(1));
	}
label_105:;
	{
	LINE_NUMBER(216);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[1].o = frame[8].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[2].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	sp[3].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[8].o)))->F_minfo;
	sp[3].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[3].o))->F_sourceFile;
	((func_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[9].o));
	}
label_103:;
	LINE_NUMBER(218);
	goto label_98;
label_96:;
	{
	LINE_NUMBER(221);
	if ((frame[3].i) == 0) goto label_34;
	}
	SM_mindustry_mod_DataPatcher_fixContentArrays(ctx);
label_34:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_106:;
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_107;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_mod_data_PatchAsset, sp[0].o));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(229);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_error = (jint(0));
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(232);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[0].o);
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_patch;
	sp[2].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[2].o);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[3].o = (jobject)SF_arc_util_serialization_Jval$Jformat_plain;
	sp[2].o = (jobject)((func_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(233);
	if ((isInstance(ctx, (frame[8].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_112;
	}
	{
	frame[9].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[8].o)));
	goto label_114;
	}
label_112:;
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Patch must be a JSON object."_j))));
	throwException(ctx, sp[0].o);	}
label_114:;
	{
	LINE_NUMBER(235);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"requiredPlanets"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"requiredPlanets"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"requiredPlanets"_j))));
	LINE_NUMBER(240);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_119;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String])(ctx, (frame[10].o));
	sp += 1;
	goto label_120;
	}
label_119:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[10].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp += 1;
	}
label_120:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(242);
	sp[0].o = frame[11].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(243);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[6].o)))(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(244);
	goto label_106;
label_20:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(249);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_json = (jref) (frame[9].o);
	LINE_NUMBER(250);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingPatch = (jref) (frame[7].o);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(253);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_mod_data_DataAsset *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	}
label_128:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_129;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_root;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[11].o)))->F_name;
	((func_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[11].o), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(257);
	goto label_128;
	}
label_129:;
	{
	LINE_NUMBER(258);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingPatch = (jref) (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(267);
	goto label_132;
label_18:;
	{
	sp -= 1;
	LINE_NUMBER(260);
	frame[8].o = sp[0].o;
	LINE_NUMBER(261);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_error = (jint(1));
	LINE_NUMBER(262);
	((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[7].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_warnings;
	sp[1].o = (jobject)SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(264);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingPatch = (jref) (jobject(nullptr));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[7].o)))->F_patch;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to apply patch: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[8].o));
	}
label_132:;
	LINE_NUMBER(268);
	goto label_106;
label_107:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_afterCallbacks;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_13);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_unapply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:unapply", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	((func_mindustry_mod_DataPatcher_unapply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_unapply_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_unapply_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:unapply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(278);
	if (((jint)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_applied) != 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(280);
	((func_mindustry_mod_DataPatcher_callContentRemove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_callContentRemove])(ctx, (frame[0].o));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_contentLoader;
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_content = sp[0].o;
	LINE_NUMBER(282);
	((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_applied = (jint(0));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_resetters;
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_resetters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Runnable, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(287);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(290);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(288);
	frame[4].o = sp[0].o;
	LINE_NUMBER(289);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to un-apply patch!"_j))), (frame[4].o));
	}
label_12:;
	LINE_NUMBER(291);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_resetters;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_addedVars;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	LINE_NUMBER(294);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	((func_mindustry_logic_GlobalVars_remove_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_remove_mindustry_logic_LVar])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(295);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_afterCallbacks;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_14);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_afterCallbacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_usedpatches;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_addedContent;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(303);
	if ((frame[1].i) == 0) goto label_23;
	}
	SM_mindustry_mod_DataPatcher_fixContentArrays(ctx);
label_23:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:getAddedContent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_addedContent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_callContentRemove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:callContentRemove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_mindustry_ctype_Content_isModded_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_Content_isModded_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[6].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(314);
	((mindustry_ctype_Content *) NULL_CHECK((frame[6].o)))->F_removed = (jint(1));
	LINE_NUMBER(315);
	((func_mindustry_ctype_Content_removeContent) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_Content_removeContent])(ctx, (frame[6].o));
	}
label_7:;
	LINE_NUMBER(317);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(311);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_fixContentArrays(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:fixContentArrays", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	{
	LINE_NUMBER(322);
	if ((clinit_mindustry_mod_DataPatcher(ctx), (jint)SF_mindustry_mod_DataPatcher_needsArrayFix) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(323);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[0].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(324);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_empty;
	((func_mindustry_world_modules_ItemModule_checkArrayCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_checkArrayCapacity_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(327);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(329);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_lastConfig;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_ctype_Content)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[5].o)));
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_removed) == 0) goto label_9;
	}
	{
	LINE_NUMBER(331);
	((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_lastConfig = (jref) (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(334);
	((func_mindustry_world_Block_checkContentArrayCapacity_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Block_checkContentArrayCapacity_int_int])(ctx, (frame[3].o), (frame[0].i), (frame[1].i));
	LINE_NUMBER(335);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(338);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_13;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_ui;
	if ((--sp)->o == nullptr) goto label_13;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 * temp1);
	LINE_NUMBER(340);
	frame[3].i = (jint(0));
	}
label_16:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(341);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_removed) == 0) goto label_19;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	sp[1].o = (jobject)SM_mindustry_mod_DataPatcher_getReplacementBlock_mindustry_world_Block_R_mindustry_world_Block(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_removed) == 0) goto label_20;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	sp[1].o = (jobject)SM_mindustry_mod_DataPatcher_getReplacementBlock_mindustry_world_Block_R_mindustry_world_Block(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_removed) == 0) goto label_21;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	sp[0].o = (jobject)SM_mindustry_mod_DataPatcher_getReplacementBlock_mindustry_world_Block_R_mindustry_world_Block(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(350);
	sp[0].o = frame[5].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(351);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[4].o));
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(354);
	((func_mindustry_world_Tile_updateBlockReference_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_updateBlockReference_mindustry_world_Block])(ctx, (frame[4].o), (frame[5].o));
	}
label_21:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	frame[5].o = sp[0].o;
	LINE_NUMBER(359);
	if ((frame[5].o) == nullptr) goto label_27;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_28;
	}
	goto label_27;
label_28:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_items;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_checkArrayCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_checkArrayCapacity_int])(ctx, sp[0].o, (frame[0].i));
	}
label_29:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_checkArrayCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_checkArrayCapacity_int])(ctx, sp[0].o, (frame[0].i));
	}
label_27:;
	{
	LINE_NUMBER(340);
	INST_IINC(3, 1);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(367);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_needsArrayFix = (jint(0));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_getReplacementBlock_mindustry_world_Block_R_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:getReplacementBlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(371);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(378);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_visit_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:visit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(383);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_Content)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_usedpatches;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_after_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_after_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(386);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_created_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:created", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(389);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Weapon)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Weapon, (frame[1].o)));
	LINE_NUMBER(390);
	((func_mindustry_type_Weapon_init) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Weapon_init])(ctx, (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(391);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_Content)) == 0) goto label_3;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[1].o)));
	LINE_NUMBER(392);
	((func_mindustry_ctype_Content_init) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ctype_Content_init])(ctx, (frame[3].o));
	LINE_NUMBER(393);
	((func_mindustry_ctype_Content_postInit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ctype_Content_postInit])(ctx, (frame[3].o));
	}
label_3:;
	{
	LINE_NUMBER(396);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_6;
	}
	{
	LINE_NUMBER(397);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	frame[3].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_9:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_10;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(401);
	if ((frame[4].o) == (frame[1].o)) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ctype_Content)) != 0) goto label_14;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_type_Weapon)) == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(402);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(403);
	goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(399);
	INST_IINC(3, -1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(406);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_entities_part_DrawPart)) == 0) goto label_16;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, (frame[1].o)));
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_16;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[2].o)));
	LINE_NUMBER(407);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[4].o)))->F_name;
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_16:;
	{
	LINE_NUMBER(408);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_entities_part_DrawPart)) == 0) goto label_19;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, (frame[1].o)));
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Weapon)) == 0) goto label_19;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Weapon, (frame[2].o)));
	LINE_NUMBER(409);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[6].o)))->F_name;
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_19:;
	{
	LINE_NUMBER(410);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_draw_DrawBlock)) == 0) goto label_22;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_world_draw_DrawBlock, (frame[1].o)));
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_22;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[2].o)));
	LINE_NUMBER(411);
	((func_mindustry_world_draw_DrawBlock_load_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_draw_DrawBlock_load_mindustry_world_Block])(ctx, (frame[7].o), (frame[8].o));
	goto label_6;
	}
label_22:;
	{
	LINE_NUMBER(412);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Weapon)) == 0) goto label_25;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_type_Weapon, (frame[1].o)));
	LINE_NUMBER(413);
	((func_mindustry_type_Weapon_load) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_type_Weapon_load])(ctx, (frame[9].o));
	goto label_6;
	}
label_25:;
	{
	LINE_NUMBER(414);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_Content)) == 0) goto label_6;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[1].o)));
	LINE_NUMBER(415);
	((func_mindustry_ctype_Content_load) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_ctype_Content_load])(ctx, (frame[10].o));
	}
label_6:;
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[40];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:assign", 40 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[19]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(421);
	if ((frame[2].o) == nullptr) goto label_41;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_42;
	}
label_41:;
	popStackFrame(ctx);
	INST_RETURN();
label_42:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_46; }
	{
	LINE_NUMBER(427);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (46));
	if (temp0 == (jint(-1))) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_10; } // goto label_43
	}
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(430);
	frame[9].i = (jint(0));
	}
label_46:;
	{
	if ((frame[9].i) >= ((((jarray) nullCheck(ctx, (frame[8].o)))->length) - (jint(1)))) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_10; } // goto label_47
	}
	{
	LINE_NUMBER(431);
	frame[5].o = (frame[1].o);
	LINE_NUMBER(432);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i))), (frame[4].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(434);
	if ((frame[10].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Failed to resolve @.@"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)));
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_43; }
	if (bypasses[1]) { bypasses[1] = false; goto label_47; }
	{
	LINE_NUMBER(438);
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0))));
	LINE_NUMBER(439);
	frame[4].o = (checkCast(ctx, &class_mindustry_mod_DataPatcher$FieldData, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(1))))));
	LINE_NUMBER(441);
	if ((frame[9].i) >= ((((jarray) nullCheck(ctx, (frame[8].o)))->length) - (jint(2)))) goto label_56;
	}
	{
	LINE_NUMBER(442);
	((func_mindustry_mod_DataPatcher_visit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_visit_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	}
label_56:;
	{
	LINE_NUMBER(430);
	INST_IINC(9, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_7; } // goto label_46
	}
label_47:;
	{
	LINE_NUMBER(445);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), ((((jarray) nullCheck(ctx, (frame[8].o)))->length) - (jint(1)))));
	}
label_43:;
	{
	LINE_NUMBER(448);
	((func_mindustry_mod_DataPatcher_visit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_visit_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(450);
	sp[0].o = frame[1].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_root;
	if (sp[0].o != sp[1].o) goto label_59;
	}
	{
	LINE_NUMBER(451);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_61;
	}
	{
	frame[13].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[13].o));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[13].o));
	frame[14].o = sp[0].o;
	}
label_64:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_65;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_root;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[15].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001"_j.string, 2, sp[2].o, sp[3].o);
	((func_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[15].o), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(454);
	goto label_64;
	}
label_65:;
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_37; } // goto label_36
label_61:;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Content '@' cannot be assigned."_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_37; } // goto label_36
	}
label_59:;
	{
	LINE_NUMBER(458);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) != 0) goto label_68;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_16; } // goto label_69
	}
label_68:;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"+"_j))));
	if (temp0 == 0) goto label_70;
	}
	{
	LINE_NUMBER(461);
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[1].o);
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_type;
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_73;
	}
label_72:;
	INST_ALOAD(4);
	sp[-1].o = (jobject) ((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK(sp[-1].o))->F_elementType;
label_73:;
	{
	sp -= 3;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[2].o, (jobject(nullptr)), (jobject(nullptr)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(464);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_75;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_75;
	}
	{
	LINE_NUMBER(465);
	frame[13].o = (frame[4].o);
	LINE_NUMBER(466);
	frame[14].i = (jint(1));
	goto label_80;
	}
label_75:;
	{
	LINE_NUMBER(468);
	frame[14].i = (jint(0));
	}
label_80:;
	{
	LINE_NUMBER(472);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_81;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (frame[15].o));
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[13].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_11);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[15].o);
		proxy->F_field0 = (frame[14].i);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(0)));
	goto label_84;
	}
label_81:;
	{
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)SM_mindustry_mod_DataPatcher_copyArray_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(485);
	frame[16].o = (frame[1].o);
	LINE_NUMBER(486);
	frame[17].o = (frame[5].o);
	LINE_NUMBER(487);
	frame[18].o = (frame[6].o);
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = frame[13].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_12(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_12);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_16);
		proxy->F_field4 = (jref) (frame[18].o);
		proxy->F_field3 = (jref) (frame[17].o);
		proxy->F_field2 = (frame[14].i);
		proxy->F_field1 = (jref) (frame[16].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(0)));
	}
label_84:;
	LINE_NUMBER(511);
	{ popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_37; } // goto label_36
label_70:;
	{
	LINE_NUMBER(512);
	if ((frame[4].o) == nullptr) goto label_89;
	}
	{
	LINE_NUMBER(513);
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[1].o);
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 == 0) goto label_91;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_type;
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_92;
	}
label_91:;
	INST_ALOAD(4);
	sp[-1].o = (jobject) ((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK(sp[-1].o))->F_elementType;
label_92:;
	{
	sp -= 3;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[2].o, (jobject(nullptr)), (jobject(nullptr)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[13].o)))->F_type;
	if (sp[0].o == nullptr) goto label_89;
	}
	{
	LINE_NUMBER(515);
	frame[4].o = (frame[13].o);
	}
label_89:;
	{
	LINE_NUMBER(519);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	frame[13].i = temp0;
	LINE_NUMBER(520);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_96;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[15].o)))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_98;
	}
label_96:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, sp[0].o);
	sp++;
label_98:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(522);
	if ((frame[13].i) != (bit_cast<jint>(0x80000000))) { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	{
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Invalid number for array access: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}
label_11:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(525);
	if ((frame[13].i) < 0) goto label_102;
	}
	{
	if ((frame[13].i) < (frame[14].i)) { popExceptionFrames(frameRef, 1); goto label_14; }
	}
label_102:;
	{
	LINE_NUMBER(526);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Number outside of array bounds: '\u0001' (length is \u0001)"_j.string, 2, (frame[2].o), boxInteger(ctx, (frame[14].i)));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return;
	}
label_14:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[5]) { bypasses[5] = false; goto label_69; }
	{
	LINE_NUMBER(530);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_104;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (frame[15].o));
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_13(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_13);
		proxy->F_field1 = (frame[13].i);
		proxy->F_field0 = (jref) (frame[15].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_17);
		proxy->F_field1 = (frame[13].i);
		proxy->F_field0 = (jref) (frame[15].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(1)));
	goto label_107;
	}
label_104:;
	{
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)SM_mindustry_mod_DataPatcher_copyArray_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(537);
	frame[16].o = (frame[1].o);
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_14(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_14 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_14);
		proxy->F_field1 = (frame[13].i);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_18);
		proxy->F_field1 = (frame[13].i);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(1)));
	}
label_107:;
	LINE_NUMBER(540);
	{ popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_37; } // goto label_36
label_69:;
	{
	LINE_NUMBER(541);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectSet)) == 0) goto label_110;
	}
	{
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[1].o)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"+"_j))));
	if (temp0 == 0) goto label_110;
	}
	{
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)((func_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet])(ctx, (frame[8].o));
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(544);
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_elementType;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jobject(nullptr)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(547);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_115;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_115;
	}
	{
	LINE_NUMBER(548);
	frame[13].o = (frame[4].o);
	LINE_NUMBER(549);
	frame[14].i = (jint(1));
	goto label_120;
	}
label_115:;
	{
	LINE_NUMBER(551);
	frame[14].i = (jint(0));
	}
label_120:;
	{
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp += 3;
	if ((frame[14].i) == 0) goto label_121;
	}
	INST_ALOAD(13);
	goto label_122;
label_121:;
	INST_ALOAD(4);
label_122:;
	{
	sp -= 4;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_15(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_15);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_19);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (frame[14].i);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(0)));
	LINE_NUMBER(561);
	{ popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_37; } // goto label_36
	}
label_110:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectMap)) == 0) { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_22; } // goto label_124
	}
	{
	frame[9].o = (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[1].o)));
	LINE_NUMBER(562);
	if ((frame[4].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ObjectMap cannot be parsed without metadata: @.@"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[5].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[6].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}
label_17:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_keyType;
	sp[0].o = (jobject)((func_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(567);
	if ((frame[13].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Null key: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return;
	}
label_20:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[9]) { bypasses[9] = false; goto label_124; }
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap])(ctx, (frame[9].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_11);
		proxy->F_field1 = (jref) (frame[14].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_reset_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(575);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_133;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_133;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[15].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	if (temp0 == 0) goto label_133;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (frame[9].o), (frame[13].o));
	goto label_136;
	}
label_133:;
	{
	LINE_NUMBER(580);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[4].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_elementType;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[3].o, sp[4].o, (jobject(nullptr)), (jobject(nullptr)));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_16(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_16);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_20);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(0)));
	}
label_136:;
	LINE_NUMBER(582);
	{ popExceptionFrames(frameRef, 1); bypasses[10] = true; goto label_37; } // goto label_36
label_124:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectFloatMap)) == 0) { popExceptionFrames(frameRef, 1); bypasses[11] = true; goto label_28; } // goto label_137
	}
	{
	frame[10].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[1].o)));
	LINE_NUMBER(583);
	if ((frame[4].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	{
	LINE_NUMBER(584);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ObjectFloatMap cannot be parsed without metadata: @.@"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[5].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[6].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}
label_23:;
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[4].o)))->F_elementType;
	sp[0].o = (jobject)((func_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(588);
	if ((frame[13].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_26; }
	}
	{
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Null key: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return;
	}
label_26:;
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[11]) { bypasses[11] = false; goto label_137; }
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap])(ctx, (frame[10].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(594);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_12);
		proxy->F_field1 = (jref) (frame[14].o);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_reset_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(596);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_146;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_146;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[15].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	if (temp0 == 0) goto label_146;
	}
	{
	LINE_NUMBER(599);
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float])(ctx, (frame[10].o), (frame[13].o), (jfloat(0)));
	goto label_149;
	}
label_146:;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	clinit_java_lang_Float(ctx);
	sp[4].o = (jobject)SF_java_lang_Float_TYPE;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[3].o, sp[4].o, (jobject(nullptr)), (jobject(nullptr)));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_17(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_17);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_21);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(0)));
	}
label_149:;
	LINE_NUMBER(603);
	{ popExceptionFrames(frameRef, 1); bypasses[12] = true; goto label_37; } // goto label_36
label_137:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_Attributes)) == 0) { popExceptionFrames(frameRef, 1); bypasses[13] = true; goto label_34; } // goto label_150
	}
	{
	frame[11].o = (checkCast(ctx, &class_mindustry_world_blocks_Attributes, (frame[1].o)));
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) { popExceptionFrames(frameRef, 1); bypasses[14] = true; goto label_34; } // goto label_150
	}
	{
	frame[12].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	LINE_NUMBER(604);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_getOrNull_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (frame[2].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(605);
	if ((frame[13].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_29; }
	}
	{
	LINE_NUMBER(606);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Unknown attribute: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}
label_29:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[12].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_32; }
	}
	{
	LINE_NUMBER(610);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Attribute value must be a number: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[12].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}
label_32:;
label_34: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[13]) { bypasses[13] = false; goto label_150; }
	if (bypasses[14]) { bypasses[14] = false; goto label_150; }
	{
	LINE_NUMBER(613);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, (frame[11].o), (frame[13].o));
	frame[14].f = temp0;
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_13);
		proxy->F_field2 = (frame[14].f);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[11].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_reset_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(615);
	sp[0].o = frame[11].o;
	sp[1].o = frame[13].o;
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[12].o));
	((func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(616);
	{ popExceptionFrames(frameRef, 1); bypasses[15] = true; goto label_37; } // goto label_36
	}
label_150:;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(618);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[13].o));
	if (temp0 == 0) goto label_162;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[13].o));
	frame[13].o = sp[0].o;
	}
label_162:;
	{
	LINE_NUMBER(620);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, (frame[13].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(621);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[14].o), (frame[2].o));
	frame[15].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(622);
	frame[16].o = (frame[1].o);
	LINE_NUMBER(624);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_166;
	}
	{
	frame[17].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_166;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"controller"_j))));
	if (temp0 == 0) goto label_166;
	}
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"controller"_j))));
	frame[22].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"controller"_j));
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(ctx, sp[3].o, (frame[22].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_18(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_18);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_22);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[5].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[17].o);
		sp[6].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, (jint(1)));
	LINE_NUMBER(627);
	{ popExceptionFrames(frameRef, 1); bypasses[16] = true; goto label_37; } // goto label_36
	}
label_166:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_171;
	}
	{
	frame[18].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_171;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"aiController"_j))));
	if (temp0 == 0) goto label_171;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"aiController"_j))));
	frame[22].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"aiController"_j));
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(ctx, sp[3].o, (frame[22].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_19(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_19);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_23);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[5].o = (jobject) proxy;
	}
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[6].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[7].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[18].o));
	sp[6].o = (jobject)((func_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov])(ctx, sp[6].o, sp[7].o);
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, (jint(1)));
	LINE_NUMBER(630);
	{ popExceptionFrames(frameRef, 1); bypasses[17] = true; goto label_37; } // goto label_36
	}
label_171:;
	INST_ALOAD(15);
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[18] = true; goto label_37; } // goto label_176
	{
	LINE_NUMBER(631);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[15].o)))->F_field;
	jint temp0 = (jint)((func_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}
label_35:;
label_37: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_36; }
	if (bypasses[4]) { bypasses[4] = false; goto label_36; }
	if (bypasses[6]) { bypasses[6] = false; goto label_36; }
	if (bypasses[7]) { bypasses[7] = false; goto label_36; }
	if (bypasses[8]) { bypasses[8] = false; goto label_36; }
	if (bypasses[10]) { bypasses[10] = false; goto label_36; }
	if (bypasses[12]) { bypasses[12] = false; goto label_36; }
	if (bypasses[15]) { bypasses[15] = false; goto label_36; }
	if (bypasses[16]) { bypasses[16] = false; goto label_36; }
	if (bypasses[17]) { bypasses[17] = false; goto label_36; }
	if (bypasses[18]) { bypasses[18] = false; goto label_176; }
	{
	LINE_NUMBER(633);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(ctx, sp[3].o, (frame[15].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_20(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_20);
		proxy->F_field1 = (jref) (frame[15].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_24);
		proxy->F_field2 = (jref) (frame[16].o);
		proxy->F_field1 = (jref) (frame[15].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[3].o), (jint(1)));
	goto label_36;
	}
label_176:;
	{
	LINE_NUMBER(640);
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_179;
	}
	{
	frame[19].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_Block)) == 0) goto label_179;
	}
	{
	frame[20].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[1].o)));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[19].o));
	if (temp0 == 0) goto label_179;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"consumes"_j))));
	if (temp0 == 0) goto label_179;
	}
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Class_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_world_Block)), (frame[20].o), (((jobject) createStringLiteral(ctx, u8"consumeBuilder"_j))));
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)));
	frame[22].o = sp[0].o;
	LINE_NUMBER(642);
	frame[23].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_hasItems);
	frame[24].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_hasLiquids);
	frame[25].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_hasPower);
	frame[26].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_acceptsItems);
	LINE_NUMBER(643);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_14);
		proxy->F_field5 = (frame[26].i);
		proxy->F_field4 = (frame[25].i);
		proxy->F_field3 = (frame[24].i);
		proxy->F_field2 = (frame[23].i);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[20].o);
		sp[0].o = (jobject) proxy;
	}
	frame[27].o = sp[0].o;
	LINE_NUMBER(652);
	((func_mindustry_mod_DataPatcher_reset_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable])(ctx, (frame[0].o), (frame[27].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(655);
	((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_hasPower = (jint(0));
	LINE_NUMBER(656);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	((func_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[20].o), (frame[19].o));
	LINE_NUMBER(657);
	((func_mindustry_world_Block_reinitializeConsumers) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_mindustry_world_Block_reinitializeConsumers])(ctx, (frame[20].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(662);
	goto label_191;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(658);
	frame[28].o = sp[0].o;
	LINE_NUMBER(659);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[27].o)))(ctx, (frame[27].o));
	LINE_NUMBER(660);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[28].o));
	LINE_NUMBER(661);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Failed to read consumers for '@': @"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[20].o);
	jint temp0 = jint(1);
	sp[3].o = (jobject)SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[28].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_191:;
	LINE_NUMBER(663);
	goto label_36;
label_179:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_195;
	}
	{
	frame[21].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[3].o)));
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_195;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	if (temp0 == 0) goto label_195;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[14].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))));
	frame[22].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"constructor"_j));
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(ctx, sp[3].o, (frame[22].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Prov_21(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Prov_21);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_arc_func_Cons_25);
		proxy->F_field1 = (jref) (frame[22].o);
		proxy->F_field0 = (jref) (frame[16].o);
		sp[5].o = (jobject) proxy;
	}
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[6].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[6].o = (jobject)((func_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov])(ctx, sp[6].o, (frame[21].o));
	((func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, (jint(1)));
	LINE_NUMBER(666);
	goto label_36;
	}
label_195:;
	{
	LINE_NUMBER(667);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Unknown field '@' for class '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	jint temp0 = jint(1);
	sp[3].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[13].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_36:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(672);
	goto label_201;
	}
label_6:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(671);
	INST_ASTORE(29);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_visitStack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(672);
	throwException(ctx, (frame[29].o));	}
label_201:;
	LINE_NUMBER(673);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:assignValue", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[8].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(679);
	if ((isInstance(ctx, (frame[6].o), &class_arc_util_serialization_JsonValue)) == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_10; } // goto label_12
	}
	{
	frame[9].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[6].o)));
	LINE_NUMBER(680);
	if ((frame[8].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o != (((jobject) &class_mindustry_ctype_MappableContent))) goto label_14;
	}
label_15:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_10; } // goto label_16
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o != (((jobject) &class_mindustry_world_blocks_Attributes))) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_10; } // goto label_16
	}
label_14:;
	{
	LINE_NUMBER(681);
	sp[0].o = ((jobject) &class_mindustry_ctype_UnlockableContent);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(682);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"New content must not be instantiated: @"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[9].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(683);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_12; }
	if (bypasses[1]) { bypasses[1] = false; goto label_16; }
	if (bypasses[2]) { bypasses[2] = false; goto label_16; }
	{
	LINE_NUMBER(686);
	if ((frame[7].i) == 0) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_18:;
	{
	LINE_NUMBER(689);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_listeners;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_mindustry_mod_ContentParser$ParseListener_1(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_mindustry_mod_ContentParser$ParseListener_1 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_mindustry_mod_ContentParser$ParseListener_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(691);
	sp[0].o = frame[5].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	sp[3].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_elementType;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[9].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(694);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(692);
	frame[10].o = sp[0].o;
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Failed to read value @.@ = @: (type = @ elementType = @)\n@"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (6));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (frame[6].o);
	jint temp0 = jint(3);
	sp[3].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(4);
	sp[3].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_elementType;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp2 = jint(5);
	sp[3].o = (jobject)SM_arc_util_Strings_getSimpleMessages_java_lang_Throwable_R_java_lang_String(ctx, (frame[10].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_19:;
	{
	LINE_NUMBER(695);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_listeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(698);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ALOAD(8);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_22:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(699);
	((func_mindustry_mod_DataPatcher_visit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_visit_java_lang_Object])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[9].o));
	frame[11].o = sp[0].o;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(702);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[12].o)))->F_name;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = frame[0].o;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[12].o)))->F_name;
	sp[3].o = frame[12].o;
	LINE_NUMBER(704);
	sp += 4;
	if ((frame[3].o) == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o == (((jobject) &class_arc_struct_ObjectMap))) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o != (((jobject) &class_arc_struct_ObjectFloatMap))) goto label_31;
	}
label_32:;
	INST_ALOAD(3);
	goto label_33;
label_31:;
	{
	LINE_NUMBER(705);
	if ((frame[3].o) == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	if (sp[0].o != (((jobject) &class_arc_struct_Seq))) goto label_34;
	}
	{
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_elementType;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jobject(nullptr)));
	sp += 1;
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(706);
	if ((frame[3].o) == nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_35;
	}
	{
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[1].o);
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jobject(nullptr)));
	sp += 1;
	goto label_33;
	}
label_35:;
	{
	LINE_NUMBER(707);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[12].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_36;
	}
	INST_ACONST_NULL();
	goto label_33;
label_36:;
	{
	LINE_NUMBER(708);
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = frame[10].o;
	sp[2].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[12].o)))->F_name;
	sp[1].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(ctx, sp[0].o, (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[1].o)));
	sp += 1;
	}
label_33:;
	{
	sp -= 5;
	sp[5].o = frame[1].o;
	sp[6].o = frame[2].o;
	LINE_NUMBER(703);
	((func_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	}
label_28:;
	LINE_NUMBER(710);
	goto label_25;
label_26:;
	LINE_NUMBER(711);
	goto label_9;
label_12:;
	{
	LINE_NUMBER(714);
	if ((frame[7].i) == 0) goto label_38;
	}
	{
	((func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[8].o));
	}
label_38:;
	{
	LINE_NUMBER(716);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[6].o));
	}
label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(720);
	goto label_39;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(718);
	frame[9].o = sp[0].o;
	LINE_NUMBER(719);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Failed to assign @.@ = @: @"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (frame[6].o);
	jint temp0 = jint(3);
	sp[3].o = (jobject)SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, (frame[9].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_39:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:resolve", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(728);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(730);
	sp[0].o = frame[1].o;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_root;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(731);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_nameToType;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_ctype_ContentType, sp[0].o));
	LINE_NUMBER(732);
	if ((frame[5].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(733);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid content type: \u0001"_j.string, 1, (frame[2].o));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap])(ctx, sp[1].o, (frame[5].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[1].o, (((jobject) &class_arc_struct_ObjectMap)), (((jobject) &class_mindustry_ctype_MappableContent)), (((jobject) &class_java_lang_String)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(737);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(738);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(739);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_11;
	}
	{
	frame[7].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_13;
	}
label_11:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, sp[0].o);
	sp++;
label_13:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(741);
	if ((frame[5].i) != (bit_cast<jint>(0x80000000))) goto label_15;
	}
	{
	LINE_NUMBER(742);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Invalid number for array access: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(743);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(744);
	if ((frame[5].i) < 0) goto label_18;
	}
	{
	if ((frame[5].i) < (frame[6].i)) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(745);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Number outside of array bounds: '\u0001' (length is \u0001)"_j.string, 2, (frame[2].o), boxInteger(ctx, (frame[6].i)));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(749);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_21;
	}
	{
	frame[8].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[1].o)));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[8].o), (frame[5].i));
	sp += 1;
	goto label_23;
	}
label_21:;
	{
	sp[0].o = (jobject)SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object(ctx, (frame[1].o), (frame[5].i));
	sp += 1;
	}
label_23:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(750);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_15);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_DataPatcher_reset_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(758);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[7].o);
	jint temp0 = jint(1);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[3].o) == nullptr) goto label_26;
	}
	{
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_elementType;
	sp += 1;
	goto label_29;
	}
label_28:;
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_type;
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	}
label_29:;
	{
	sp -= 2;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jobject(nullptr)));
	goto label_30;
	}
label_26:;
	INST_ACONST_NULL();
label_30:;
	INST_AASTORE();
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(759);
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_ObjectMap)) == 0) goto label_31;
	}
	{
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[1].o)));
	LINE_NUMBER(760);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[3].o)))->F_keyType;
	sp[0].o = (jobject)((func_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(761);
	if ((frame[5].o) != nullptr) goto label_34;
	}
	{
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Null key: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(763);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_34:;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(766);
	if ((frame[6].o) != nullptr) goto label_38;
	}
	{
	LINE_NUMBER(767);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"No key found: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(768);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_38:;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[6].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (jobject(nullptr));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(773);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[5].o));
	frame[5].o = sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(775);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[2].o));
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(777);
	if ((frame[7].o) == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	jint temp0 = (jint)((func_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_47;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_47:;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$FieldData);
	init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(ctx, sp[1].o, (frame[7].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(782);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Unknown field: '@' for '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	jint temp0 = jint(1);
	sp[3].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(783);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:checkField", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(789);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[1].o), (((jobject) &class_mindustry_mod_NoPatch)));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_mod_NoPatch)));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Field '@' cannot be edited."_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[1].o);
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:modifiedField", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(797);
	if (((jint)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_applied) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(799);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(800);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(801);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(803);
	clinit_mindustry_mod_DataPatcher$PatchRecord(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$PatchRecord);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[5].o)))->F_field;
	init_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(804);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_usedpatches;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_resetters;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_16);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(813);
	goto label_10;
label_5:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_arc_struct_Seq)) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(814);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(815);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_resetters;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_mod_DataPatcher_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_mod_DataPatcher_invoke_java_lang_Runnable_17);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(823);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(824);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Missing field \u0001 for object \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_10:;
	LINE_NUMBER(826);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_reset_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_resetters;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:convertKeyType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(833);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:warn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(837);
	((func_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object])(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	LINE_NUMBER(838);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:warnContext", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(841);
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(843);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingPatch;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingPatch;
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingContent;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingContent;
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_content;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingContent;
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o != nullptr) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_currentlyApplyingContent;
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(847);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_asset;
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_warnings;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[ContentPatcher] \u0001"_j.string, 1, (frame[5].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(852);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_after_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:after", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher *) NULL_CHECK((frame[0].o)))->F_afterCallbacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(856);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_copyArray_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:copyArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(859);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_int, 1))) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, getArrayClass(&class_int, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(860);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_long, 1))) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, getArrayClass(&class_long, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(861);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_short, 1))) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, getArrayClass(&class_short, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(862);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_byte, 1))) == 0) goto label_7;
	}
	{
	frame[4].o = (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(863);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_boolean, 1))) == 0) goto label_9;
	}
	{
	frame[5].o = (checkCast(ctx, getArrayClass(&class_boolean, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(864);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_char, 1))) == 0) goto label_11;
	}
	{
	frame[6].o = (checkCast(ctx, getArrayClass(&class_char, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(865);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_float, 1))) == 0) goto label_13;
	}
	{
	frame[7].o = (checkCast(ctx, getArrayClass(&class_float, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(866);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_double, 1))) == 0) goto label_15;
	}
	{
	frame[8].o = (checkCast(ctx, getArrayClass(&class_double, 1), (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o))))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$modifiedField$1_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$modifiedField$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(817);
	if ((isInstance(ctx, (frame[0].o), &class_arc_struct_Seq)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[0].o)));
	LINE_NUMBER(818);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, (frame[3].o), (frame[1].i), (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(820);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(822);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$modifiedField$0_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$modifiedField$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_field;
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_target;
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(810);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(808);
	frame[2].o = sp[0].o;
	LINE_NUMBER(809);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(811);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$resolve$0_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$resolve$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(751);
	if ((isInstance(ctx, (frame[0].o), &class_arc_struct_Seq)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[0].o)));
	LINE_NUMBER(752);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, (frame[3].o), (frame[1].i), (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(754);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(756);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assignValue$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(689);
	((func_mindustry_mod_DataPatcher_created_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_created_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$26_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$26", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$25_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$25", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$24_mindustry_world_Block_arc_struct_Seq_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3, jbool param4, jbool param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$24", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(644);
	jint temp0 = (jint)((func_mindustry_world_Block_isPatchContent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isPatchContent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(645);
	SM_arc_util_Reflect_set_java_lang_Class_java_lang_Object_java_lang_String_java_lang_Object(ctx, (((jobject) &class_mindustry_world_Block)), (frame[0].o), (((jobject) createStringLiteral(ctx, u8"consumeBuilder"_j))), (frame[1].o));
	LINE_NUMBER(646);
	((func_mindustry_world_Block_reinitializeConsumers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_reinitializeConsumers])(ctx, (frame[0].o));
	LINE_NUMBER(647);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (frame[2].i);
	LINE_NUMBER(648);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids = (frame[3].i);
	LINE_NUMBER(649);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (frame[4].i);
	LINE_NUMBER(650);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_acceptsItems = (frame[5].i);
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$23", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(634);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, sp[0].o, (((jobject) &class_arc_util_Nullable)));
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
	{
	clinit_mindustry_mod_ContentParser(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ContentParser_implicitNullable;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(635);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Field '@' cannot be null."_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(638);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$22_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$22", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(633);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$21_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$21", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$20_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$19_arc_util_serialization_JsonValue_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(626);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_units_UnitController, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$18_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$18", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$17_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$16_mindustry_world_blocks_Attributes_mindustry_world_meta_Attribute_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$16", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(614);
	((func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$15_arc_struct_ObjectFloatMap_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$15", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$14_arc_struct_ObjectFloatMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(601);
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(0)));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$13_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(594);
	((func_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$12_arc_struct_ObjectMap_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$11_arc_struct_ObjectMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$10_arc_struct_ObjectMap_arc_struct_ObjectMap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(573);
	((func_arc_struct_ObjectMap_set_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_set_arc_struct_ObjectMap])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$9_boolean_arc_struct_ObjectSet_java_lang_Object(jcontext ctx, jbool param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(555);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(556);
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, (frame[1].o), (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[2].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$8_R_java_lang_Object(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	{
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$7_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(538);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$6_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$5_arc_struct_Seq_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(533);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$4_arc_struct_Seq_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$3", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(491);
	jint temp0 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(494);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(495);
	jint temp0 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[5].o));
	frame[8].i = temp0;
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((frame[6].i) + (frame[8].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(497);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(0)), (frame[7].o), (frame[6].i), (frame[8].i));
	LINE_NUMBER(498);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (jint(0)), (frame[7].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(499);
	goto label_11;
	}
label_5:;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((frame[6].i) + (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(501);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[7].o), (frame[6].i), (frame[5].o));
	LINE_NUMBER(502);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (jint(0)), (frame[7].o), (jint(0)), (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(505);
	((func_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String])(ctx, (frame[0].o), (frame[3].o), (frame[4].o), (frame[7].o), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(508);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(506);
	frame[6].o = sp[0].o;
	LINE_NUMBER(507);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(509);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$2_R_java_lang_Object(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	{
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataPatcher_lambda$assign$1_boolean_arc_struct_Seq_java_lang_Object(jcontext ctx, jbool param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(476);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[1].o), (checkCast(ctx, &class_arc_struct_Seq, (frame[2].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataPatcher_lambda$assign$0_R_java_lang_Object(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$assign$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	{
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataPatcher_lambda$apply$1_mindustry_ctype_Content_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$apply$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataPatcher_dpMod;
	if (sp[0].o != sp[1].o) goto label_1;
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

void SM_mindustry_mod_DataPatcher_lambda$apply$0_Array1_mindustry_world_meta_Attribute_arc_struct_ObjectMap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:lambda$apply$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(109);
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_all = (frame[0].o);
	LINE_NUMBER(110);
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_map = (frame[1].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_DataPatcher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_mod_DataPatcher_maxImageSize = jint(2000);
	SF_mindustry_mod_DataPatcher_patchFormatVersion = jint(2);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher:<clinit>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher(ctx);
	{
	LINE_NUMBER(34);
	clinit_mindustry_mod_DataPatcher$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataPatcher$1);
	init_mindustry_mod_DataPatcher$1(ctx, sp[0].o);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_dpModMeta = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_mod_Mods$LoadedMod(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$LoadedMod);
	clinit_arc_files_Fi(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"dp"_j))));
	clinit_arc_files_Fi(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[3].o = jobject(nullptr);
	sp[4].o = jobject(nullptr);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[5].o = (jobject)SF_mindustry_mod_DataPatcher_dpModMeta;
	init_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_files_Fi_mindustry_mod_Mod_java_lang_ClassLoader_mindustry_mod_Mods$ModMeta(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_dpMod = sp[0].o;
	LINE_NUMBER(43);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_needsArrayFix = (jint(0));
	LINE_NUMBER(44);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_root = sp[0].o;
	LINE_NUMBER(45);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_nameToType = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_mindustry_mod_DataPatcher_createParser_R_mindustry_mod_ContentParser(ctx);
	clinit_mindustry_mod_DataPatcher(ctx);
	SF_mindustry_mod_DataPatcher_parser = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	frame[0].o = sp[0].o;
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_8;
	}
	{
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (95));
	if (temp0 != (jint(-1))) goto label_10;
	}
	{
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_nameToType;
	sp[1].o = (jobject)((func_mindustry_ctype_ContentType_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ctype_ContentType_toString_R_java_lang_String])(ctx, (frame[3].o));
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	}
label_10:;
	{
	LINE_NUMBER(61);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_DataPatcher;
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

	{ // Field currentlyApplyingPatch
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field currentlyApplyingContent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_mod_DataPatcher[] {
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
	(void *) M_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean,
	(void *) M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq,
	(void *) M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean,
	(void *) M_mindustry_mod_DataPatcher_unapply,
	(void *) M_mindustry_mod_DataPatcher_unapply_boolean,
	(void *) M_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq,
	(void *) M_mindustry_mod_DataPatcher_callContentRemove,
	(void *) M_mindustry_mod_DataPatcher_visit_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_created_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String,
	(void *) M_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean,
	(void *) M_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean,
	(void *) M_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_reset_java_lang_Runnable,
	(void *) M_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_after_java_lang_Runnable,
	(void *) M_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object,
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
	{ "isPatched", "(Ljava/lang/Object;)Z" },
	{ "apply", "(Larc/struct/Seq;Larc/struct/Seq;)V" },
	{ "apply", "(Larc/struct/Seq;Larc/struct/Seq;Z)V" },
	{ "unapply", "()V" },
	{ "unapply", "(Z)V" },
	{ "getAddedContent", "()Larc/struct/Seq;" },
	{ "callContentRemove", "()V" },
	{ "visit", "(Ljava/lang/Object;)V" },
	{ "created", "(Ljava/lang/Object;)V" },
	{ "assign", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Lmindustry/mod/DataPatcher$FieldData;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "assignValue", "(Ljava/lang/Object;Ljava/lang/String;Lmindustry/mod/DataPatcher$FieldData;Larc/func/Prov;Larc/func/Cons;Ljava/lang/Object;Z)V" },
	{ "resolve", "(Ljava/lang/Object;Ljava/lang/String;Lmindustry/mod/DataPatcher$FieldData;)[Ljava/lang/Object;" },
	{ "checkField", "(Ljava/lang/reflect/Field;)Z" },
	{ "modifiedField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "reset", "(Ljava/lang/Runnable;)V" },
	{ "convertKeyType", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "warn", "(Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "warnContext", "(Lmindustry/ctype/Content;Larc/files/Fi;Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "after", "(Ljava/lang/Runnable;)V" },
	{ "lambda$assignValue$0", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Object;)V" },
	{ "lambda$assign$23", "(Larc/util/serialization/Json$FieldMetadata;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "lambda$assign$3", "(Ljava/lang/Object;ZLjava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_mod_DataPatcher$FieldData,
	&class_mindustry_mod_DataPatcher$PatchRecord,
};

static FieldMetadata fields[] {
	{ "dpModMeta", &class_mindustry_mod_Mods$ModMeta, (intptr_t) &SF_mindustry_mod_DataPatcher_dpModMeta, "Lmindustry/mod/Mods$ModMeta;", 10 },
	{ "dpMod", &class_mindustry_mod_Mods$LoadedMod, (intptr_t) &SF_mindustry_mod_DataPatcher_dpMod, "Lmindustry/mod/Mods$LoadedMod;", 25 },
	{ "maxImageSize", &class_int, (intptr_t) &SF_mindustry_mod_DataPatcher_maxImageSize, "I", 25 },
	{ "patchFormatVersion", &class_int, (intptr_t) &SF_mindustry_mod_DataPatcher_patchFormatVersion, "I", 25 },
	{ "needsArrayFix", &class_boolean, (intptr_t) &SF_mindustry_mod_DataPatcher_needsArrayFix, "Z", 10 },
	{ "root", &class_java_lang_Object, (intptr_t) &SF_mindustry_mod_DataPatcher_root, "Ljava/lang/Object;", 26 },
	{ "nameToType", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_mod_DataPatcher_nameToType, "Larc/struct/ObjectMap;", 26 },
	{ "currentDataPatcher", &class_mindustry_mod_DataPatcher, (intptr_t) &SF_mindustry_mod_DataPatcher_currentDataPatcher, "Lmindustry/mod/DataPatcher;", 10 },
	{ "parser", &class_mindustry_mod_ContentParser, (intptr_t) &SF_mindustry_mod_DataPatcher_parser, "Lmindustry/mod/ContentParser;", 10 },
	{ "applied", &class_boolean, offsetof(mindustry_mod_DataPatcher, F_applied), "Z", 2 },
	{ "contentLoader", &class_mindustry_core_ContentLoader, offsetof(mindustry_mod_DataPatcher, F_contentLoader), "Lmindustry/core/ContentLoader;", 2 },
	{ "usedpatches", &class_arc_struct_ObjectSet, offsetof(mindustry_mod_DataPatcher, F_usedpatches), "Larc/struct/ObjectSet;", 2 },
	{ "resetters", &class_arc_struct_Seq, offsetof(mindustry_mod_DataPatcher, F_resetters), "Larc/struct/Seq;", 2 },
	{ "afterCallbacks", &class_arc_struct_Seq, offsetof(mindustry_mod_DataPatcher, F_afterCallbacks), "Larc/struct/Seq;", 2 },
	{ "visitStack", &class_arc_struct_Seq, offsetof(mindustry_mod_DataPatcher, F_visitStack), "Larc/struct/Seq;", 2 },
	{ "addedContent", &class_arc_struct_Seq, offsetof(mindustry_mod_DataPatcher, F_addedContent), "Larc/struct/Seq;", 2 },
	{ "currentlyApplyingPatch", &class_mindustry_mod_data_PatchAsset, offsetof(mindustry_mod_DataPatcher, F_currentlyApplyingPatch), "Lmindustry/mod/data/PatchAsset;", 2 },
	{ "currentlyApplyingContent", &class_mindustry_mod_data_ContentAsset, offsetof(mindustry_mod_DataPatcher, F_currentlyApplyingContent), "Lmindustry/mod/data/ContentAsset;", 2 },
	{ "addedVars", &class_arc_struct_Seq, offsetof(mindustry_mod_DataPatcher, F_addedVars), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataPatcher, 0, "()V", 1 },
	{ "createParser", (intptr_t) SM_mindustry_mod_DataPatcher_createParser_R_mindustry_mod_ContentParser, 0, "()Lmindustry/mod/ContentParser;", 8 },
	{ "isPatched", (intptr_t) M_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean, VTABLE_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "apply", (intptr_t) M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq, VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq, "(Larc/struct/Seq;Larc/struct/Seq;)V", 1 },
	{ "apply", (intptr_t) M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean, VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean, "(Larc/struct/Seq;Larc/struct/Seq;Z)V", 1 },
	{ "unapply", (intptr_t) M_mindustry_mod_DataPatcher_unapply, VTABLE_mindustry_mod_DataPatcher_unapply, "()V", 1 },
	{ "unapply", (intptr_t) M_mindustry_mod_DataPatcher_unapply_boolean, VTABLE_mindustry_mod_DataPatcher_unapply_boolean, "(Z)V", 1 },
	{ "getAddedContent", (intptr_t) M_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq, VTABLE_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "callContentRemove", (intptr_t) M_mindustry_mod_DataPatcher_callContentRemove, VTABLE_mindustry_mod_DataPatcher_callContentRemove, "()V", 0 },
	{ "fixContentArrays", (intptr_t) SM_mindustry_mod_DataPatcher_fixContentArrays, 0, "()V", 9 },
	{ "getReplacementBlock", (intptr_t) SM_mindustry_mod_DataPatcher_getReplacementBlock_mindustry_world_Block_R_mindustry_world_Block, 0, "(Lmindustry/world/Block;)Lmindustry/world/Block;", 10 },
	{ "visit", (intptr_t) M_mindustry_mod_DataPatcher_visit_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_visit_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
	{ "created", (intptr_t) M_mindustry_mod_DataPatcher_created_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_created_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
	{ "assign", (intptr_t) M_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String, VTABLE_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Lmindustry/mod/DataPatcher$FieldData;Ljava/lang/Object;Ljava/lang/String;)V", 0 },
	{ "assignValue", (intptr_t) M_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean, VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean, "(Ljava/lang/Object;Ljava/lang/String;Lmindustry/mod/DataPatcher$FieldData;Larc/func/Prov;Larc/func/Cons;Ljava/lang/Object;Z)V", 0 },
	{ "resolve", (intptr_t) M_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/String;Lmindustry/mod/DataPatcher$FieldData;)[Ljava/lang/Object;", 0 },
	{ "checkField", (intptr_t) M_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean, VTABLE_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean, "(Ljava/lang/reflect/Field;)Z", 0 },
	{ "modifiedField", (intptr_t) M_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", 0 },
	{ "reset", (intptr_t) M_mindustry_mod_DataPatcher_reset_java_lang_Runnable, VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 0 },
	{ "convertKeyType", (intptr_t) M_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 0 },
	{ "warn", (intptr_t) M_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object, "(Ljava/lang/String;[Ljava/lang/Object;)V", 128 },
	{ "warnContext", (intptr_t) M_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object, "(Lmindustry/ctype/Content;Larc/files/Fi;Ljava/lang/String;[Ljava/lang/Object;)V", 128 },
	{ "after", (intptr_t) M_mindustry_mod_DataPatcher_after_java_lang_Runnable, VTABLE_mindustry_mod_DataPatcher_after_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 0 },
	{ "copyArray", (intptr_t) SM_mindustry_mod_DataPatcher_copyArray_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "lambda$modifiedField$1", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$modifiedField$1_java_lang_Object_int_java_lang_Object, 0, "(Ljava/lang/Object;ILjava/lang/Object;)V", 4106 },
	{ "lambda$modifiedField$0", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$modifiedField$0_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object, 0, "(Lmindustry/mod/DataPatcher$PatchRecord;Ljava/lang/Object;)V", 4106 },
	{ "lambda$resolve$0", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$resolve$0_java_lang_Object_int_java_lang_Object, 0, "(Ljava/lang/Object;ILjava/lang/Object;)V", 4106 },
	{ "lambda$assignValue$0", (intptr_t) M_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;Ljava/lang/Object;)V", 4098 },
	{ "lambda$assign$26", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$26_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$25", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$25_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$24", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$24_mindustry_world_Block_arc_struct_Seq_boolean_boolean_boolean_boolean, 0, "(Lmindustry/world/Block;Larc/struct/Seq;ZZZZ)V", 4106 },
	{ "lambda$assign$23", (intptr_t) M_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object, "(Larc/util/serialization/Json$FieldMetadata;Ljava/lang/Object;Ljava/lang/Object;)V", 4098 },
	{ "lambda$assign$22", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$22_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$21", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$21_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$20", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$20_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$19", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$19_arc_util_serialization_JsonValue_mindustry_gen_Unit_R_mindustry_entities_units_UnitController, 0, "(Larc/util/serialization/JsonValue;Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;", 4106 },
	{ "lambda$assign$18", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$18_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$17", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$17_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$16", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$16_mindustry_world_blocks_Attributes_mindustry_world_meta_Attribute_float, 0, "(Lmindustry/world/blocks/Attributes;Lmindustry/world/meta/Attribute;F)V", 4106 },
	{ "lambda$assign$15", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$15_arc_struct_ObjectFloatMap_java_lang_Object_java_lang_Object, 0, "(Larc/struct/ObjectFloatMap;Ljava/lang/Object;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$14", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$14_arc_struct_ObjectFloatMap_java_lang_Object_R_java_lang_Object, 0, "(Larc/struct/ObjectFloatMap;Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$13", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$13_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap, 0, "(Larc/struct/ObjectFloatMap;Larc/struct/ObjectFloatMap;)V", 4106 },
	{ "lambda$assign$12", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$12_arc_struct_ObjectMap_java_lang_Object_java_lang_Object, 0, "(Larc/struct/ObjectMap;Ljava/lang/Object;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$11", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$11_arc_struct_ObjectMap_java_lang_Object_R_java_lang_Object, 0, "(Larc/struct/ObjectMap;Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$10", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$10_arc_struct_ObjectMap_arc_struct_ObjectMap, 0, "(Larc/struct/ObjectMap;Larc/struct/ObjectMap;)V", 4106 },
	{ "lambda$assign$9", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$9_boolean_arc_struct_ObjectSet_java_lang_Object, 0, "(ZLarc/struct/ObjectSet;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$8", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$8_R_java_lang_Object, 0, "()Ljava/lang/Object;", 4106 },
	{ "lambda$assign$7", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$7_java_lang_Object_int_java_lang_Object, 0, "(Ljava/lang/Object;ILjava/lang/Object;)V", 4106 },
	{ "lambda$assign$6", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$6_java_lang_Object_int_R_java_lang_Object, 0, "(Ljava/lang/Object;I)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$5", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$5_arc_struct_Seq_int_java_lang_Object, 0, "(Larc/struct/Seq;ILjava/lang/Object;)V", 4106 },
	{ "lambda$assign$4", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$4_arc_struct_Seq_int_R_java_lang_Object, 0, "(Larc/struct/Seq;I)Ljava/lang/Object;", 4106 },
	{ "lambda$assign$3", (intptr_t) M_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object, VTABLE_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object, "(Ljava/lang/Object;ZLjava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", 4098 },
	{ "lambda$assign$2", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$2_R_java_lang_Object, 0, "()Ljava/lang/Object;", 4106 },
	{ "lambda$assign$1", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$1_boolean_arc_struct_Seq_java_lang_Object, 0, "(ZLarc/struct/Seq;Ljava/lang/Object;)V", 4106 },
	{ "lambda$assign$0", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$assign$0_R_java_lang_Object, 0, "()Ljava/lang/Object;", 4106 },
	{ "lambda$apply$1", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$apply$1_mindustry_ctype_Content_R_boolean, 0, "(Lmindustry/ctype/Content;)Z", 4106 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_mod_DataPatcher_lambda$apply$0_Array1_mindustry_world_meta_Attribute_arc_struct_ObjectMap, 0, "([Lmindustry/world/meta/Attribute;Larc/struct/ObjectMap;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_DataPatcher, 0, "()V", 8 },
};

Class class_mindustry_mod_DataPatcher{
		.nativeName = (intptr_t) "mindustry/mod/DataPatcher",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataPatcher),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataPatcher,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataPatcher,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_DataPatcher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 58,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataPatcher = registerClass(&class_mindustry_mod_DataPatcher);

}
