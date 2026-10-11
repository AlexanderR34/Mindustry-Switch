#ifndef HEADER_arc_graphics_gl_GLVersion$GlType
#define HEADER_arc_graphics_gl_GLVersion$GlType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_GLVersion$GlType {
	java_lang_Enum parent;
} arc_graphics_gl_GLVersion$GlType;

extern Class class_arc_graphics_gl_GLVersion$GlType;

extern jobject SF_arc_graphics_gl_GLVersion$GlType_OpenGL;
extern jobject SF_arc_graphics_gl_GLVersion$GlType_GLES;
extern jobject SF_arc_graphics_gl_GLVersion$GlType_WebGL;
extern jobject SF_arc_graphics_gl_GLVersion$GlType_NONE;
extern jobject SF_arc_graphics_gl_GLVersion$GlType_$VALUES;

#define VTABLE_arc_graphics_gl_GLVersion$GlType_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_GLVersion$GlType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_GLVersion$GlType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_GLVersion$GlType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_GLVersion$GlType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_GLVersion$GlType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_finalize 5
typedef void (*func_arc_graphics_gl_GLVersion$GlType_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_notify 6
typedef void (*func_arc_graphics_gl_GLVersion$GlType_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_notifyAll 7
typedef void (*func_arc_graphics_gl_GLVersion$GlType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_wait 8
typedef void (*func_arc_graphics_gl_GLVersion$GlType_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_wait_long 9
typedef void (*func_arc_graphics_gl_GLVersion$GlType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_wait_long_int 10
typedef void (*func_arc_graphics_gl_GLVersion$GlType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_graphics_gl_GLVersion$GlType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_graphics_gl_GLVersion$GlType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_name_R_java_lang_String 13
typedef jobject (*func_arc_graphics_gl_GLVersion$GlType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_ordinal_R_int 14
typedef jint (*func_arc_graphics_gl_GLVersion$GlType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion$GlType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_graphics_gl_GLVersion$GlType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_GLVersion$GlType(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_GLVersion$GlType(jcontext ctx);
jobject SM_arc_graphics_gl_GLVersion$GlType_values_R_Array1_arc_graphics_gl_GLVersion$GlType(jcontext ctx);
jobject SM_arc_graphics_gl_GLVersion$GlType_valueOf_java_lang_String_R_arc_graphics_gl_GLVersion$GlType(jcontext ctx, jobject param0);
void init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_graphics_gl_GLVersion$GlType_$values_R_Array1_arc_graphics_gl_GLVersion$GlType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
