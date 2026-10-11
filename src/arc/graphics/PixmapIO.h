#ifndef HEADER_arc_graphics_PixmapIO
#define HEADER_arc_graphics_PixmapIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_PixmapIO {
	java_lang_Object parent;
} arc_graphics_PixmapIO;

extern Class class_arc_graphics_PixmapIO;


#define VTABLE_arc_graphics_PixmapIO_hashCode_R_int 0
typedef jint (*func_arc_graphics_PixmapIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_PixmapIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_PixmapIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_PixmapIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_PixmapIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_finalize 5
typedef void (*func_arc_graphics_PixmapIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_notify 6
typedef void (*func_arc_graphics_PixmapIO_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_notifyAll 7
typedef void (*func_arc_graphics_PixmapIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_wait 8
typedef void (*func_arc_graphics_PixmapIO_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO_wait_long 9
typedef void (*func_arc_graphics_PixmapIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_PixmapIO_wait_long_int 10
typedef void (*func_arc_graphics_PixmapIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_PixmapIO(jobject object, jint mark, jint depth);
void clinit_arc_graphics_PixmapIO(jcontext ctx);
void init_arc_graphics_PixmapIO(jcontext ctx, jobject self);
void SM_arc_graphics_PixmapIO_writePng_arc_files_Fi_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_graphics_PixmapIO_writePngBytes_arc_graphics_Pixmap_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_arc_graphics_PixmapIO_readPNG_arc_files_Fi_R_arc_graphics_Pixmap(jcontext ctx, jobject param0);
jobject SM_arc_graphics_PixmapIO_readPNG_Array1_byte_R_arc_graphics_Pixmap(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
