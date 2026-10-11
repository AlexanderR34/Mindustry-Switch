#ifndef HEADER_arc_util_Buffers
#define HEADER_arc_util_Buffers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Buffers {
	java_lang_Object parent;
} arc_util_Buffers;

extern Class class_arc_util_Buffers;

extern jobject SF_arc_util_Buffers_unsafeBuffers;
extern jint SF_arc_util_Buffers_allocatedUnsafe;

#define VTABLE_arc_util_Buffers_hashCode_R_int 0
typedef jint (*func_arc_util_Buffers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Buffers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Buffers_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Buffers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Buffers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Buffers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_finalize 5
typedef void (*func_arc_util_Buffers_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_notify 6
typedef void (*func_arc_util_Buffers_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_notifyAll 7
typedef void (*func_arc_util_Buffers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_wait 8
typedef void (*func_arc_util_Buffers_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Buffers_wait_long 9
typedef void (*func_arc_util_Buffers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Buffers_wait_long_int 10
typedef void (*func_arc_util_Buffers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Buffers(jobject object, jint mark, jint depth);
void clinit_arc_util_Buffers(jcontext ctx);
void init_arc_util_Buffers(jcontext ctx, jobject self);
void SM_arc_util_Buffers_copy_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_arc_util_Buffers_copy_Array1_short_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_arc_util_Buffers_copy_Array1_float_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_arc_util_Buffers_copy_Array1_int_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_arc_util_Buffers_copy_Array1_float_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_arc_util_Buffers_copy_java_nio_Buffer_java_nio_Buffer_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jint SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(jcontext ctx, jobject param0);
jint SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_arc_util_Buffers_elementsToBytes_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_arc_util_Buffers_elementShift_java_nio_Buffer_R_int(jcontext ctx, jobject param0);
jobject SM_arc_util_Buffers_newFloatBuffer_int_R_java_nio_FloatBuffer(jcontext ctx, jint param0);
jobject SM_arc_util_Buffers_newShortBuffer_int_R_java_nio_ShortBuffer(jcontext ctx, jint param0);
jobject SM_arc_util_Buffers_newByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0);
jobject SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(jcontext ctx, jint param0);
void SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jbool SM_arc_util_Buffers_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0);
jlong SM_arc_util_Buffers_getUnsafeBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject param0);
jobject SM_arc_util_Buffers_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jint SM_arc_util_Buffers_getAllocatedBytesUnsafe_R_int(jcontext ctx);
void SM_arc_util_Buffers_freeMemory_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jobject SM_arc_util_Buffers_newDisposableByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0);
jlong SM_arc_util_Buffers_getBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject param0);
void SM_arc_util_Buffers_clear_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jint param1);
void SM_arc_util_Buffers_copyJni_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_arc_util_Buffers_copyJni_Array1_byte_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_arc_util_Buffers_copyJni_Array1_short_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_arc_util_Buffers_copyJni_Array1_int_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_arc_util_Buffers_copyJni_Array1_float_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_arc_util_Buffers_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
