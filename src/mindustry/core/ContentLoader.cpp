#include "mindustry/core/ContentLoader.h"
#include "java/lang/Integer.h"
#include "mindustry/content/Bullets.h"
#include "arc/Events.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/content/SectorPresets.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/Throwable.h"
#include "mindustry/ai/UnitStance.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/type/Liquid.h"
#include "arc/Files.h"
#include "mindustry/core/ContentLoader_invoke_arc_func_Cons_7.h"
#include "mindustry/core/ContentLoader_invoke_arc_func_Cons_6.h"
#include "mindustry/core/ContentLoader_invoke_arc_func_Cons_5.h"
#include "mindustry/type/Item.h"
#include "mindustry/core/ContentLoader_invoke_arc_func_Cons_4.h"
#include "arc/util/Nullable.h"
#include "mindustry/content/Items.h"
#include "mindustry/logic/GlobalVars.h"
#include "java/lang/Object.h"
#include "mindustry/content/Planets.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/ColorMapper.h"
#include "arc/files/Fi.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/content/Weathers.h"
#include "mindustry/content/SerpuloTechTree.h"
#include "mindustry/content/UnitTypes.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Weather.h"
#include "mindustry/content/Loadouts.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/ai/UnitCommand.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/EventType_ContentInitEvent.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/content/TeamEntries.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/core/ContentLoader_invoke_arc_func_Intf_1.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/content/ErekirTechTree.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_core_ContentLoader(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_ContentLoader *) object;
	if (self->F_contentNameMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentNameMap)->clazz)->markFunction)((jobject) self->F_contentNameMap, mark, depth + 1);
	if (self->F_contentMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentMap)->clazz)->markFunction)((jobject) self->F_contentMap, mark, depth + 1);
	if (self->F_nameMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameMap)->clazz)->markFunction)((jobject) self->F_nameMap, mark, depth + 1);
	if (self->F_temporaryMapper)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_temporaryMapper)->clazz)->markFunction)((jobject) self->F_temporaryMapper, mark, depth + 1);
	if (self->F_currentMod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentMod)->clazz)->markFunction)((jobject) self->F_currentMod, mark, depth + 1);
	if (self->F_lastAdded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastAdded)->clazz)->markFunction)((jobject) self->F_lastAdded, mark, depth + 1);
	if (self->F_initialization)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialization)->clazz)->markFunction)((jobject) self->F_initialization, mark, depth + 1);
}

