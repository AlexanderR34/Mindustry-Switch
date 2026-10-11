#ifndef HEADER_net_jpountz_lz4_LZ4ByteBufferUtils$Match
#define HEADER_net_jpountz_lz4_LZ4ByteBufferUtils$Match

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4ByteBufferUtils$Match {
	java_lang_Object parent;
	jint F_start;
	jint F_ref;
	jint F_len;
} net_jpountz_lz4_LZ4ByteBufferUtils$Match;

extern Class class_net_jpountz_lz4_LZ4ByteBufferUtils$Match;


#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_hashCode_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_finalize 5
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_notify 6
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_notifyAll 7
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_wait 8
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_wait_long 9
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_wait_long_int 10
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_fix_int 11
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_fix_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils$Match_end_R_int 12
typedef jint (*func_net_jpountz_lz4_LZ4ByteBufferUtils$Match_end_R_int)(jcontext ctx, jobject self);

void mark_net_jpountz_lz4_LZ4ByteBufferUtils$Match(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4ByteBufferUtils$Match(jcontext ctx);
void init_net_jpountz_lz4_LZ4ByteBufferUtils$Match(jcontext ctx, jobject self);
void M_net_jpountz_lz4_LZ4ByteBufferUtils$Match_fix_int(jcontext ctx, jobject self, jint param0);
jint M_net_jpountz_lz4_LZ4ByteBufferUtils$Match_end_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
