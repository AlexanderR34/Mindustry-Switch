#ifndef HEADER_arc_ApplicationListener
#define HEADER_arc_ApplicationListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_ApplicationListener {
	java_lang_Object parent;
} arc_ApplicationListener;

extern Class class_arc_ApplicationListener;


#define INDEX_arc_ApplicationListener_init 0
typedef void (*func_arc_ApplicationListener_init)(jcontext ctx, jobject self);
#define INDEX_arc_ApplicationListener_resize_int_int 1
typedef void (*func_arc_ApplicationListener_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_ApplicationListener_update 2
typedef void (*func_arc_ApplicationListener_update)(jcontext ctx, jobject self);
#define INDEX_arc_ApplicationListener_pause 3
typedef void (*func_arc_ApplicationListener_pause)(jcontext ctx, jobject self);
#define INDEX_arc_ApplicationListener_resume 4
typedef void (*func_arc_ApplicationListener_resume)(jcontext ctx, jobject self);
#define INDEX_arc_ApplicationListener_dispose 5
typedef void (*func_arc_ApplicationListener_dispose)(jcontext ctx, jobject self);
#define INDEX_arc_ApplicationListener_exit 6
typedef void (*func_arc_ApplicationListener_exit)(jcontext ctx, jobject self);
#define INDEX_arc_ApplicationListener_fileDropped_arc_files_Fi 7
typedef void (*func_arc_ApplicationListener_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_arc_ApplicationListener(jobject object, jint mark, jint depth);
void clinit_arc_ApplicationListener(jcontext ctx);
void M_arc_ApplicationListener_init(jcontext ctx, jobject self);
void M_arc_ApplicationListener_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_ApplicationListener_update(jcontext ctx, jobject self);
void M_arc_ApplicationListener_pause(jcontext ctx, jobject self);
void M_arc_ApplicationListener_resume(jcontext ctx, jobject self);
void M_arc_ApplicationListener_dispose(jcontext ctx, jobject self);
void M_arc_ApplicationListener_exit(jcontext ctx, jobject self);
void M_arc_ApplicationListener_fileDropped_arc_files_Fi(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
