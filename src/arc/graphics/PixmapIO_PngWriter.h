#ifndef HEADER_arc_graphics_PixmapIO$PngWriter
#define HEADER_arc_graphics_PixmapIO$PngWriter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_PixmapIO$PngWriter {
	java_lang_Object parent;
	jref F_buffer;
	jref F_deflater;
	jbool F_flipY;
} arc_graphics_PixmapIO$PngWriter;

extern Class class_arc_graphics_PixmapIO$PngWriter;

extern jobject SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE;
extern jint SF_arc_graphics_PixmapIO$PngWriter_IHDR;
extern jint SF_arc_graphics_PixmapIO$PngWriter_IDAT;
extern jint SF_arc_graphics_PixmapIO$PngWriter_IEND;
extern jbyte SF_arc_graphics_PixmapIO$PngWriter_COLOR_ARGB;
extern jbyte SF_arc_graphics_PixmapIO$PngWriter_COMPRESSION_DEFLATE;
extern jbyte SF_arc_graphics_PixmapIO$PngWriter_FILTER_NONE;
extern jbyte SF_arc_graphics_PixmapIO$PngWriter_INTERLACE_NONE;

#define VTABLE_arc_graphics_PixmapIO$PngWriter_hashCode_R_int 0
typedef jint (*func_arc_graphics_PixmapIO$PngWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_PixmapIO$PngWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_PixmapIO$PngWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_PixmapIO$PngWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_PixmapIO$PngWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_finalize 5
typedef void (*func_arc_graphics_PixmapIO$PngWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_notify 6
typedef void (*func_arc_graphics_PixmapIO$PngWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_notifyAll 7
typedef void (*func_arc_graphics_PixmapIO$PngWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_wait 8
typedef void (*func_arc_graphics_PixmapIO$PngWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_wait_long 9
typedef void (*func_arc_graphics_PixmapIO$PngWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_wait_long_int 10
typedef void (*func_arc_graphics_PixmapIO$PngWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_dispose 11
typedef void (*func_arc_graphics_PixmapIO$PngWriter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_PixmapIO$PngWriter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean 13
typedef void (*func_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_setCompression_int 14
typedef void (*func_arc_graphics_PixmapIO$PngWriter_setCompression_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap 15
typedef void (*func_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap 16
typedef void (*func_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_graphics_PixmapIO$PngWriter(jobject object, jint mark, jint depth);
void clinit_arc_graphics_PixmapIO$PngWriter(jcontext ctx);
void init_arc_graphics_PixmapIO$PngWriter(jcontext ctx, jobject self);
void init_arc_graphics_PixmapIO$PngWriter_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_graphics_PixmapIO$PngWriter_setCompression_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_PixmapIO$PngWriter_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
