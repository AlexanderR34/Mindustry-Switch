#ifndef HEADER_mindustry_content_Loadouts
#define HEADER_mindustry_content_Loadouts

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Loadouts {
	java_lang_Object parent;
} mindustry_content_Loadouts;

extern Class class_mindustry_content_Loadouts;

extern jobject SF_mindustry_content_Loadouts_basicShard;
extern jobject SF_mindustry_content_Loadouts_basicFoundation;
extern jobject SF_mindustry_content_Loadouts_basicNucleus;
extern jobject SF_mindustry_content_Loadouts_basicBastion;

#define VTABLE_mindustry_content_Loadouts_hashCode_R_int 0
typedef jint (*func_mindustry_content_Loadouts_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Loadouts_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Loadouts_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Loadouts_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Loadouts_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Loadouts_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_finalize 5
typedef void (*func_mindustry_content_Loadouts_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_notify 6
typedef void (*func_mindustry_content_Loadouts_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_notifyAll 7
typedef void (*func_mindustry_content_Loadouts_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_wait 8
typedef void (*func_mindustry_content_Loadouts_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Loadouts_wait_long 9
typedef void (*func_mindustry_content_Loadouts_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Loadouts_wait_long_int 10
typedef void (*func_mindustry_content_Loadouts_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_Loadouts(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Loadouts(jcontext ctx);
void init_mindustry_content_Loadouts(jcontext ctx, jobject self);
void SM_mindustry_content_Loadouts_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
