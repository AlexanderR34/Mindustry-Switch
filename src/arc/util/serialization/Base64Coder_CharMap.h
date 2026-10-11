#ifndef HEADER_arc_util_serialization_Base64Coder$CharMap
#define HEADER_arc_util_serialization_Base64Coder$CharMap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Base64Coder$CharMap {
	java_lang_Object parent;
	jref F_encodingMap;
	jref F_decodingMap;
} arc_util_serialization_Base64Coder$CharMap;

extern Class class_arc_util_serialization_Base64Coder$CharMap;


#define VTABLE_arc_util_serialization_Base64Coder$CharMap_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Base64Coder$CharMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Base64Coder$CharMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Base64Coder$CharMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Base64Coder$CharMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Base64Coder$CharMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_finalize 5
typedef void (*func_arc_util_serialization_Base64Coder$CharMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_notify 6
typedef void (*func_arc_util_serialization_Base64Coder$CharMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_notifyAll 7
typedef void (*func_arc_util_serialization_Base64Coder$CharMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_wait 8
typedef void (*func_arc_util_serialization_Base64Coder$CharMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_wait_long 9
typedef void (*func_arc_util_serialization_Base64Coder$CharMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_wait_long_int 10
typedef void (*func_arc_util_serialization_Base64Coder$CharMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte 11
typedef jobject (*func_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char 12
typedef jobject (*func_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char)(jcontext ctx, jobject self);

void mark_arc_util_serialization_Base64Coder$CharMap(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Base64Coder$CharMap(jcontext ctx);
void init_arc_util_serialization_Base64Coder$CharMap_char_char(jcontext ctx, jobject self, jchar param0, jchar param1);
jobject M_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
