#ifndef HEADER_arc_util_pooling_Pool$Poolable
#define HEADER_arc_util_pooling_Pool$Poolable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_pooling_Pool$Poolable {
	java_lang_Object parent;
} arc_util_pooling_Pool$Poolable;

extern Class class_arc_util_pooling_Pool$Poolable;


#define INDEX_arc_util_pooling_Pool$Poolable_reset 0
typedef void (*func_arc_util_pooling_Pool$Poolable_reset)(jcontext ctx, jobject self);

void mark_arc_util_pooling_Pool$Poolable(jobject object, jint mark, jint depth);
void clinit_arc_util_pooling_Pool$Poolable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
