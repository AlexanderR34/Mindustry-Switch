#ifndef HEADER_java_util_zip_Checksum
#define HEADER_java_util_zip_Checksum

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_Checksum {
	java_lang_Object parent;
} java_util_zip_Checksum;

extern Class class_java_util_zip_Checksum;


#define INDEX_java_util_zip_Checksum_update_int 0
typedef void (*func_java_util_zip_Checksum_update_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_util_zip_Checksum_update_Array1_byte_int_int 1
typedef void (*func_java_util_zip_Checksum_update_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_java_util_zip_Checksum_getValue_R_long 2
typedef jlong (*func_java_util_zip_Checksum_getValue_R_long)(jcontext ctx, jobject self);
#define INDEX_java_util_zip_Checksum_reset 3
typedef void (*func_java_util_zip_Checksum_reset)(jcontext ctx, jobject self);

void mark_java_util_zip_Checksum(jobject object, jint mark, jint depth);
void clinit_java_util_zip_Checksum(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
