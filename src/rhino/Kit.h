#ifndef HEADER_rhino_Kit
#define HEADER_rhino_Kit

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Kit {
	java_lang_Object parent;
} rhino_Kit;

extern Class class_rhino_Kit;

extern jbool SF_rhino_Kit_isIos;

#define VTABLE_rhino_Kit_hashCode_R_int 0
typedef jint (*func_rhino_Kit_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Kit_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Kit_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Kit_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Kit_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Kit_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_finalize 5
typedef void (*func_rhino_Kit_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_notify 6
typedef void (*func_rhino_Kit_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_notifyAll 7
typedef void (*func_rhino_Kit_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_wait 8
typedef void (*func_rhino_Kit_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Kit_wait_long 9
typedef void (*func_rhino_Kit_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Kit_wait_long_int 10
typedef void (*func_rhino_Kit_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Kit(jobject object, jint mark, jint depth);
void clinit_rhino_Kit(jcontext ctx);
void init_rhino_Kit(jcontext ctx, jobject self);
jobject SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0);
jobject SM_rhino_Kit_classOrNull_java_lang_ClassLoader_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Kit_newInstanceOrNull_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0);
jbool SM_rhino_Kit_testIfCanLoadRhinoClasses_java_lang_ClassLoader_R_boolean(jcontext ctx, jobject param0);
jint SM_rhino_Kit_xDigitToInt_int_int_R_int(jcontext ctx, jint param0, jint param1);
jobject SM_rhino_Kit_addListener_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Kit_removeListener_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Kit_getListener_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jobject SM_rhino_Kit_initHash_java_util_Map_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_Kit_makeHashKeyFromPair_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Kit_readReader_java_io_Reader_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_Kit_readStream_java_io_InputStream_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1);
jobject SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(jcontext ctx);
jobject SM_rhino_Kit_codeBug_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
