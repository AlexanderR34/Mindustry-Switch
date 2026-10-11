#ifndef HEADER_arc_freetype_FreeType$Pointer
#define HEADER_arc_freetype_FreeType$Pointer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$Pointer {
	java_lang_Object parent;
	jlong F_address;
} arc_freetype_FreeType$Pointer;

extern Class class_arc_freetype_FreeType$Pointer;


#define VTABLE_arc_freetype_FreeType$Pointer_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$Pointer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$Pointer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$Pointer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$Pointer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$Pointer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$Pointer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_finalize 5
typedef void (*func_arc_freetype_FreeType$Pointer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_notify 6
typedef void (*func_arc_freetype_FreeType$Pointer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_notifyAll 7
typedef void (*func_arc_freetype_FreeType$Pointer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_wait 8
typedef void (*func_arc_freetype_FreeType$Pointer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Pointer_wait_long 9
typedef void (*func_arc_freetype_FreeType$Pointer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$Pointer_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$Pointer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_freetype_FreeType$Pointer(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$Pointer(jcontext ctx);
void init_arc_freetype_FreeType$Pointer_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
