#ifndef HEADER_arc_graphics_gl_GLVersion
#define HEADER_arc_graphics_gl_GLVersion

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_GLVersion {
	java_lang_Object parent;
	jref F_vendorString;
	jref F_rendererString;
	jref F_versionString;
	jref F_type;
	jint F_majorVersion;
	jint F_minorVersion;
	jint F_releaseVersion;
} arc_graphics_gl_GLVersion;

extern Class class_arc_graphics_gl_GLVersion;


#define VTABLE_arc_graphics_gl_GLVersion_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_GLVersion_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_GLVersion_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLVersion_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_GLVersion_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_GLVersion_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_GLVersion_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_finalize 5
typedef void (*func_arc_graphics_gl_GLVersion_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_notify 6
typedef void (*func_arc_graphics_gl_GLVersion_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_notifyAll 7
typedef void (*func_arc_graphics_gl_GLVersion_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_wait 8
typedef void (*func_arc_graphics_gl_GLVersion_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLVersion_wait_long 9
typedef void (*func_arc_graphics_gl_GLVersion_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_GLVersion_wait_long_int 10
typedef void (*func_arc_graphics_gl_GLVersion_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String 11
typedef void (*func_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int 12
typedef jint (*func_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean 13
typedef jbool (*func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String 14
typedef jobject (*func_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_GLVersion(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_GLVersion(jcontext ctx);
void init_arc_graphics_gl_GLVersion_arc_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_GLVersion_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
