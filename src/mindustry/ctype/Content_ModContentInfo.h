#ifndef HEADER_mindustry_ctype_Content$ModContentInfo
#define HEADER_mindustry_ctype_Content$ModContentInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ctype_Content$ModContentInfo {
	java_lang_Object parent;
	jref F_mod;
	jref F_sourceFile;
	jref F_error;
	jref F_baseError;
	jref F_asset;
} mindustry_ctype_Content$ModContentInfo;

extern Class class_mindustry_ctype_Content$ModContentInfo;


#define VTABLE_mindustry_ctype_Content$ModContentInfo_hashCode_R_int 0
typedef jint (*func_mindustry_ctype_Content$ModContentInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ctype_Content$ModContentInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ctype_Content$ModContentInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ctype_Content$ModContentInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ctype_Content$ModContentInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_finalize 5
typedef void (*func_mindustry_ctype_Content$ModContentInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_notify 6
typedef void (*func_mindustry_ctype_Content$ModContentInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_notifyAll 7
typedef void (*func_mindustry_ctype_Content$ModContentInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_wait 8
typedef void (*func_mindustry_ctype_Content$ModContentInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_wait_long 9
typedef void (*func_mindustry_ctype_Content$ModContentInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ctype_Content$ModContentInfo_wait_long_int 10
typedef void (*func_mindustry_ctype_Content$ModContentInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ctype_Content$ModContentInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_ctype_Content$ModContentInfo(jcontext ctx);
void init_mindustry_ctype_Content$ModContentInfo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
