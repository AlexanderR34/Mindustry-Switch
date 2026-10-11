#ifndef HEADER_mindustry_io_JsonIO
#define HEADER_mindustry_io_JsonIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_JsonIO {
	java_lang_Object parent;
} mindustry_io_JsonIO;

extern Class class_mindustry_io_JsonIO;

extern jobject SF_mindustry_io_JsonIO_json;

#define VTABLE_mindustry_io_JsonIO_hashCode_R_int 0
typedef jint (*func_mindustry_io_JsonIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_JsonIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_JsonIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_JsonIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_JsonIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_finalize 5
typedef void (*func_mindustry_io_JsonIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_notify 6
typedef void (*func_mindustry_io_JsonIO_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_notifyAll 7
typedef void (*func_mindustry_io_JsonIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_wait 8
typedef void (*func_mindustry_io_JsonIO_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO_wait_long 9
typedef void (*func_mindustry_io_JsonIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_JsonIO_wait_long_int 10
typedef void (*func_mindustry_io_JsonIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_io_JsonIO(jobject object, jint mark, jint depth);
void clinit_mindustry_io_JsonIO(jcontext ctx);
void init_mindustry_io_JsonIO(jcontext ctx, jobject self);
void SM_mindustry_io_JsonIO_writeBytes_java_lang_Object_java_lang_Class_java_io_DataOutputStream(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_io_JsonIO_readBytes_java_lang_Class_java_lang_Class_java_io_DataInputStream_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_io_JsonIO_copy_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_io_JsonIO_copy_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_io_JsonIO_read_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_io_JsonIO_print_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
