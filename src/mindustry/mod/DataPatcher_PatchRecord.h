#ifndef HEADER_mindustry_mod_DataPatcher$PatchRecord
#define HEADER_mindustry_mod_DataPatcher$PatchRecord

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataPatcher$PatchRecord {
	java_lang_Object parent;
	jref F_target;
	jref F_field;
	jref F_value;
} mindustry_mod_DataPatcher$PatchRecord;

extern Class class_mindustry_mod_DataPatcher$PatchRecord;


#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataPatcher$PatchRecord_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataPatcher$PatchRecord_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataPatcher$PatchRecord_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_finalize 5
typedef void (*func_mindustry_mod_DataPatcher$PatchRecord_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_notify 6
typedef void (*func_mindustry_mod_DataPatcher$PatchRecord_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_notifyAll 7
typedef void (*func_mindustry_mod_DataPatcher$PatchRecord_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_wait 8
typedef void (*func_mindustry_mod_DataPatcher$PatchRecord_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_wait_long 9
typedef void (*func_mindustry_mod_DataPatcher$PatchRecord_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataPatcher$PatchRecord_wait_long_int 10
typedef void (*func_mindustry_mod_DataPatcher$PatchRecord_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_mod_DataPatcher$PatchRecord(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataPatcher$PatchRecord(jcontext ctx);
void init_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object_java_lang_reflect_Field_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