void clinit_mindustry_core_ContentLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_ContentLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_ContentLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_ObjectMap, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_contentNameMap = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_contentMap = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_nameMap = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_initialization = (jref) sp[1].o;
	LINE_NUMBER(37);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[4].o));
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	jint temp1 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[4].o));
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(37);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_copy_R_mindustry_core_ContentLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	clinit_mindustry_core_ContentLoader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_ContentLoader);
	init_mindustry_core_ContentLoader(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[1].o)))->F_initialization;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_initialization;
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_lastAdded = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_currentMod;
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_currentMod = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	((mindustry_core_ContentLoader *) NULL_CHECK(sp[0].o))->F_temporaryMapper = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[1].o)))->F_nameMap;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_nameMap;
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[1].o)))->F_contentMap;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[1].o)))->F_contentNameMap;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	LINE_NUMBER(50);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_createBaseContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:createBaseContent", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		jobject exc = clearCurrentException(frameRef);
		popExceptionFrames(frameRef, 1);
		const char* cname = (exc && exc->clazz && ((jclass)exc->clazz)->nativeName) ? (const char*)((jclass)exc->clazz)->nativeName : "Throwable";
		printf("[ContentLoader] EXCEPTION in createBaseContent: %s\n", cname);
		fflush(stdout);
		if (exc) {
			((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, exc)->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, exc);
		}
		popStackFrame(ctx);
		return;
	}
	{
	LINE_NUMBER(59);
	printf("[ContentLoader] loading UnitCommand...\n"); fflush(stdout);
	SM_mindustry_ai_UnitCommand_loadAll(ctx);
	LINE_NUMBER(60);
	printf("[ContentLoader] loading TeamEntries...\n"); fflush(stdout);
	SM_mindustry_content_TeamEntries_load(ctx);
	LINE_NUMBER(61);
	printf("[ContentLoader] loading Items...\n"); fflush(stdout);
	SM_mindustry_content_Items_load(ctx);
	LINE_NUMBER(62);
	printf("[ContentLoader] loading UnitStance...\n"); fflush(stdout);
	SM_mindustry_ai_UnitStance_loadAll(ctx);
	LINE_NUMBER(63);
	printf("[ContentLoader] loading StatusEffects...\n"); fflush(stdout);
	SM_mindustry_content_StatusEffects_load(ctx);
	LINE_NUMBER(64);
	printf("[ContentLoader] loading Liquids...\n"); fflush(stdout);
	SM_mindustry_content_Liquids_load(ctx);
	LINE_NUMBER(65);
	printf("[ContentLoader] loading Bullets...\n"); fflush(stdout);
	SM_mindustry_content_Bullets_load(ctx);
	LINE_NUMBER(66);
	printf("[ContentLoader] loading UnitTypes...\n"); fflush(stdout);
	SM_mindustry_content_UnitTypes_load(ctx);
	LINE_NUMBER(67);
	printf("[ContentLoader] loading Blocks...\n"); fflush(stdout);
	SM_mindustry_content_Blocks_load(ctx);
	printf("[ContentLoader] Blocks loaded! loading Loadouts...\n"); fflush(stdout);
	LINE_NUMBER(68);
	SM_mindustry_content_Loadouts_load(ctx);
	printf("[ContentLoader] Loadouts loaded! loading Weathers...\n"); fflush(stdout);
	LINE_NUMBER(69);
	SM_mindustry_content_Weathers_load(ctx);
	printf("[ContentLoader] Weathers loaded! loading Planets...\n"); fflush(stdout);
	LINE_NUMBER(70);
	SM_mindustry_content_Planets_load(ctx);
	printf("[ContentLoader] Planets loaded! loading SectorPresets...\n"); fflush(stdout);
	LINE_NUMBER(71);
	SM_mindustry_content_SectorPresets_load(ctx);
	printf("[ContentLoader] SectorPresets loaded! loading SerpuloTechTree...\n"); fflush(stdout);
	LINE_NUMBER(72);
	SM_mindustry_content_SerpuloTechTree_load(ctx);
	printf("[ContentLoader] SerpuloTechTree loaded! loading ErekirTechTree...\n"); fflush(stdout);
	LINE_NUMBER(73);
	SM_mindustry_content_ErekirTechTree_load(ctx);
	printf("[ContentLoader] createBaseContent all done!\n"); fflush(stdout);
	LINE_NUMBER(74);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_createModContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:createModContent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(79);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_loadContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_loadContent])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_logContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:logContent", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
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
	LINE_NUMBER(87);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	frame[6].i = ((jint)((mindustry_ctype_Content *) NULL_CHECK((checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o))))->F_id);
	LINE_NUMBER(89);
	if ((frame[6].i) == (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(90);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Out-of-order IDs for content '\u0001' (expected \u0001 but got \u0001)"_j.string, 3, sp[1].o, boxInteger(ctx, (frame[5].i)), boxInteger(ctx, (frame[6].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(87);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(86);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(95);
	SM_arc_util_Log_debug_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"--- CONTENT INFO ---"_j))));
	LINE_NUMBER(96);
	frame[1].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[@]: loaded @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[2].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))))->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i)))))->F_size));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	INST_IINC(1, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(99);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Total content loaded: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[2].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_ContentLoader_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_core_ContentLoader_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_core_ContentLoader_invoke_arc_func_Intf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	SM_arc_util_Log_debug_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"-------------------"_j))));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	printf("[ContentLoader] ContentLoader::init starting...\n"); fflush(stdout);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	printf("[ContentLoader] ContentLoader::init step 1: initialize(init)\n"); fflush(stdout);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_ContentLoader_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_core_ContentLoader_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_core_ContentLoader_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_ContentLoader_initialize_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_initialize_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	printf("[ContentLoader] ContentLoader::init step 1 finished!\n"); fflush(stdout);
	LINE_NUMBER(106);
	printf("[ContentLoader] ContentLoader::init step 2: initialize(load)\n"); fflush(stdout);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_ContentLoader_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_core_ContentLoader_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_core_ContentLoader_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_ContentLoader_initialize_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_initialize_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	printf("[ContentLoader] ContentLoader::init step 2 finished!\n"); fflush(stdout);
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	if (sp[0].o == nullptr) goto label_3;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_logicVars;
	POP_N(1); // Pop method args
	((func_mindustry_logic_GlobalVars_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_init])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(108);
	printf("[ContentLoader] ContentLoader::init firing ContentInitEvent...\n"); fflush(stdout);
	clinit_mindustry_game_EventType$ContentInitEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ContentInitEvent);
	init_mindustry_game_EventType$ContentInitEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	printf("[ContentLoader] ContentLoader::init completed successfully!\n"); fflush(stdout);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_ContentLoader_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_core_ContentLoader_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_core_ContentLoader_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_ContentLoader_initialize_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_initialize_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_ContentLoader_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_core_ContentLoader_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_core_ContentLoader_invoke_arc_func_Cons_7);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_ContentLoader_initialize_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_initialize_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_initialize_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:initialize", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_initialization;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(121);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)));
	frame[6].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(124);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[7].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(132);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(125);
	frame[8].o = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[7].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(127);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[8].o));
	LINE_NUMBER(128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable])(ctx, sp[0].o, (frame[7].o), (frame[8].o));
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(130);
	clinit_arc_util_Log(ctx);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[8].o));
	printf("[ContentLoader] Exception during content initialization! See error above.\n"); fflush(stdout);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(133);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(121);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_initialization;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_loadColors(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:loadColors", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sprites/block_colors.png"_j))));
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(142);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width)) goto label_3;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, (frame[0].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, (frame[1].o), (frame[2].i), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(146);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	if ((frame[3].i) != (255)) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(151);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_mapColor;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(0.5f)), -1)) <= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_squareSprite = sp[1].i;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_mapColor;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(1));
	LINE_NUMBER(153);
	((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasColor = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(142);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(156);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(157);
	SM_mindustry_world_ColorMapper_load(ctx);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:getLastAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_removeLast(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:removeLast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)));
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[2].o)));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded;
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_handleContent_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:handleContent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_lastAdded = (jref) (frame[1].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[1].o));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_setCurrentMod_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:setCurrentMod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (frame[1].o);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_transformName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:transformName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_currentMod;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_handleMappableContent_mindustry_ctype_MappableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:handleMappableContent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	sp[1].o = (jobject)((func_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp1 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	sp[1].o = (jobject)((func_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(194);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[2].o));
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(197);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Two content objects defined with the same name: '\u0001'"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_currentMod;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[1].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_currentMod;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod = (jref) sp[1].o;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_sourceFile;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	clinit_arc_files_Fi(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	init_arc_files_Fi_java_lang_String(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_sourceFile = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	sp[1].o = (jobject)((func_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_nameMap;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:setTemporaryMapper", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper = (jref) (frame[1].o);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:byName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_nameMap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_MappableContent, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:getContentMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:each", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(224);
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(223);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:getByName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(229);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(232);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[1].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(236);
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveFileReader_modContentNameMap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[2].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_MappableContent, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:getByID", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0))))->length) == 0) goto label_1;
	}
	{
	LINE_NUMBER(246);
	if ((frame[2].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0))))->length) <= (frame[2].i)) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[2].i))) != nullptr) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (jint(0)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}
