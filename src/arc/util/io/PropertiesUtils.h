#ifndef HEADER_arc_util_io_PropertiesUtils
#define HEADER_arc_util_io_PropertiesUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_PropertiesUtils {
	java_lang_Object parent;
} arc_util_io_PropertiesUtils;

extern Class class_arc_util_io_PropertiesUtils;

extern jint SF_arc_util_io_PropertiesUtils_NONE;
extern jint SF_arc_util_io_PropertiesUtils_SLASH;
extern jint SF_arc_util_io_PropertiesUtils_UNICODE;
extern jint SF_arc_util_io_PropertiesUtils_CONTINUE;
extern jint SF_arc_util_io_PropertiesUtils_KEY_DONE;
extern jint SF_arc_util_io_PropertiesUtils_IGNORE;
extern jobject SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR;

#define VTABLE_arc_util_io_PropertiesUtils_hashCode_R_int 0
typedef jint (*func_arc_util_io_PropertiesUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_PropertiesUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_PropertiesUtils_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_PropertiesUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_PropertiesUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_PropertiesUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_finalize 5
typedef void (*func_arc_util_io_PropertiesUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_notify 6
typedef void (*func_arc_util_io_PropertiesUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_notifyAll 7
typedef void (*func_arc_util_io_PropertiesUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_wait 8
typedef void (*func_arc_util_io_PropertiesUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_PropertiesUtils_wait_long 9
typedef void (*func_arc_util_io_PropertiesUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_PropertiesUtils_wait_long_int 10
typedef void (*func_arc_util_io_PropertiesUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_io_PropertiesUtils(jobject object, jint mark, jint depth);
void clinit_arc_util_io_PropertiesUtils(jcontext ctx);
void init_arc_util_io_PropertiesUtils(jcontext ctx, jobject self);
void SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3);
void SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_util_io_PropertiesUtils_storeImpl_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4);
void SM_arc_util_io_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3);
void SM_arc_util_io_PropertiesUtils_writeComment_java_io_Writer_java_lang_String(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
