#ifndef HEADER_mindustry_async_AsyncProcess
#define HEADER_mindustry_async_AsyncProcess

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_AsyncProcess {
	java_lang_Object parent;
} mindustry_async_AsyncProcess;

extern Class class_mindustry_async_AsyncProcess;


#define INDEX_mindustry_async_AsyncProcess_init 0
typedef void (*func_mindustry_async_AsyncProcess_init)(jcontext ctx, jobject self);
#define INDEX_mindustry_async_AsyncProcess_reset 1
typedef void (*func_mindustry_async_AsyncProcess_reset)(jcontext ctx, jobject self);
#define INDEX_mindustry_async_AsyncProcess_begin 2
typedef void (*func_mindustry_async_AsyncProcess_begin)(jcontext ctx, jobject self);
#define INDEX_mindustry_async_AsyncProcess_process 3
typedef void (*func_mindustry_async_AsyncProcess_process)(jcontext ctx, jobject self);
#define INDEX_mindustry_async_AsyncProcess_end 4
typedef void (*func_mindustry_async_AsyncProcess_end)(jcontext ctx, jobject self);
#define INDEX_mindustry_async_AsyncProcess_shouldProcess_R_boolean 5
typedef jbool (*func_mindustry_async_AsyncProcess_shouldProcess_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_async_AsyncProcess(jobject object, jint mark, jint depth);
void clinit_mindustry_async_AsyncProcess(jcontext ctx);
void M_mindustry_async_AsyncProcess_init(jcontext ctx, jobject self);
void M_mindustry_async_AsyncProcess_reset(jcontext ctx, jobject self);
void M_mindustry_async_AsyncProcess_begin(jcontext ctx, jobject self);
void M_mindustry_async_AsyncProcess_process(jcontext ctx, jobject self);
void M_mindustry_async_AsyncProcess_end(jcontext ctx, jobject self);
jbool M_mindustry_async_AsyncProcess_shouldProcess_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