label_6:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_temporaryMapper;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[2].i)));
	}
label_1:;
	{
	LINE_NUMBER(255);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp1 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp1))))->F_size)) goto label_7;
	}
	INST_ILOAD(2);
	if ((--sp)->i >= 0) goto label_8;
label_7:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[2].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:getBy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:getNamesBy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentNameMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_ContentLoader_remove_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(271);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(274);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[1].o)));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap])(ctx, (frame[0].o), (frame[2].o));
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[3].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_nameMap;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[3].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != (frame[3].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_nameMap;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[3].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(279);
	((func_mindustry_ctype_Content_removeContent) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_Content_removeContent])(ctx, (frame[1].o));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:blocks", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:block", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:block", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_items_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:items", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:item", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_item_java_lang_String_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:item", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:liquids", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:liquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_liquid_java_lang_String_R_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:liquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_bullets_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:bullets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_bullet;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_bullet_int_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:bullet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_bullet;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:statusEffects", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:statusEffect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:sectors", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_sector_java_lang_String_R_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:sector", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_SectorPreset, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_units_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:units", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unit_int_R_mindustry_type_UnitType(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_planets_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:planets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_planet_java_lang_String_R_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:planet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:weathers", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_weather_java_lang_String_R_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:weather", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Weather, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unitStances", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitStance;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unitStance_int_R_mindustry_ai_UnitStance(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unitStance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitStance;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unitStance_java_lang_String_R_mindustry_ai_UnitStance(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unitStance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitStance;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unitCommands", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitCommand;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unitCommand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitCommand;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_ContentLoader_unitCommand_java_lang_String_R_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:unitCommand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unitCommand;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_ContentLoader_lambda$logContent$0_mindustry_ctype_ContentType_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/ContentLoader:lambda$logContent$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_core_ContentLoader *) NULL_CHECK((frame[0].o)))->F_contentMap;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0))))->F_size);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_ContentLoader;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field currentMod
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastAdded
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getLastAdded
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method byName
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
}

void *vtable_mindustry_core_ContentLoader[] {
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
	(void *) M_mindustry_core_ContentLoader_copy_R_mindustry_core_ContentLoader,
	(void *) M_mindustry_core_ContentLoader_createBaseContent,
	(void *) M_mindustry_core_ContentLoader_createModContent,
	(void *) M_mindustry_core_ContentLoader_logContent,
	(void *) M_mindustry_core_ContentLoader_init,
	(void *) M_mindustry_core_ContentLoader_load,
	(void *) M_mindustry_core_ContentLoader_initialize_arc_func_Cons,
	(void *) M_mindustry_core_ContentLoader_loadColors,
	(void *) M_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content,
	(void *) M_mindustry_core_ContentLoader_removeLast,
	(void *) M_mindustry_core_ContentLoader_handleContent_mindustry_ctype_Content,
	(void *) M_mindustry_core_ContentLoader_setCurrentMod_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_core_ContentLoader_transformName_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_core_ContentLoader_handleMappableContent_mindustry_ctype_MappableContent,
	(void *) M_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent,
	(void *) M_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent,
	(void *) M_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_each_arc_func_Cons,
	(void *) M_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent,
	(void *) M_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content,
	(void *) M_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap,
	(void *) M_mindustry_core_ContentLoader_remove_mindustry_ctype_Content,
	(void *) M_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block,
	(void *) M_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block,
	(void *) M_mindustry_core_ContentLoader_items_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item,
	(void *) M_mindustry_core_ContentLoader_item_java_lang_String_R_mindustry_type_Item,
	(void *) M_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid,
	(void *) M_mindustry_core_ContentLoader_liquid_java_lang_String_R_mindustry_type_Liquid,
	(void *) M_mindustry_core_ContentLoader_bullets_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_bullet_int_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect,
	(void *) M_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_sector_java_lang_String_R_mindustry_type_SectorPreset,
	(void *) M_mindustry_core_ContentLoader_units_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_unit_int_R_mindustry_type_UnitType,
	(void *) M_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType,
	(void *) M_mindustry_core_ContentLoader_planets_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_planet_java_lang_String_R_mindustry_type_Planet,
	(void *) M_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_weather_java_lang_String_R_mindustry_type_Weather,
	(void *) M_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_unitStance_int_R_mindustry_ai_UnitStance,
	(void *) M_mindustry_core_ContentLoader_unitStance_java_lang_String_R_mindustry_ai_UnitStance,
	(void *) M_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq,
	(void *) M_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand,
	(void *) M_mindustry_core_ContentLoader_unitCommand_java_lang_String_R_mindustry_ai_UnitCommand,
	(void *) M_mindustry_core_ContentLoader_lambda$logContent$0_mindustry_ctype_ContentType_R_int,
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
	{ "copy", "()Lmindustry/core/ContentLoader;" },
	{ "createBaseContent", "()V" },
	{ "createModContent", "()V" },
	{ "logContent", "()V" },
	{ "init", "()V" },
	{ "load", "()V" },
	{ "initialize", "(Larc/func/Cons;)V" },
	{ "loadColors", "()V" },
	{ "getLastAdded", "()Lmindustry/ctype/Content;" },
	{ "removeLast", "()V" },
	{ "handleContent", "(Lmindustry/ctype/Content;)V" },
	{ "setCurrentMod", "(Lmindustry/mod/Mods$LoadedMod;)V" },
	{ "transformName", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "handleMappableContent", "(Lmindustry/ctype/MappableContent;)V" },
	{ "setTemporaryMapper", "([[Lmindustry/ctype/MappableContent;)V" },
	{ "byName", "(Ljava/lang/String;)Lmindustry/ctype/MappableContent;" },
	{ "getContentMap", "()[Larc/struct/Seq;" },
	{ "each", "(Larc/func/Cons;)V" },
	{ "getByName", "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/MappableContent;" },
	{ "getByID", "(Lmindustry/ctype/ContentType;I)Lmindustry/ctype/Content;" },
	{ "getBy", "(Lmindustry/ctype/ContentType;)Larc/struct/Seq;" },
	{ "getNamesBy", "(Lmindustry/ctype/ContentType;)Larc/struct/ObjectMap;" },
	{ "remove", "(Lmindustry/ctype/Content;)V" },
	{ "blocks", "()Larc/struct/Seq;" },
	{ "block", "(I)Lmindustry/world/Block;" },
	{ "block", "(Ljava/lang/String;)Lmindustry/world/Block;" },
	{ "items", "()Larc/struct/Seq;" },
	{ "item", "(I)Lmindustry/type/Item;" },
	{ "item", "(Ljava/lang/String;)Lmindustry/type/Item;" },
	{ "liquids", "()Larc/struct/Seq;" },
	{ "liquid", "(I)Lmindustry/type/Liquid;" },
	{ "liquid", "(Ljava/lang/String;)Lmindustry/type/Liquid;" },
	{ "bullets", "()Larc/struct/Seq;" },
	{ "bullet", "(I)Lmindustry/entities/bullet/BulletType;" },
	{ "statusEffects", "()Larc/struct/Seq;" },
	{ "statusEffect", "(Ljava/lang/String;)Lmindustry/type/StatusEffect;" },
	{ "sectors", "()Larc/struct/Seq;" },
	{ "sector", "(Ljava/lang/String;)Lmindustry/type/SectorPreset;" },
	{ "units", "()Larc/struct/Seq;" },
	{ "unit", "(I)Lmindustry/type/UnitType;" },
	{ "unit", "(Ljava/lang/String;)Lmindustry/type/UnitType;" },
	{ "planets", "()Larc/struct/Seq;" },
	{ "planet", "(Ljava/lang/String;)Lmindustry/type/Planet;" },
	{ "weathers", "()Larc/struct/Seq;" },
	{ "weather", "(Ljava/lang/String;)Lmindustry/type/Weather;" },
	{ "unitStances", "()Larc/struct/Seq;" },
	{ "unitStance", "(I)Lmindustry/ai/UnitStance;" },
	{ "unitStance", "(Ljava/lang/String;)Lmindustry/ai/UnitStance;" },
	{ "unitCommands", "()Larc/struct/Seq;" },
	{ "unitCommand", "(I)Lmindustry/ai/UnitCommand;" },
	{ "unitCommand", "(Ljava/lang/String;)Lmindustry/ai/UnitCommand;" },
	{ "lambda$logContent$0", "(Lmindustry/ctype/ContentType;)I" },
};

static FieldMetadata fields[] {
	{ "contentNameMap", getArrayClass(&class_arc_struct_ObjectMap, 1), offsetof(mindustry_core_ContentLoader, F_contentNameMap), "[Larc/struct/ObjectMap;", 2 },
	{ "contentMap", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_core_ContentLoader, F_contentMap), "[Larc/struct/Seq;", 2 },
	{ "nameMap", &class_arc_struct_ObjectMap, offsetof(mindustry_core_ContentLoader, F_nameMap), "Larc/struct/ObjectMap;", 2 },
	{ "temporaryMapper", getArrayClass(&class_mindustry_ctype_MappableContent, 2), offsetof(mindustry_core_ContentLoader, F_temporaryMapper), "[[Lmindustry/ctype/MappableContent;", 2 },
	{ "currentMod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_core_ContentLoader, F_currentMod), "Lmindustry/mod/Mods$LoadedMod;", 2 },
	{ "lastAdded", &class_mindustry_ctype_Content, offsetof(mindustry_core_ContentLoader, F_lastAdded), "Lmindustry/ctype/Content;", 2 },
	{ "initialization", &class_arc_struct_ObjectSet, offsetof(mindustry_core_ContentLoader, F_initialization), "Larc/struct/ObjectSet;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_ContentLoader, 0, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_core_ContentLoader_copy_R_mindustry_core_ContentLoader, VTABLE_mindustry_core_ContentLoader_copy_R_mindustry_core_ContentLoader, "()Lmindustry/core/ContentLoader;", 1 },
	{ "createBaseContent", (intptr_t) M_mindustry_core_ContentLoader_createBaseContent, VTABLE_mindustry_core_ContentLoader_createBaseContent, "()V", 1 },
	{ "createModContent", (intptr_t) M_mindustry_core_ContentLoader_createModContent, VTABLE_mindustry_core_ContentLoader_createModContent, "()V", 1 },
	{ "logContent", (intptr_t) M_mindustry_core_ContentLoader_logContent, VTABLE_mindustry_core_ContentLoader_logContent, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_core_ContentLoader_init, VTABLE_mindustry_core_ContentLoader_init, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_core_ContentLoader_load, VTABLE_mindustry_core_ContentLoader_load, "()V", 1 },
	{ "initialize", (intptr_t) M_mindustry_core_ContentLoader_initialize_arc_func_Cons, VTABLE_mindustry_core_ContentLoader_initialize_arc_func_Cons, "(Larc/func/Cons;)V", 2 },
	{ "loadColors", (intptr_t) M_mindustry_core_ContentLoader_loadColors, VTABLE_mindustry_core_ContentLoader_loadColors, "()V", 1 },
	{ "getLastAdded", (intptr_t) M_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content, VTABLE_mindustry_core_ContentLoader_getLastAdded_R_mindustry_ctype_Content, "()Lmindustry/ctype/Content;", 1 },
	{ "removeLast", (intptr_t) M_mindustry_core_ContentLoader_removeLast, VTABLE_mindustry_core_ContentLoader_removeLast, "()V", 1 },
	{ "handleContent", (intptr_t) M_mindustry_core_ContentLoader_handleContent_mindustry_ctype_Content, VTABLE_mindustry_core_ContentLoader_handleContent_mindustry_ctype_Content, "(Lmindustry/ctype/Content;)V", 1 },
	{ "setCurrentMod", (intptr_t) M_mindustry_core_ContentLoader_setCurrentMod_mindustry_mod_Mods$LoadedMod, VTABLE_mindustry_core_ContentLoader_setCurrentMod_mindustry_mod_Mods$LoadedMod, "(Lmindustry/mod/Mods$LoadedMod;)V", 1 },
	{ "transformName", (intptr_t) M_mindustry_core_ContentLoader_transformName_java_lang_String_R_java_lang_String, VTABLE_mindustry_core_ContentLoader_transformName_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "handleMappableContent", (intptr_t) M_mindustry_core_ContentLoader_handleMappableContent_mindustry_ctype_MappableContent, VTABLE_mindustry_core_ContentLoader_handleMappableContent_mindustry_ctype_MappableContent, "(Lmindustry/ctype/MappableContent;)V", 1 },
	{ "setTemporaryMapper", (intptr_t) M_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent, VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent, "([[Lmindustry/ctype/MappableContent;)V", 1 },
	{ "byName", (intptr_t) M_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent, VTABLE_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent, "(Ljava/lang/String;)Lmindustry/ctype/MappableContent;", 1 },
	{ "getContentMap", (intptr_t) M_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq, "()[Larc/struct/Seq;", 1 },
	{ "each", (intptr_t) M_mindustry_core_ContentLoader_each_arc_func_Cons, VTABLE_mindustry_core_ContentLoader_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "getByName", (intptr_t) M_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent, VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent, "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/MappableContent;", 1 },
	{ "getByID", (intptr_t) M_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content, VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content, "(Lmindustry/ctype/ContentType;I)Lmindustry/ctype/Content;", 1 },
	{ "getBy", (intptr_t) M_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq, "(Lmindustry/ctype/ContentType;)Larc/struct/Seq;", 1 },
	{ "getNamesBy", (intptr_t) M_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap, VTABLE_mindustry_core_ContentLoader_getNamesBy_mindustry_ctype_ContentType_R_arc_struct_ObjectMap, "(Lmindustry/ctype/ContentType;)Larc/struct/ObjectMap;", 1 },
	{ "remove", (intptr_t) M_mindustry_core_ContentLoader_remove_mindustry_ctype_Content, VTABLE_mindustry_core_ContentLoader_remove_mindustry_ctype_Content, "(Lmindustry/ctype/Content;)V", 1 },
	{ "blocks", (intptr_t) M_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "block", (intptr_t) M_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block, VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block, "(I)Lmindustry/world/Block;", 1 },
	{ "block", (intptr_t) M_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block, VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block, "(Ljava/lang/String;)Lmindustry/world/Block;", 1 },
	{ "items", (intptr_t) M_mindustry_core_ContentLoader_items_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "item", (intptr_t) M_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item, VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item, "(I)Lmindustry/type/Item;", 1 },
	{ "item", (intptr_t) M_mindustry_core_ContentLoader_item_java_lang_String_R_mindustry_type_Item, VTABLE_mindustry_core_ContentLoader_item_java_lang_String_R_mindustry_type_Item, "(Ljava/lang/String;)Lmindustry/type/Item;", 1 },
	{ "liquids", (intptr_t) M_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "liquid", (intptr_t) M_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid, VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid, "(I)Lmindustry/type/Liquid;", 1 },
	{ "liquid", (intptr_t) M_mindustry_core_ContentLoader_liquid_java_lang_String_R_mindustry_type_Liquid, VTABLE_mindustry_core_ContentLoader_liquid_java_lang_String_R_mindustry_type_Liquid, "(Ljava/lang/String;)Lmindustry/type/Liquid;", 1 },
	{ "bullets", (intptr_t) M_mindustry_core_ContentLoader_bullets_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_bullets_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "bullet", (intptr_t) M_mindustry_core_ContentLoader_bullet_int_R_mindustry_entities_bullet_BulletType, VTABLE_mindustry_core_ContentLoader_bullet_int_R_mindustry_entities_bullet_BulletType, "(I)Lmindustry/entities/bullet/BulletType;", 1 },
	{ "statusEffects", (intptr_t) M_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "statusEffect", (intptr_t) M_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect, VTABLE_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect, "(Ljava/lang/String;)Lmindustry/type/StatusEffect;", 1 },
	{ "sectors", (intptr_t) M_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "sector", (intptr_t) M_mindustry_core_ContentLoader_sector_java_lang_String_R_mindustry_type_SectorPreset, VTABLE_mindustry_core_ContentLoader_sector_java_lang_String_R_mindustry_type_SectorPreset, "(Ljava/lang/String;)Lmindustry/type/SectorPreset;", 1 },
	{ "units", (intptr_t) M_mindustry_core_ContentLoader_units_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "unit", (intptr_t) M_mindustry_core_ContentLoader_unit_int_R_mindustry_type_UnitType, VTABLE_mindustry_core_ContentLoader_unit_int_R_mindustry_type_UnitType, "(I)Lmindustry/type/UnitType;", 1 },
	{ "unit", (intptr_t) M_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType, VTABLE_mindustry_core_ContentLoader_unit_java_lang_String_R_mindustry_type_UnitType, "(Ljava/lang/String;)Lmindustry/type/UnitType;", 1 },
	{ "planets", (intptr_t) M_mindustry_core_ContentLoader_planets_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "planet", (intptr_t) M_mindustry_core_ContentLoader_planet_java_lang_String_R_mindustry_type_Planet, VTABLE_mindustry_core_ContentLoader_planet_java_lang_String_R_mindustry_type_Planet, "(Ljava/lang/String;)Lmindustry/type/Planet;", 1 },
	{ "weathers", (intptr_t) M_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "weather", (intptr_t) M_mindustry_core_ContentLoader_weather_java_lang_String_R_mindustry_type_Weather, VTABLE_mindustry_core_ContentLoader_weather_java_lang_String_R_mindustry_type_Weather, "(Ljava/lang/String;)Lmindustry/type/Weather;", 1 },
	{ "unitStances", (intptr_t) M_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "unitStance", (intptr_t) M_mindustry_core_ContentLoader_unitStance_int_R_mindustry_ai_UnitStance, VTABLE_mindustry_core_ContentLoader_unitStance_int_R_mindustry_ai_UnitStance, "(I)Lmindustry/ai/UnitStance;", 1 },
	{ "unitStance", (intptr_t) M_mindustry_core_ContentLoader_unitStance_java_lang_String_R_mindustry_ai_UnitStance, VTABLE_mindustry_core_ContentLoader_unitStance_java_lang_String_R_mindustry_ai_UnitStance, "(Ljava/lang/String;)Lmindustry/ai/UnitStance;", 1 },
	{ "unitCommands", (intptr_t) M_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq, VTABLE_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "unitCommand", (intptr_t) M_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand, VTABLE_mindustry_core_ContentLoader_unitCommand_int_R_mindustry_ai_UnitCommand, "(I)Lmindustry/ai/UnitCommand;", 1 },
	{ "unitCommand", (intptr_t) M_mindustry_core_ContentLoader_unitCommand_java_lang_String_R_mindustry_ai_UnitCommand, VTABLE_mindustry_core_ContentLoader_unitCommand_java_lang_String_R_mindustry_ai_UnitCommand, "(Ljava/lang/String;)Lmindustry/ai/UnitCommand;", 1 },
	{ "lambda$logContent$0", (intptr_t) M_mindustry_core_ContentLoader_lambda$logContent$0_mindustry_ctype_ContentType_R_int, VTABLE_mindustry_core_ContentLoader_lambda$logContent$0_mindustry_ctype_ContentType_R_int, "(Lmindustry/ctype/ContentType;)I", 4098 },
};

Class class_mindustry_core_ContentLoader{
		.nativeName = (intptr_t) "mindustry/core/ContentLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_ContentLoader),
		.classVtable = (intptr_t) vtable_mindustry_core_ContentLoader,
		.staticInitializer = (intptr_t) clinit_mindustry_core_ContentLoader,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_ContentLoader,
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
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_ContentLoader = registerClass(&class_mindustry_core_ContentLoader);

}
