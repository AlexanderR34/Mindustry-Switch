#ifndef HEADER_arc_graphics_PixmapIO$PngReader
#define HEADER_arc_graphics_PixmapIO$PngReader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_PixmapIO$PngReader {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jbyte F_bitDepth;
	jbyte F_colorType;
	jbyte F_compression;
	jbyte F_filter;
	jbyte F_interlace;
	jint F_dataLen;
	jint F_cs;
	jref F_imgData;
	jref F_buf;
	jref F_palette;
} arc_graphics_PixmapIO$PngReader;

extern Class class_arc_graphics_PixmapIO$PngReader;

extern jint SF_arc_graphics_PixmapIO$PngReader_ctypeRgba;
extern jint SF_arc_graphics_PixmapIO$PngReader_ctypePalette;
extern jint SF_arc_graphics_PixmapIO$PngReader_ctypeRgb;

#define VTABLE_arc_graphics_PixmapIO$PngReader_hashCode_R_int 0
typedef jint (*func_arc_graphics_PixmapIO$PngReader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_PixmapIO$PngReader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngReader_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_PixmapIO$PngReader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_PixmapIO$PngReader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_PixmapIO$PngReader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_finalize 5
typedef void (*func_arc_graphics_PixmapIO$PngReader_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_notify 6
typedef void (*func_arc_graphics_PixmapIO$PngReader_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_notifyAll 7
typedef void (*func_arc_graphics_PixmapIO$PngReader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_wait 8
typedef void (*func_arc_graphics_PixmapIO$PngReader_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngReader_wait_long 9
typedef void (*func_arc_graphics_PixmapIO$PngReader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_PixmapIO$PngReader_wait_long_int 10
typedef void (*func_arc_graphics_PixmapIO$PngReader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer 11
typedef jobject (*func_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream 12
typedef void (*func_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer 13
typedef void (*func_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_PixmapIO$PngReader(jobject object, jint mark, jint depth);
void clinit_arc_graphics_PixmapIO$PngReader(jcontext ctx);
void init_arc_graphics_PixmapIO$PngReader(jcontext ctx, jobject self);
jobject M_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
jint SM_arc_graphics_PixmapIO$PngReader_ab_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_PixmapIO$PngReader_paeth_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
