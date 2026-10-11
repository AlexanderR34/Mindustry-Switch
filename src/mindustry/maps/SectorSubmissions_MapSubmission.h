#ifndef HEADER_mindustry_maps_SectorSubmissions$MapSubmission
#define HEADER_mindustry_maps_SectorSubmissions$MapSubmission

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_SectorSubmissions$MapSubmission {
	java_lang_Object parent;
	jref F_author;
	jref F_threadLink;
	jref F_mapFileLink;
} mindustry_maps_SectorSubmissions$MapSubmission;

extern Class class_mindustry_maps_SectorSubmissions$MapSubmission;


#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_hashCode_R_int 0
typedef jint (*func_mindustry_maps_SectorSubmissions$MapSubmission_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_SectorSubmissions$MapSubmission_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_SectorSubmissions$MapSubmission_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_SectorSubmissions$MapSubmission_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_SectorSubmissions$MapSubmission_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_finalize 5
typedef void (*func_mindustry_maps_SectorSubmissions$MapSubmission_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_notify 6
typedef void (*func_mindustry_maps_SectorSubmissions$MapSubmission_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_notifyAll 7
typedef void (*func_mindustry_maps_SectorSubmissions$MapSubmission_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_wait 8
typedef void (*func_mindustry_maps_SectorSubmissions$MapSubmission_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_wait_long 9
typedef void (*func_mindustry_maps_SectorSubmissions$MapSubmission_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_SectorSubmissions$MapSubmission_wait_long_int 10
typedef void (*func_mindustry_maps_SectorSubmissions$MapSubmission_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_maps_SectorSubmissions$MapSubmission(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_SectorSubmissions$MapSubmission(jcontext ctx);
void init_mindustry_maps_SectorSubmissions$MapSubmission(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
