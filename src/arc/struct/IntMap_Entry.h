#ifndef HEADER_arc_struct_IntMap$Entry
#define HEADER_arc_struct_IntMap$Entry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntMap$Entry {
	java_lang_Object parent;
	jint F_key;
	jref F_value;
} arc_struct_IntMap$Entry;

extern Class class_arc_struct_IntMap$Entry;


#define VTABLE_arc_struct_IntMap$Entry_hashCode_R_int 0
typedef jint (*func_arc_struct_IntMap$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntMap$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntMap$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntMap$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntMap$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntMap$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_finalize 5
typedef void (*func_arc_struct_IntMap$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_notify 6
typedef void (*func_arc_struct_IntMap$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_notifyAll 7
typedef void (*func_arc_struct_IntMap$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_wait 8
typedef void (*func_arc_struct_IntMap$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Entry_wait_long 9
typedef void (*func_arc_struct_IntMap$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntMap$Entry_wait_long_int 10
typedef void (*func_arc_struct_IntMap$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_struct_IntMap$Entry(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntMap$Entry(jcontext ctx);
void init_arc_struct_IntMap$Entry(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap$Entry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
