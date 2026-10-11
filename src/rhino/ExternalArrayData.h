#ifndef HEADER_rhino_ExternalArrayData
#define HEADER_rhino_ExternalArrayData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ExternalArrayData {
	java_lang_Object parent;
} rhino_ExternalArrayData;

extern Class class_rhino_ExternalArrayData;


#define INDEX_rhino_ExternalArrayData_getArrayElement_int_R_java_lang_Object 0
typedef jobject (*func_rhino_ExternalArrayData_getArrayElement_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define INDEX_rhino_ExternalArrayData_setArrayElement_int_java_lang_Object 1
typedef void (*func_rhino_ExternalArrayData_setArrayElement_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_rhino_ExternalArrayData_getArrayLength_R_int 2
typedef jint (*func_rhino_ExternalArrayData_getArrayLength_R_int)(jcontext ctx, jobject self);

void mark_rhino_ExternalArrayData(jobject object, jint mark, jint depth);
void clinit_rhino_ExternalArrayData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
