#ifndef HEADER_mindustry_content_TechTree
#define HEADER_mindustry_content_TechTree

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_TechTree {
	java_lang_Object parent;
} mindustry_content_TechTree;

extern Class class_mindustry_content_TechTree;

extern jobject SF_mindustry_content_TechTree_context;
extern jobject SF_mindustry_content_TechTree_all;
extern jobject SF_mindustry_content_TechTree_roots;

#define VTABLE_mindustry_content_TechTree_hashCode_R_int 0
typedef jint (*func_mindustry_content_TechTree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_TechTree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_TechTree_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_TechTree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_TechTree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_TechTree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_finalize 5
typedef void (*func_mindustry_content_TechTree_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_notify 6
typedef void (*func_mindustry_content_TechTree_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_notifyAll 7
typedef void (*func_mindustry_content_TechTree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_wait 8
typedef void (*func_mindustry_content_TechTree_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree_wait_long 9
typedef void (*func_mindustry_content_TechTree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_TechTree_wait_long_int 10
typedef void (*func_mindustry_content_TechTree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_TechTree(jobject object, jint mark, jint depth);
void clinit_mindustry_content_TechTree(jcontext ctx);
void init_mindustry_content_TechTree(jcontext ctx, jobject self);
jobject SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_boolean_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3);
jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0);
jobject SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_content_TechTree_context_R_mindustry_content_TechTree$TechNode(jcontext ctx);
void SM_mindustry_content_TechTree_lambda$node$1(jcontext ctx);
jbool SM_mindustry_content_TechTree_lambda$node$0_mindustry_type_SectorPreset_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
