#ifndef HEADER_arc_freetype_FreeType$Library
#define HEADER_arc_freetype_FreeType$Library

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$Library {
	arc_freetype_FreeType$Pointer parent;
	jref F_fontData;
} arc_freetype_FreeType$Library;

extern Class class_arc_freetype_FreeType$Library;


#define VTABLE_arc_freetype_FreeType$Library_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$Library_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$Library_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$Library_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$Library_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$Library_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$Library_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_finalize 5
typedef void (*func_arc_freetype_FreeType$Library_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_notify 6
typedef void (*func_arc_freetype_FreeType$Library_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_notifyAll 7
typedef void (*func_arc_freetype_FreeType$Library_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_wait 8
typedef void (*func_arc_freetype_FreeType$Library_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_wait_long 9
typedef void (*func_arc_freetype_FreeType$Library_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$Library_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$Library_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Library_dispose 11
typedef void (*func_arc_freetype_FreeType$Library_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_isDisposed_R_boolean 12
typedef jbool (*func_arc_freetype_FreeType$Library_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face 13
typedef jobject (*func_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face 14
typedef jobject (*func_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face 15
typedef jobject (*func_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker 16
typedef jobject (*func_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$Library(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$Library(jcontext ctx);
void init_arc_freetype_FreeType$Library_long(jcontext ctx, jobject self, jlong param0);
void SM_arc_freetype_FreeType$Library_doneFreeType_long(jcontext ctx, jlong param0);
jlong SM_arc_freetype_FreeType$Library_newMemoryFace_long_java_nio_ByteBuffer_int_int_R_long(jcontext ctx, jlong param0, jobject param1, jint param2, jint param3);
jlong SM_arc_freetype_FreeType$Library_strokerNew_long_R_long(jcontext ctx, jlong param0);
void M_arc_freetype_FreeType$Library_dispose(jcontext ctx, jobject self);
jobject M_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
