#include "mindustry/mod/DataPatcher_2.h"
#include "mindustry/mod/ContentParser.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/DataPatcher.h"
#include "arc/files/Fi.h"
#include "mindustry/mod/DataPatcher_2.h"

extern "C" {


void mark_mindustry_mod_DataPatcher$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_mod_ContentParser(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_DataPatcher$2 *) object;
}

void clinit_mindustry_mod_DataPatcher$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_ContentParser(ctx);
}

void init_mindustry_mod_DataPatcher$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher$2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(67);
	init_mindustry_mod_ContentParser(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataPatcher$2_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$2:warnContext", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(71);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_currentDataPatcher;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(72);
	clinit_mindustry_mod_DataPatcher(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_DataPatcher_currentDataPatcher;
	((func_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	}
label_1:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_DataPatcher$2[] {
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
	(void *) M_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov,
	(void *) M_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content,
	(void *) M_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser,
	(void *) M_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_read_java_lang_Runnable,
	(void *) M_mindustry_mod_ContentParser_init,
	(void *) M_mindustry_mod_ContentParser_attempt_java_lang_Runnable,
	(void *) M_mindustry_mod_ContentParser_finishParsing,
	(void *) M_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content,
	(void *) M_mindustry_mod_ContentParser_checkInit,
	(void *) M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable,
	(void *) M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable,
	(void *) M_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent,
	(void *) M_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent,
	(void *) M_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov,
	(void *) M_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov,
	(void *) M_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_checkNullFields_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean,
	(void *) M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_mod_DataPatcher$2_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json,
	(void *) M_mindustry_mod_ContentParser_lambda$readFields$1_mindustry_ctype_UnlockableContent_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_util_serialization_JsonValue_mindustry_content_TechTree$TechNode_Array1_mindustry_type_ItemStack_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_lambda$readFields$3_java_lang_String_mindustry_content_TechTree$TechNode_R_boolean,
	(void *) M_mindustry_mod_ContentParser_lambda$read$0_arc_files_Fi_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_java_lang_Runnable,
	(void *) M_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content,
	(void *) M_mindustry_mod_ContentParser_lambda$parser$1_mindustry_ctype_Content_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$21_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_TeamEntry,
	(void *) M_mindustry_mod_ContentParser_lambda$new$22_mindustry_type_TeamEntry_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$16_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Planet,
	(void *) M_mindustry_mod_ContentParser_lambda$new$20_mindustry_type_Planet_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$18_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_lambda$new$13_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_SectorPreset,
	(void *) M_mindustry_mod_ContentParser_lambda$new$14_mindustry_type_SectorPreset_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$9_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_StatusEffect,
	(void *) M_mindustry_mod_ContentParser_lambda$new$10_mindustry_type_StatusEffect_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$7_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Liquid,
	(void *) M_mindustry_mod_ContentParser_lambda$new$8_mindustry_type_Liquid_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$5_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Weather,
	(void *) M_mindustry_mod_ContentParser_lambda$new$6_mindustry_type_Weather_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$2_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_UnitType,
	(void *) M_mindustry_mod_ContentParser_lambda$new$3_mindustry_type_UnitType_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$0_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_world_Block,
	(void *) M_mindustry_mod_ContentParser_lambda$new$1_arc_util_serialization_JsonValue_mindustry_world_Block,
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
	{ "readBlockConsumers", "(Lmindustry/world/Block;Larc/util/serialization/JsonValue;)V" },
	{ "unitType", "(Larc/util/serialization/JsonValue;)Larc/func/Prov;" },
	{ "getString", "(Larc/util/serialization/JsonValue;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getType", "(Larc/util/serialization/JsonValue;)Ljava/lang/String;" },
	{ "find", "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/Content;" },
	{ "parser", "(Lmindustry/ctype/ContentType;Larc/func/Func;)Lmindustry/mod/ContentParser$TypeParser;" },
	{ "readBundle", "(Lmindustry/ctype/ContentType;Ljava/lang/String;Larc/util/serialization/JsonValue;)V" },
	{ "read", "(Ljava/lang/Runnable;)V" },
	{ "init", "()V" },
	{ "attempt", "(Ljava/lang/Runnable;)V" },
	{ "finishParsing", "()V" },
	{ "parse", "(Lmindustry/mod/Mods$LoadedMod;Ljava/lang/String;Ljava/lang/String;Larc/files/Fi;Lmindustry/ctype/ContentType;)Lmindustry/ctype/Content;" },
	{ "checkInit", "()V" },
	{ "markError", "(Lmindustry/ctype/Content;Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;Ljava/lang/Throwable;)V" },
	{ "markError", "(Lmindustry/ctype/Content;Ljava/lang/Throwable;)V" },
	{ "makeError", "(Ljava/lang/Throwable;Larc/files/Fi;)Ljava/lang/String;" },
	{ "locate", "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/MappableContent;" },
	{ "locateAny", "(Ljava/lang/String;)Lmindustry/ctype/MappableContent;" },
	{ "parseMeshes", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)[Lmindustry/graphics/g3d/GenericMesh;" },
	{ "parseMesh", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;" },
	{ "parseProgressOp", "(Lmindustry/entities/part/DrawPart$PartProgress;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "make", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "make", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "supply", "(Ljava/lang/Class;)Larc/func/Prov;" },
	{ "resolveController", "(Ljava/lang/String;)Larc/func/Prov;" },
	{ "field", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "field", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "fieldOpt", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "checkNullFields", "(Ljava/lang/Object;)V" },
	{ "readFields", "(Ljava/lang/Object;Larc/util/serialization/JsonValue;Z)V" },
	{ "readFields", "(Ljava/lang/Object;Larc/util/serialization/JsonValue;)V" },
	{ "resolve", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "resolve", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;" },
	{ "resolve", "(Ljava/lang/String;Ljava/lang/Class;Z)Ljava/lang/Class;" },
	{ "warn", "(Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "warnContext", "(Lmindustry/ctype/Content;Larc/files/Fi;Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "onNewInstance", "(Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "getJson", "()Larc/util/serialization/Json;" },
	{ "lambda$readFields$1", "(Lmindustry/ctype/UnlockableContent;Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;Larc/util/serialization/JsonValue;Lmindustry/content/TechTree$TechNode;[Lmindustry/type/ItemStack;Ljava/lang/String;)V" },
	{ "lambda$readFields$3", "(Ljava/lang/String;Lmindustry/content/TechTree$TechNode;)Z" },
	{ "lambda$read$0", "(Larc/files/Fi;Lmindustry/mod/Mods$LoadedMod;Lmindustry/ctype/Content;Ljava/lang/Runnable;)V" },
	{ "lambda$parser$0", "(Lmindustry/ctype/ContentType;Larc/func/Func;Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/ctype/Content;" },
	{ "lambda$parser$1", "(Lmindustry/ctype/Content;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$21", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/TeamEntry;" },
	{ "lambda$new$22", "(Lmindustry/type/TeamEntry;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$16", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Planet;" },
	{ "lambda$new$20", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$18", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;" },
	{ "lambda$new$17", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;" },
	{ "lambda$new$13", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/SectorPreset;" },
	{ "lambda$new$14", "(Lmindustry/type/SectorPreset;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$9", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/StatusEffect;" },
	{ "lambda$new$10", "(Lmindustry/type/StatusEffect;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$7", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Liquid;" },
	{ "lambda$new$8", "(Lmindustry/type/Liquid;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$5", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Weather;" },
	{ "lambda$new$6", "(Lmindustry/type/Weather;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$2", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/UnitType;" },
	{ "lambda$new$3", "(Lmindustry/type/UnitType;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$0", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/world/Block;" },
	{ "lambda$new$1", "(Larc/util/serialization/JsonValue;Lmindustry/world/Block;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataPatcher$2, 0, "()V", 0 },
	{ "warnContext", (intptr_t) M_mindustry_mod_DataPatcher$2_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_mod_DataPatcher$2_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object, "(Lmindustry/ctype/Content;Larc/files/Fi;Ljava/lang/String;[Ljava/lang/Object;)V", 128 },
};

Class class_mindustry_mod_DataPatcher$2{
		.nativeName = (intptr_t) "mindustry/mod/DataPatcher$2",
		.parentClass = (intptr_t) &class_mindustry_mod_ContentParser,
		.size = sizeof(mindustry_mod_DataPatcher$2),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataPatcher$2,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataPatcher$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_DataPatcher$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 72,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataPatcher$2 = registerClass(&class_mindustry_mod_DataPatcher$2);

}

