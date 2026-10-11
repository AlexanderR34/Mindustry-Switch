#ifndef HEADER_java_nio_channels_FileChannel
#define HEADER_java_nio_channels_FileChannel

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_FileChannel {
	java_lang_Object parent;
} java_nio_channels_FileChannel;

extern Class class_java_nio_channels_FileChannel;


#define VTABLE_java_nio_channels_FileChannel_hashCode_R_int 0
typedef jint (*func_java_nio_channels_FileChannel_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_FileChannel_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_FileChannel_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_FileChannel_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_FileChannel_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_FileChannel_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_finalize 5
typedef void (*func_java_nio_channels_FileChannel_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_notify 6
typedef void (*func_java_nio_channels_FileChannel_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_notifyAll 7
typedef void (*func_java_nio_channels_FileChannel_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_wait 8
typedef void (*func_java_nio_channels_FileChannel_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_FileChannel_wait_long 9
typedef void (*func_java_nio_channels_FileChannel_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_FileChannel_wait_long_int 10
typedef void (*func_java_nio_channels_FileChannel_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_FileChannel_map_java_nio_channels_FileChannel$MapMode_long_long_R_java_nio_MappedByteBuffer 11
typedef jobject (*func_java_nio_channels_FileChannel_map_java_nio_channels_FileChannel$MapMode_long_long_R_java_nio_MappedByteBuffer)(jcontext ctx, jobject self, jobject param0, jlong param1, jlong param2);

void mark_java_nio_channels_FileChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_FileChannel(jcontext ctx);
void init_java_nio_channels_FileChannel(jcontext ctx, jobject self);
jobject M_java_nio_channels_FileChannel_map_java_nio_channels_FileChannel$MapMode_long_long_R_java_nio_MappedByteBuffer(jcontext ctx, jobject self, jobject param0, jlong param1, jlong param2);

#ifdef __cplusplus
}
#endif

#endif
