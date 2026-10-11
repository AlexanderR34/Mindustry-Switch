#ifndef HEADER_mindustry_mod_DataAudioLoader
#define HEADER_mindustry_mod_DataAudioLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataAudioLoader {
	java_lang_Object parent;
	jref F_loadedSounds;
	jref F_loadedMusic;
	jref F_registered;
	jref F_fileToName;
} mindustry_mod_DataAudioLoader;

extern Class class_mindustry_mod_DataAudioLoader;

extern jint SF_mindustry_mod_DataAudioLoader_soundIdOffset;
extern jobject SF_mindustry_mod_DataAudioLoader_prefix;

#define VTABLE_mindustry_mod_DataAudioLoader_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataAudioLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataAudioLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataAudioLoader_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataAudioLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataAudioLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataAudioLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_finalize 5
typedef void (*func_mindustry_mod_DataAudioLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_notify 6
typedef void (*func_mindustry_mod_DataAudioLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_notifyAll 7
typedef void (*func_mindustry_mod_DataAudioLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_wait 8
typedef void (*func_mindustry_mod_DataAudioLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAudioLoader_wait_long 9
typedef void (*func_mindustry_mod_DataAudioLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataAudioLoader_wait_long_int 10
typedef void (*func_mindustry_mod_DataAudioLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq 11
typedef void (*func_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String 12
typedef jobject (*func_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataAudioLoader_unload 13
typedef void (*func_mindustry_mod_DataAudioLoader_unload)(jcontext ctx, jobject self);

void mark_mindustry_mod_DataAudioLoader(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataAudioLoader(jcontext ctx);
void init_mindustry_mod_DataAudioLoader(jcontext ctx, jobject self);
void M_mindustry_mod_DataAudioLoader_load_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_mod_DataAudioLoader_getName_arc_files_Fi_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataAudioLoader_unload(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
