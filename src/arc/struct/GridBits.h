#ifndef HEADER_arc_struct_GridBits
#define HEADER_arc_struct_GridBits

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_GridBits {
	java_lang_Object parent;
	jref F_bits;
	jint F_width;
	jint F_height;
} arc_struct_GridBits;

extern Class class_arc_struct_GridBits;


#define VTABLE_arc_struct_GridBits_hashCode_R_int 0
typedef jint (*func_arc_struct_GridBits_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_GridBits_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_GridBits_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_GridBits_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_GridBits_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_GridBits_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_finalize 5
typedef void (*func_arc_struct_GridBits_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_notify 6
typedef void (*func_arc_struct_GridBits_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_notifyAll 7
typedef void (*func_arc_struct_GridBits_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_wait 8
typedef void (*func_arc_struct_GridBits_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_wait_long 9
typedef void (*func_arc_struct_GridBits_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_GridBits_wait_long_int 10
typedef void (*func_arc_struct_GridBits_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_GridBits_set_arc_struct_GridBits 11
typedef void (*func_arc_struct_GridBits_set_arc_struct_GridBits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_GridBits_get_int_int_R_boolean 12
typedef jbool (*func_arc_struct_GridBits_get_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_GridBits_set_int_int 13
typedef void (*func_arc_struct_GridBits_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_GridBits_set_int_int_boolean 14
typedef void (*func_arc_struct_GridBits_set_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_arc_struct_GridBits_clear 15
typedef void (*func_arc_struct_GridBits_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_width_R_int 16
typedef jint (*func_arc_struct_GridBits_width_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridBits_height_R_int 17
typedef jint (*func_arc_struct_GridBits_height_R_int)(jcontext ctx, jobject self);

void mark_arc_struct_GridBits(jobject object, jint mark, jint depth);
void clinit_arc_struct_GridBits(jcontext ctx);
void init_arc_struct_GridBits_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_GridBits_set_arc_struct_GridBits(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_GridBits_get_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_GridBits_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_GridBits_set_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
void M_arc_struct_GridBits_clear(jcontext ctx, jobject self);
jint M_arc_struct_GridBits_width_R_int(jcontext ctx, jobject self);
jint M_arc_struct_GridBits_height_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
