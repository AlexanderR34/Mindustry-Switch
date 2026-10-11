#ifndef HEADER_mindustry_content_Items
#define HEADER_mindustry_content_Items

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Items {
	java_lang_Object parent;
} mindustry_content_Items;

extern Class class_mindustry_content_Items;

extern jobject SF_mindustry_content_Items_scrap;
extern jobject SF_mindustry_content_Items_copper;
extern jobject SF_mindustry_content_Items_lead;
extern jobject SF_mindustry_content_Items_graphite;
extern jobject SF_mindustry_content_Items_coal;
extern jobject SF_mindustry_content_Items_titanium;
extern jobject SF_mindustry_content_Items_thorium;
extern jobject SF_mindustry_content_Items_silicon;
extern jobject SF_mindustry_content_Items_plastanium;
extern jobject SF_mindustry_content_Items_phaseFabric;
extern jobject SF_mindustry_content_Items_surgeAlloy;
extern jobject SF_mindustry_content_Items_sporePod;
extern jobject SF_mindustry_content_Items_sand;
extern jobject SF_mindustry_content_Items_blastCompound;
extern jobject SF_mindustry_content_Items_pyratite;
extern jobject SF_mindustry_content_Items_metaglass;
extern jobject SF_mindustry_content_Items_beryllium;
extern jobject SF_mindustry_content_Items_tungsten;
extern jobject SF_mindustry_content_Items_oxide;
extern jobject SF_mindustry_content_Items_carbide;
extern jobject SF_mindustry_content_Items_fissileMatter;
extern jobject SF_mindustry_content_Items_dormantCyst;
extern jobject SF_mindustry_content_Items_serpuloItems;
extern jobject SF_mindustry_content_Items_erekirItems;
extern jobject SF_mindustry_content_Items_erekirOnlyItems;

#define VTABLE_mindustry_content_Items_hashCode_R_int 0
typedef jint (*func_mindustry_content_Items_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Items_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Items_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Items_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Items_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Items_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_finalize 5
typedef void (*func_mindustry_content_Items_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_notify 6
typedef void (*func_mindustry_content_Items_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_notifyAll 7
typedef void (*func_mindustry_content_Items_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_wait 8
typedef void (*func_mindustry_content_Items_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Items_wait_long 9
typedef void (*func_mindustry_content_Items_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Items_wait_long_int 10
typedef void (*func_mindustry_content_Items_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_Items(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Items(jcontext ctx);
void init_mindustry_content_Items(jcontext ctx, jobject self);
void SM_mindustry_content_Items_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
