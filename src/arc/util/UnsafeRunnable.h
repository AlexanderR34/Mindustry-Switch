#ifndef HEADER_arc_util_UnsafeRunnable
#define HEADER_arc_util_UnsafeRunnable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_UnsafeRunnable {
	java_lang_Object parent;
} arc_util_UnsafeRunnable;

extern Class class_arc_util_UnsafeRunnable;


#define INDEX_arc_util_UnsafeRunnable_run 0
typedef void (*func_arc_util_UnsafeRunnable_run)(jcontext ctx, jobject self);

void mark_arc_util_UnsafeRunnable(jobject object, jint mark, jint depth);
void clinit_arc_util_UnsafeRunnable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
