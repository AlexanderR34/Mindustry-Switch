#ifndef HEADER_arc_freetype_FreeType$Size
#define HEADER_arc_freetype_FreeType$Size

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$Size {
	arc_freetype_FreeType$Pointer parent;
} arc_freetype_FreeType$Size;

extern Class class_arc_freetype_FreeType$Size;


#define VTABLE_arc_freetype_FreeType$Size_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$Size_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$Size_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$Size_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$Size_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$Size_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$Size_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_finalize 5
typedef void (*func_arc_freetype_FreeType$Size_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_notify 6
typedef void (*func_arc_freetype_FreeType$Size_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_notifyAll 7
typedef void (*func_arc_freetype_FreeType$Size_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_wait 8
typedef void (*func_arc_freetype_FreeType$Size_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Size_wait_long 9
typedef void (*func_arc_freetype_FreeType$Size_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$Size_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$Size_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics 11
typedef jobject (*func_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$Size(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$Size(jcontext ctx);
void init_arc_freetype_FreeType$Size_long(jcontext ctx, jobject self, jlong param0);
jlong SM_arc_freetype_FreeType$Size_getMetrics_long_R_long(jcontext ctx, jlong param0);
jobject M_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
