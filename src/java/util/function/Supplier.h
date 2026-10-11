#ifndef HEADER_java_util_function_Supplier
#define HEADER_java_util_function_Supplier

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_Supplier {
	java_lang_Object parent;
} java_util_function_Supplier;

extern Class class_java_util_function_Supplier;


#define INDEX_java_util_function_Supplier_get_R_java_lang_Object 0
typedef jobject (*func_java_util_function_Supplier_get_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_function_Supplier(jobject object, jint mark, jint depth);
void clinit_java_util_function_Supplier(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
