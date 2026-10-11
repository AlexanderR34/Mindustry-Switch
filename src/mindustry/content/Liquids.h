#ifndef HEADER_mindustry_content_Liquids
#define HEADER_mindustry_content_Liquids

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Liquids {
	java_lang_Object parent;
} mindustry_content_Liquids;

extern Class class_mindustry_content_Liquids;

extern jobject SF_mindustry_content_Liquids_water;
extern jobject SF_mindustry_content_Liquids_slag;
extern jobject SF_mindustry_content_Liquids_oil;
extern jobject SF_mindustry_content_Liquids_cryofluid;
extern jobject SF_mindustry_content_Liquids_arkycite;
extern jobject SF_mindustry_content_Liquids_gallium;
extern jobject SF_mindustry_content_Liquids_neoplasm;
extern jobject SF_mindustry_content_Liquids_ozone;
extern jobject SF_mindustry_content_Liquids_hydrogen;
extern jobject SF_mindustry_content_Liquids_nitrogen;
extern jobject SF_mindustry_content_Liquids_cyanogen;

#define VTABLE_mindustry_content_Liquids_hashCode_R_int 0
typedef jint (*func_mindustry_content_Liquids_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Liquids_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Liquids_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Liquids_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Liquids_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Liquids_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_finalize 5
typedef void (*func_mindustry_content_Liquids_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_notify 6
typedef void (*func_mindustry_content_Liquids_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_notifyAll 7
typedef void (*func_mindustry_content_Liquids_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_wait 8
typedef void (*func_mindustry_content_Liquids_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Liquids_wait_long 9
typedef void (*func_mindustry_content_Liquids_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Liquids_wait_long_int 10
typedef void (*func_mindustry_content_Liquids_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_Liquids(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Liquids(jcontext ctx);
void init_mindustry_content_Liquids(jcontext ctx, jobject self);
void SM_mindustry_content_Liquids_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
