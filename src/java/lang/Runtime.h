#ifndef HEADER_java_lang_Runtime
#define HEADER_java_lang_Runtime

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Runtime {
	java_lang_Object parent;
} java_lang_Runtime;

extern Class class_java_lang_Runtime;

extern jobject SF_java_lang_Runtime_instance;

#define VTABLE_java_lang_Runtime_hashCode_R_int 0
typedef jint (*func_java_lang_Runtime_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Runtime_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Runtime_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Runtime_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Runtime_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Runtime_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_finalize 5
typedef void (*func_java_lang_Runtime_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_notify 6
typedef void (*func_java_lang_Runtime_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_notifyAll 7
typedef void (*func_java_lang_Runtime_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_wait 8
typedef void (*func_java_lang_Runtime_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_wait_long 9
typedef void (*func_java_lang_Runtime_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Runtime_wait_long_int 10
typedef void (*func_java_lang_Runtime_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Runtime_exit_int 11
typedef void (*func_java_lang_Runtime_exit_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_Runtime_freeMemory_R_long 12
typedef jlong (*func_java_lang_Runtime_freeMemory_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_maxMemory_R_long 13
typedef jlong (*func_java_lang_Runtime_maxMemory_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_gc 14
typedef void (*func_java_lang_Runtime_gc)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_totalMemory_R_long 15
typedef jlong (*func_java_lang_Runtime_totalMemory_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_availableProcessors_R_int 16
typedef jint (*func_java_lang_Runtime_availableProcessors_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process 17
typedef jobject (*func_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process 18
typedef jobject (*func_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process 19
typedef jobject (*func_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process 20
typedef jobject (*func_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process 21
typedef jobject (*func_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process 22
typedef jobject (*func_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_java_lang_Runtime(jobject object, jint mark, jint depth);
void clinit_java_lang_Runtime(jcontext ctx);
void init_java_lang_Runtime(jcontext ctx, jobject self);
void M_java_lang_Runtime_exit_int(jcontext ctx, jobject self, jint param0);
jlong M_java_lang_Runtime_freeMemory_R_long(jcontext ctx, jobject self);
jlong M_java_lang_Runtime_maxMemory_R_long(jcontext ctx, jobject self);
void M_java_lang_Runtime_gc(jcontext ctx, jobject self);
jobject SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(jcontext ctx);
jlong M_java_lang_Runtime_totalMemory_R_long(jcontext ctx, jobject self);
jlong SM_java_lang_Runtime_totalMemoryImpl_R_long(jcontext ctx);
jlong SM_java_lang_Runtime_freeMemoryImpl_R_long(jcontext ctx);
jlong SM_java_lang_Runtime_maxMemoryImpl_R_long(jcontext ctx);
jint M_java_lang_Runtime_availableProcessors_R_int(jcontext ctx, jobject self);
jobject M_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
