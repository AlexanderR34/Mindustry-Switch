#ifndef HEADER_mindustry_gen_LogicIO
#define HEADER_mindustry_gen_LogicIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_LogicIO {
	java_lang_Object parent;
} mindustry_gen_LogicIO;

extern Class class_mindustry_gen_LogicIO;

extern jobject SF_mindustry_gen_LogicIO_allStatements;

#define VTABLE_mindustry_gen_LogicIO_hashCode_R_int 0
typedef jint (*func_mindustry_gen_LogicIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_LogicIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LogicIO_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_LogicIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_LogicIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_LogicIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_finalize 5
typedef void (*func_mindustry_gen_LogicIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_notify 6
typedef void (*func_mindustry_gen_LogicIO_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_notifyAll 7
typedef void (*func_mindustry_gen_LogicIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_wait 8
typedef void (*func_mindustry_gen_LogicIO_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LogicIO_wait_long 9
typedef void (*func_mindustry_gen_LogicIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_LogicIO_wait_long_int 10
typedef void (*func_mindustry_gen_LogicIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_LogicIO(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_LogicIO(jcontext ctx);
void init_mindustry_gen_LogicIO(jcontext ctx, jobject self);
jobject SM_mindustry_gen_LogicIO_read_Array1_java_lang_String_int_R_mindustry_logic_LStatement(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_LogicIO_write_java_lang_Object_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
