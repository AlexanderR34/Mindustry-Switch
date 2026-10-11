#ifndef HEADER_arc_net_NetSerializer
#define HEADER_arc_net_NetSerializer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_NetSerializer {
	java_lang_Object parent;
} arc_net_NetSerializer;

extern Class class_arc_net_NetSerializer;


#define INDEX_arc_net_NetSerializer_write_java_nio_ByteBuffer_java_lang_Object 0
typedef void (*func_arc_net_NetSerializer_write_java_nio_ByteBuffer_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_arc_net_NetSerializer_read_java_nio_ByteBuffer_R_java_lang_Object 1
typedef jobject (*func_arc_net_NetSerializer_read_java_nio_ByteBuffer_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_net_NetSerializer_getLengthLength_R_int 2
typedef jint (*func_arc_net_NetSerializer_getLengthLength_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int 3
typedef void (*func_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define INDEX_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int 4
typedef jint (*func_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_NetSerializer(jobject object, jint mark, jint depth);
void clinit_arc_net_NetSerializer(jcontext ctx);
jint M_arc_net_NetSerializer_getLengthLength_R_int(jcontext ctx, jobject self);
void M_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
