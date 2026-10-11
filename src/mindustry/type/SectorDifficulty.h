#ifndef HEADER_mindustry_type_SectorDifficulty
#define HEADER_mindustry_type_SectorDifficulty

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_SectorDifficulty {
	java_lang_Object parent;
} mindustry_type_SectorDifficulty;

extern Class class_mindustry_type_SectorDifficulty;

extern jint SF_mindustry_type_SectorDifficulty_low;
extern jint SF_mindustry_type_SectorDifficulty_medium;
extern jint SF_mindustry_type_SectorDifficulty_high;
extern jint SF_mindustry_type_SectorDifficulty_extreme;
extern jint SF_mindustry_type_SectorDifficulty_eradication;
extern jint SF_mindustry_type_SectorDifficulty_unreasonable;

#define VTABLE_mindustry_type_SectorDifficulty_hashCode_R_int 0
typedef jint (*func_mindustry_type_SectorDifficulty_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_SectorDifficulty_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_SectorDifficulty_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_SectorDifficulty_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_SectorDifficulty_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_SectorDifficulty_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_finalize 5
typedef void (*func_mindustry_type_SectorDifficulty_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_notify 6
typedef void (*func_mindustry_type_SectorDifficulty_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_notifyAll 7
typedef void (*func_mindustry_type_SectorDifficulty_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_wait 8
typedef void (*func_mindustry_type_SectorDifficulty_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_SectorDifficulty_wait_long 9
typedef void (*func_mindustry_type_SectorDifficulty_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_SectorDifficulty_wait_long_int 10
typedef void (*func_mindustry_type_SectorDifficulty_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_type_SectorDifficulty(jobject object, jint mark, jint depth);
void clinit_mindustry_type_SectorDifficulty(jcontext ctx);
void init_mindustry_type_SectorDifficulty(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
