#ifndef HEADER_mindustry_content_TechTree$TechNode
#define HEADER_mindustry_content_TechTree$TechNode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_TechTree$TechNode {
	java_lang_Object parent;
	jint F_depth;
	jref F_icon;
	jref F_name;
	jbool F_requiresUnlock;
	jref F_parent;
	jref F_rootNode;
	jref F_researchCostMultipliers;
	jref F_content;
	jref F_requirements;
	jref F_finishedRequirements;
	jref F_objectives;
	jref F_children;
	jref F_planet;
} mindustry_content_TechTree$TechNode;

extern Class class_mindustry_content_TechTree$TechNode;


#define VTABLE_mindustry_content_TechTree$TechNode_hashCode_R_int 0
typedef jint (*func_mindustry_content_TechTree$TechNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_TechTree$TechNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_TechTree$TechNode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_TechTree$TechNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_TechTree$TechNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_TechTree$TechNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_finalize 5
typedef void (*func_mindustry_content_TechTree$TechNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_notify 6
typedef void (*func_mindustry_content_TechTree$TechNode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_notifyAll 7
typedef void (*func_mindustry_content_TechTree$TechNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_wait 8
typedef void (*func_mindustry_content_TechTree$TechNode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_wait_long 9
typedef void (*func_mindustry_content_TechTree$TechNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_TechTree$TechNode_wait_long_int 10
typedef void (*func_mindustry_content_TechTree$TechNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_TechTree$TechNode_each_arc_func_Cons 11
typedef void (*func_mindustry_content_TechTree$TechNode_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent 12
typedef void (*func_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet 13
typedef void (*func_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable 14
typedef jobject (*func_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String 15
typedef jobject (*func_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack 16
typedef void (*func_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_TechTree$TechNode_reset 17
typedef void (*func_mindustry_content_TechTree$TechNode_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_remove 18
typedef void (*func_mindustry_content_TechTree$TechNode_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_save 19
typedef void (*func_mindustry_content_TechTree$TechNode_save)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent 20
typedef void (*func_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_content_TechTree$TechNode(jobject object, jint mark, jint depth);
void clinit_mindustry_content_TechTree$TechNode(jcontext ctx);
void init_mindustry_content_TechTree$TechNode_mindustry_content_TechTree$TechNode_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_content_TechTree$TechNode_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable(jcontext ctx, jobject self);
jobject M_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0);
void M_mindustry_content_TechTree$TechNode_reset(jcontext ctx, jobject self);
void M_mindustry_content_TechTree$TechNode_remove(jcontext ctx, jobject self);
void M_mindustry_content_TechTree$TechNode_save(jcontext ctx, jobject self);
void SM_mindustry_content_TechTree$TechNode_lambda$addPlanet$0_mindustry_type_Planet_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_content_TechTree$TechNode_lambda$addDatabaseTab$0_mindustry_ctype_UnlockableContent_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
