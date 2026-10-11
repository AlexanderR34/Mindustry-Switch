#ifndef HEADER_arc_freetype_FreeType$SizeMetrics
#define HEADER_arc_freetype_FreeType$SizeMetrics

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$SizeMetrics {
	arc_freetype_FreeType$Pointer parent;
} arc_freetype_FreeType$SizeMetrics;

extern Class class_arc_freetype_FreeType$SizeMetrics;


#define VTABLE_arc_freetype_FreeType$SizeMetrics_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$SizeMetrics_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$SizeMetrics_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$SizeMetrics_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$SizeMetrics_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_finalize 5
typedef void (*func_arc_freetype_FreeType$SizeMetrics_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_notify 6
typedef void (*func_arc_freetype_FreeType$SizeMetrics_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_notifyAll 7
typedef void (*func_arc_freetype_FreeType$SizeMetrics_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_wait 8
typedef void (*func_arc_freetype_FreeType$SizeMetrics_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_wait_long 9
typedef void (*func_arc_freetype_FreeType$SizeMetrics_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$SizeMetrics_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getXppem_R_int 11
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getXppem_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getYppem_R_int 12
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getYppem_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getXScale_R_int 13
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getXScale_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getYscale_R_int 14
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getYscale_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getAscender_R_int 15
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getAscender_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getDescender_R_int 16
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getDescender_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getHeight_R_int 17
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int 18
typedef jint (*func_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$SizeMetrics(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$SizeMetrics(jcontext ctx);
void init_arc_freetype_FreeType$SizeMetrics_long(jcontext ctx, jobject self, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getXppem_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getYppem_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getXscale_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getYscale_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getAscender_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getDescender_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getHeight_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_long_R_int(jcontext ctx, jlong param0);
jint M_arc_freetype_FreeType$SizeMetrics_getXppem_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getYppem_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getXScale_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getYscale_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getAscender_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getDescender_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getHeight_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
