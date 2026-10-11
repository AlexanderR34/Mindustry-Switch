#ifndef HEADER_arc_util_serialization_Jval$Jwriter
#define HEADER_arc_util_serialization_Jval$Jwriter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$Jwriter {
	java_lang_Object parent;
} arc_util_serialization_Jval$Jwriter;

extern Class class_arc_util_serialization_Jval$Jwriter;


#define VTABLE_arc_util_serialization_Jval$Jwriter_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$Jwriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$Jwriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Jwriter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$Jwriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$Jwriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$Jwriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_finalize 5
typedef void (*func_arc_util_serialization_Jval$Jwriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_notify 6
typedef void (*func_arc_util_serialization_Jval$Jwriter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$Jwriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_wait 8
typedef void (*func_arc_util_serialization_Jval$Jwriter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Jwriter_wait_long 9
typedef void (*func_arc_util_serialization_Jval$Jwriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$Jwriter_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$Jwriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_serialization_Jval$Jwriter(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$Jwriter(jcontext ctx);
void init_arc_util_serialization_Jval$Jwriter(jcontext ctx, jobject self);
void SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int(jcontext ctx, jobject param0, jint param1);
void SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(jcontext ctx, jobject param0, jbool param1, jbool param2, jobject param3, jint param4);
jobject SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_serialization_Jval$Jwriter_doEscapeString_java_lang_StringBuilder_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_arc_util_serialization_Jval$Jwriter_getEscapedChar_char_R_java_lang_String(jcontext ctx, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
