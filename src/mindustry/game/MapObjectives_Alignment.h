#ifndef HEADER_mindustry_game_MapObjectives$Alignment
#define HEADER_mindustry_game_MapObjectives$Alignment

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_MapObjectives$Alignment {
	java_lang_Object parent;
	jbool F_hor;
	jbool F_ver;
} mindustry_game_MapObjectives$Alignment;

extern Class class_mindustry_game_MapObjectives$Alignment;


#define INDEX_mindustry_game_MapObjectives$Alignment_annotationType_R_java_lang_Class 0
typedef jobject (*func_mindustry_game_MapObjectives$Alignment_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_mindustry_game_MapObjectives$Alignment_hor_R_boolean 1
typedef jbool (*func_mindustry_game_MapObjectives$Alignment_hor_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_game_MapObjectives$Alignment_ver_R_boolean 2
typedef jbool (*func_mindustry_game_MapObjectives$Alignment_ver_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_hashCode_R_int 0
typedef jint (*func_mindustry_game_MapObjectives$Alignment_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_MapObjectives$Alignment_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$Alignment_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_MapObjectives$Alignment_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_MapObjectives$Alignment_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_MapObjectives$Alignment_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_finalize 5
typedef void (*func_mindustry_game_MapObjectives$Alignment_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_notify 6
typedef void (*func_mindustry_game_MapObjectives$Alignment_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_notifyAll 7
typedef void (*func_mindustry_game_MapObjectives$Alignment_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_wait 8
typedef void (*func_mindustry_game_MapObjectives$Alignment_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_wait_long 9
typedef void (*func_mindustry_game_MapObjectives$Alignment_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_MapObjectives$Alignment_wait_long_int 10
typedef void (*func_mindustry_game_MapObjectives$Alignment_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_MapObjectives$Alignment_annotationType_R_java_lang_Class 11
typedef jobject (*func_mindustry_game_MapObjectives$Alignment_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_hor_R_boolean 12
typedef jbool (*func_mindustry_game_MapObjectives$Alignment_hor_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$Alignment_ver_R_boolean 13
typedef jbool (*func_mindustry_game_MapObjectives$Alignment_ver_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_game_MapObjectives$Alignment(jobject object, jint mark, jint depth);
void clinit_mindustry_game_MapObjectives$Alignment(jcontext ctx);
jobject M_mindustry_game_MapObjectives$Alignment_annotationType_R_java_lang_Class(jcontext ctx, jobject self);
jbool M_mindustry_game_MapObjectives$Alignment_hor_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_MapObjectives$Alignment_ver_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
