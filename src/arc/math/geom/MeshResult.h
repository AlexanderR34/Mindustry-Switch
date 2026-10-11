#ifndef HEADER_arc_math_geom_MeshResult
#define HEADER_arc_math_geom_MeshResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_MeshResult {
	java_lang_Object parent;
	jref F_vertices;
	jref F_indices;
} arc_math_geom_MeshResult;

extern Class class_arc_math_geom_MeshResult;


#define VTABLE_arc_math_geom_MeshResult_hashCode_R_int 0
typedef jint (*func_arc_math_geom_MeshResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_MeshResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_MeshResult_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_MeshResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_MeshResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_MeshResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_finalize 5
typedef void (*func_arc_math_geom_MeshResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_notify 6
typedef void (*func_arc_math_geom_MeshResult_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_notifyAll 7
typedef void (*func_arc_math_geom_MeshResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_wait 8
typedef void (*func_arc_math_geom_MeshResult_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_MeshResult_wait_long 9
typedef void (*func_arc_math_geom_MeshResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_MeshResult_wait_long_int 10
typedef void (*func_arc_math_geom_MeshResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_geom_MeshResult(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_MeshResult(jcontext ctx);
void init_arc_math_geom_MeshResult(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
