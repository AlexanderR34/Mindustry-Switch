#ifndef HEADER_arc_util_Disposable
#define HEADER_arc_util_Disposable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Disposable {
	java_lang_Object parent;
} arc_util_Disposable;

extern Class class_arc_util_Disposable;


#define INDEX_arc_util_Disposable_dispose 0
typedef void (*func_arc_util_Disposable_dispose)(jcontext ctx, jobject self);
#define INDEX_arc_util_Disposable_isDisposed_R_boolean 1
typedef jbool (*func_arc_util_Disposable_isDisposed_R_boolean)(jcontext ctx, jobject self);

void mark_arc_util_Disposable(jobject object, jint mark, jint depth);
void clinit_arc_util_Disposable(jcontext ctx);
jbool M_arc_util_Disposable_isDisposed_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
