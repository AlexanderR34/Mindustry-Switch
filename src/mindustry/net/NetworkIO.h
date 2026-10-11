#ifndef HEADER_mindustry_net_NetworkIO
#define HEADER_mindustry_net_NetworkIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_NetworkIO {
	java_lang_Object parent;
} mindustry_net_NetworkIO;

extern Class class_mindustry_net_NetworkIO;


#define VTABLE_mindustry_net_NetworkIO_hashCode_R_int 0
typedef jint (*func_mindustry_net_NetworkIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_NetworkIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_NetworkIO_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_NetworkIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_NetworkIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_NetworkIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_finalize 5
typedef void (*func_mindustry_net_NetworkIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_notify 6
typedef void (*func_mindustry_net_NetworkIO_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_notifyAll 7
typedef void (*func_mindustry_net_NetworkIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_wait 8
typedef void (*func_mindustry_net_NetworkIO_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetworkIO_wait_long 9
typedef void (*func_mindustry_net_NetworkIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_NetworkIO_wait_long_int 10
typedef void (*func_mindustry_net_NetworkIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_net_NetworkIO(jobject object, jint mark, jint depth);
void clinit_mindustry_net_NetworkIO(jcontext ctx);
void init_mindustry_net_NetworkIO(jcontext ctx, jobject self);
void SM_mindustry_net_NetworkIO_writeWorld_mindustry_gen_Player_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_NetworkIO_loadWorld_java_io_InputStream(jcontext ctx, jobject param0);
void SM_mindustry_net_NetworkIO_writeRequiredAssets_java_io_OutputStream_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_net_NetworkIO_readRequiredAssets_java_io_InputStream_R_arc_struct_Seq(jcontext ctx, jobject param0);
void SM_mindustry_net_NetworkIO_writeAssets_java_io_OutputStream_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_NetworkIO_loadAssets_java_io_InputStream(jcontext ctx, jobject param0);
void SM_mindustry_net_NetworkIO_packTexture_java_io_OutputStream_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_net_NetworkIO_writeServerData_R_java_nio_ByteBuffer(jcontext ctx);
jobject SM_mindustry_net_NetworkIO_readServerData_int_java_lang_String_java_nio_ByteBuffer_R_mindustry_net_Host(jcontext ctx, jint param0, jobject param1, jobject param2);
void SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_mindustry_net_NetworkIO_writeString_java_nio_ByteBuffer_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_net_NetworkIO_readString_java_nio_ByteBuffer_R_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_net_NetworkIO_lambda$loadWorld$1_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_net_NetworkIO_lambda$loadWorld$0_mindustry_gen_Entityc(jcontext ctx, jobject param0);
jbool SM_mindustry_net_NetworkIO_lambda$writeWorld$0_mindustry_gen_Player_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
