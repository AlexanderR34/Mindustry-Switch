#ifndef HEADER_java_nio_ByteOrder
#define HEADER_java_nio_ByteOrder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_ByteOrder {
	java_lang_Object parent;
	jref F_name;
} java_nio_ByteOrder;

extern Class class_java_nio_ByteOrder;

extern jobject SF_java_nio_ByteOrder_BIG_ENDIAN;
extern jobject SF_java_nio_ByteOrder_LITTLE_ENDIAN;

#define VTABLE_java_nio_ByteOrder_hashCode_R_int 0
typedef jint (*func_java_nio_ByteOrder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_ByteOrder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteOrder_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_ByteOrder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_ByteOrder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_ByteOrder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_finalize 5
typedef void (*func_java_nio_ByteOrder_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_notify 6
typedef void (*func_java_nio_ByteOrder_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_notifyAll 7
typedef void (*func_java_nio_ByteOrder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_wait 8
typedef void (*func_java_nio_ByteOrder_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteOrder_wait_long 9
typedef void (*func_java_nio_ByteOrder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_ByteOrder_wait_long_int 10
typedef void (*func_java_nio_ByteOrder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_nio_ByteOrder(jobject object, jint mark, jint depth);
void clinit_java_nio_ByteOrder(jcontext ctx);
void init_java_nio_ByteOrder_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(jcontext ctx);
jbool SM_java_nio_ByteOrder_isLittleEndian_R_boolean(jcontext ctx);
jobject M_java_nio_ByteOrder_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
