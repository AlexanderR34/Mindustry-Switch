#ifndef HEADER_mindustry_mod_DataPatcher
#define HEADER_mindustry_mod_DataPatcher

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataPatcher {
	java_lang_Object parent;
	jbool F_applied;
	jref F_contentLoader;
	jref F_usedpatches;
	jref F_resetters;
	jref F_afterCallbacks;
	jref F_visitStack;
	jref F_addedContent;
	jref F_currentlyApplyingPatch;
	jref F_currentlyApplyingContent;
	jref F_addedVars;
} mindustry_mod_DataPatcher;

extern Class class_mindustry_mod_DataPatcher;

extern jobject SF_mindustry_mod_DataPatcher_dpModMeta;
extern jobject SF_mindustry_mod_DataPatcher_dpMod;
extern jint SF_mindustry_mod_DataPatcher_maxImageSize;
extern jint SF_mindustry_mod_DataPatcher_patchFormatVersion;
extern jbool SF_mindustry_mod_DataPatcher_needsArrayFix;
extern jobject SF_mindustry_mod_DataPatcher_root;
extern jobject SF_mindustry_mod_DataPatcher_nameToType;
extern jobject SF_mindustry_mod_DataPatcher_currentDataPatcher;
extern jobject SF_mindustry_mod_DataPatcher_parser;

#define VTABLE_mindustry_mod_DataPatcher_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataPatcher_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataPatcher_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataPatcher_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataPatcher_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataPatcher_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_finalize 5
typedef void (*func_mindustry_mod_DataPatcher_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_notify 6
typedef void (*func_mindustry_mod_DataPatcher_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_notifyAll 7
typedef void (*func_mindustry_mod_DataPatcher_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_wait 8
typedef void (*func_mindustry_mod_DataPatcher_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_wait_long 9
typedef void (*func_mindustry_mod_DataPatcher_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataPatcher_wait_long_int 10
typedef void (*func_mindustry_mod_DataPatcher_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean 11
typedef jbool (*func_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq 12
typedef void (*func_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean 13
typedef void (*func_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_mod_DataPatcher_unapply 14
typedef void (*func_mindustry_mod_DataPatcher_unapply)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_unapply_boolean 15
typedef void (*func_mindustry_mod_DataPatcher_unapply_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq 16
typedef jobject (*func_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_callContentRemove 17
typedef void (*func_mindustry_mod_DataPatcher_callContentRemove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher_visit_java_lang_Object 18
typedef void (*func_mindustry_mod_DataPatcher_visit_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_created_java_lang_Object 19
typedef void (*func_mindustry_mod_DataPatcher_created_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String 20
typedef void (*func_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
#define VTABLE_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean 21
typedef void (*func_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6);
#define VTABLE_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object 22
typedef jobject (*func_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean 23
typedef jbool (*func_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object 24
typedef void (*func_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataPatcher_reset_java_lang_Runnable 25
typedef void (*func_mindustry_mod_DataPatcher_reset_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object 26
typedef jobject (*func_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object 27
typedef void (*func_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object 28
typedef void (*func_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_mod_DataPatcher_after_java_lang_Runnable 29
typedef void (*func_mindustry_mod_DataPatcher_after_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object 30
typedef void (*func_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object 31
typedef void (*func_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object 32
typedef void (*func_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4);

void mark_mindustry_mod_DataPatcher(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataPatcher(jcontext ctx);
void init_mindustry_mod_DataPatcher(jcontext ctx, jobject self);
jobject SM_mindustry_mod_DataPatcher_createParser_R_mindustry_mod_ContentParser(jcontext ctx);
jbool M_mindustry_mod_DataPatcher_isPatched_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_DataPatcher_apply_arc_struct_Seq_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_mod_DataPatcher_unapply(jcontext ctx, jobject self);
void M_mindustry_mod_DataPatcher_unapply_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_mod_DataPatcher_getAddedContent_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_mod_DataPatcher_callContentRemove(jcontext ctx, jobject self);
void SM_mindustry_mod_DataPatcher_fixContentArrays(jcontext ctx);
jobject SM_mindustry_mod_DataPatcher_getReplacementBlock_mindustry_world_Block_R_mindustry_world_Block(jcontext ctx, jobject param0);
void M_mindustry_mod_DataPatcher_visit_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataPatcher_created_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataPatcher_assign_java_lang_Object_java_lang_String_java_lang_Object_mindustry_mod_DataPatcher$FieldData_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void M_mindustry_mod_DataPatcher_assignValue_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_arc_func_Prov_arc_func_Cons_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6);
jobject M_mindustry_mod_DataPatcher_resolve_java_lang_Object_java_lang_String_mindustry_mod_DataPatcher$FieldData_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_mindustry_mod_DataPatcher_checkField_java_lang_reflect_Field_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataPatcher_modifiedField_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_mod_DataPatcher_reset_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_DataPatcher_convertKeyType_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_DataPatcher_warn_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_DataPatcher_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_mod_DataPatcher_after_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_mod_DataPatcher_copyArray_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
void SM_mindustry_mod_DataPatcher_lambda$modifiedField$1_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_mod_DataPatcher_lambda$modifiedField$0_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$resolve$0_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
void M_mindustry_mod_DataPatcher_lambda$assignValue$0_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void SM_mindustry_mod_DataPatcher_lambda$assign$26_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$25_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$24_mindustry_world_Block_arc_struct_Seq_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3, jbool param4, jbool param5);
void M_mindustry_mod_DataPatcher_lambda$assign$23_arc_util_serialization_Json$FieldMetadata_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$22_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$21_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$20_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$19_arc_util_serialization_JsonValue_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$18_java_lang_Object_arc_util_serialization_Json$FieldMetadata_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$17_java_lang_Object_arc_util_serialization_Json$FieldMetadata_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$16_mindustry_world_blocks_Attributes_mindustry_world_meta_Attribute_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_mindustry_mod_DataPatcher_lambda$assign$15_arc_struct_ObjectFloatMap_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$14_arc_struct_ObjectFloatMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$13_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$12_arc_struct_ObjectMap_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$11_arc_struct_ObjectMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$10_arc_struct_ObjectMap_arc_struct_ObjectMap(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$9_boolean_arc_struct_ObjectSet_java_lang_Object(jcontext ctx, jbool param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$8_R_java_lang_Object(jcontext ctx);
void SM_mindustry_mod_DataPatcher_lambda$assign$7_java_lang_Object_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$6_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_mod_DataPatcher_lambda$assign$5_arc_struct_Seq_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$4_arc_struct_Seq_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
void M_mindustry_mod_DataPatcher_lambda$assign$3_java_lang_Object_boolean_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$2_R_java_lang_Object(jcontext ctx);
void SM_mindustry_mod_DataPatcher_lambda$assign$1_boolean_arc_struct_Seq_java_lang_Object(jcontext ctx, jbool param0, jobject param1, jobject param2);
jobject SM_mindustry_mod_DataPatcher_lambda$assign$0_R_java_lang_Object(jcontext ctx);
jbool SM_mindustry_mod_DataPatcher_lambda$apply$1_mindustry_ctype_Content_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_mod_DataPatcher_lambda$apply$0_Array1_mindustry_world_meta_Attribute_arc_struct_ObjectMap(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
