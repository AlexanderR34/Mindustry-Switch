#ifndef HEADER_mindustry_gen_Entityc
#define HEADER_mindustry_gen_Entityc

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Entityc {
	java_lang_Object parent;
} mindustry_gen_Entityc;

extern Class class_mindustry_gen_Entityc;


#define INDEX_mindustry_gen_Entityc_self_R_mindustry_gen_Entityc 0
typedef jobject (*func_mindustry_gen_Entityc_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_as_R_java_lang_Object 1
typedef jobject (*func_mindustry_gen_Entityc_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_isAdded_R_boolean 2
typedef jbool (*func_mindustry_gen_Entityc_isAdded_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_isLocal_R_boolean 3
typedef jbool (*func_mindustry_gen_Entityc_isLocal_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_isRemote_R_boolean 4
typedef jbool (*func_mindustry_gen_Entityc_isRemote_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_serialize_R_boolean 5
typedef jbool (*func_mindustry_gen_Entityc_serialize_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_classId_R_int 6
typedef jint (*func_mindustry_gen_Entityc_classId_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_id_R_int 7
typedef jint (*func_mindustry_gen_Entityc_id_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_add 8
typedef void (*func_mindustry_gen_Entityc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_afterRead 9
typedef void (*func_mindustry_gen_Entityc_afterRead)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_afterReadAll 10
typedef void (*func_mindustry_gen_Entityc_afterReadAll)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_beforeWrite 11
typedef void (*func_mindustry_gen_Entityc_beforeWrite)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_id_int 12
typedef void (*func_mindustry_gen_Entityc_id_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Entityc_read_arc_util_io_Reads 13
typedef void (*func_mindustry_gen_Entityc_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Entityc_remove 14
typedef void (*func_mindustry_gen_Entityc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_update 15
typedef void (*func_mindustry_gen_Entityc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Entityc_write_arc_util_io_Writes 16
typedef void (*func_mindustry_gen_Entityc_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Entityc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Entityc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
