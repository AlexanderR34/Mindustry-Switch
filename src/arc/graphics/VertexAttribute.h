#ifndef HEADER_arc_graphics_VertexAttribute
#define HEADER_arc_graphics_VertexAttribute

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_VertexAttribute {
	java_lang_Object parent;
	jint F_components;
	jbool F_normalized;
	jint F_type;
	jref F_alias;
	jint F_size;
} arc_graphics_VertexAttribute;

extern Class class_arc_graphics_VertexAttribute;

extern jobject SF_arc_graphics_VertexAttribute_position;
extern jobject SF_arc_graphics_VertexAttribute_position3;
extern jobject SF_arc_graphics_VertexAttribute_packedPosition;
extern jobject SF_arc_graphics_VertexAttribute_texCoords;
extern jobject SF_arc_graphics_VertexAttribute_packedTexCoords;
extern jobject SF_arc_graphics_VertexAttribute_normal;
extern jobject SF_arc_graphics_VertexAttribute_packedNormal;
extern jobject SF_arc_graphics_VertexAttribute_color;
extern jobject SF_arc_graphics_VertexAttribute_mixColor;

#define VTABLE_arc_graphics_VertexAttribute_hashCode_R_int 0
typedef jint (*func_arc_graphics_VertexAttribute_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_VertexAttribute_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_VertexAttribute_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_VertexAttribute_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_VertexAttribute_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_VertexAttribute_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_finalize 5
typedef void (*func_arc_graphics_VertexAttribute_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_notify 6
typedef void (*func_arc_graphics_VertexAttribute_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_notifyAll 7
typedef void (*func_arc_graphics_VertexAttribute_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_wait 8
typedef void (*func_arc_graphics_VertexAttribute_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_VertexAttribute_wait_long 9
typedef void (*func_arc_graphics_VertexAttribute_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_VertexAttribute_wait_long_int 10
typedef void (*func_arc_graphics_VertexAttribute_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_VertexAttribute(jobject object, jint mark, jint depth);
void clinit_arc_graphics_VertexAttribute(jcontext ctx);
void init_arc_graphics_VertexAttribute_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
