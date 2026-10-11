#ifndef HEADER_rhino_ContextFactory$Listener
#define HEADER_rhino_ContextFactory$Listener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ContextFactory$Listener {
	java_lang_Object parent;
} rhino_ContextFactory$Listener;

extern Class class_rhino_ContextFactory$Listener;


#define INDEX_rhino_ContextFactory$Listener_contextCreated_rhino_Context 0
typedef void (*func_rhino_ContextFactory$Listener_contextCreated_rhino_Context)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_ContextFactory$Listener_contextReleased_rhino_Context 1
typedef void (*func_rhino_ContextFactory$Listener_contextReleased_rhino_Context)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ContextFactory$Listener(jobject object, jint mark, jint depth);
void clinit_rhino_ContextFactory$Listener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
