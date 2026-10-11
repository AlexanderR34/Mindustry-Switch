#ifndef HEADER_mindustry_gen_Itemsc
#define HEADER_mindustry_gen_Itemsc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Itemsc {
	java_lang_Object parent;
} mindustry_gen_Itemsc;

extern Class class_mindustry_gen_Itemsc;


#define INDEX_mindustry_gen_Itemsc_acceptsItem_mindustry_type_Item_R_boolean 0
typedef jbool (*func_mindustry_gen_Itemsc_acceptsItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Itemsc_hasItem_R_boolean 1
typedef jbool (*func_mindustry_gen_Itemsc_hasItem_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Itemsc_itemTime_R_float 2
typedef jfloat (*func_mindustry_gen_Itemsc_itemTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Itemsc_itemCapacity_R_int 3
typedef jint (*func_mindustry_gen_Itemsc_itemCapacity_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Itemsc_maxAccepted_mindustry_type_Item_R_int 4
typedef jint (*func_mindustry_gen_Itemsc_maxAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Itemsc_item_R_mindustry_type_Item 5
typedef jobject (*func_mindustry_gen_Itemsc_item_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Itemsc_stack_R_mindustry_type_ItemStack 6
typedef jobject (*func_mindustry_gen_Itemsc_stack_R_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Itemsc_addItem_mindustry_type_Item 7
typedef void (*func_mindustry_gen_Itemsc_addItem_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Itemsc_addItem_mindustry_type_Item_int 8
typedef void (*func_mindustry_gen_Itemsc_addItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define INDEX_mindustry_gen_Itemsc_clearItem 9
typedef void (*func_mindustry_gen_Itemsc_clearItem)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Itemsc_itemTime_float 10
typedef void (*func_mindustry_gen_Itemsc_itemTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Itemsc_stack_mindustry_type_ItemStack 11
typedef void (*func_mindustry_gen_Itemsc_stack_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Itemsc_update 12
typedef void (*func_mindustry_gen_Itemsc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Itemsc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Itemsc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
