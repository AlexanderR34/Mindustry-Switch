#ifndef HEADER_arc_util_serialization_Jval$Hwriter
#define HEADER_arc_util_serialization_Jval$Hwriter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$Hwriter {
	java_lang_Object parent;
} arc_util_serialization_Jval$Hwriter;

extern Class class_arc_util_serialization_Jval$Hwriter;


#define VTABLE_arc_util_serialization_Jval$Hwriter_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$Hwriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$Hwriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Hwriter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$Hwriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$Hwriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$Hwriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_finalize 5
typedef void (*func_arc_util_serialization_Jval$Hwriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_notify 6
typedef void (*func_arc_util_serialization_Jval$Hwriter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$Hwriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_wait 8
typedef void (*func_arc_util_serialization_Jval$Hwriter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hwriter_wait_long 9
typedef void (*func_arc_util_serialization_Jval$Hwriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$Hwriter_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$Hwriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_serialization_Jval$Hwriter(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$Hwriter(jcontext ctx);
void init_arc_util_serialization_Jval$Hwriter(jcontext ctx, jobject self);
void SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(jcontext ctx, jobject param0, jint param1);
void SM_arc_util_serialization_Jval$Hwriter_save_arc_util_serialization_Jval_java_io_Writer_int_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jbool param4);
jobject SM_arc_util_serialization_Jval$Hwriter_escapeName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_serialization_Jval$Hwriter_needsEscapeName_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_arc_util_serialization_Jval$Hwriter_writeString_java_lang_String_java_io_Writer_int_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
jbool SM_arc_util_serialization_Jval$Hwriter_containsQuoteChar_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_arc_util_serialization_Jval$Hwriter_writeMLString_java_lang_String_java_io_Writer_int_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
jbool SM_arc_util_serialization_Jval$Hwriter_startsWithKeyword_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_arc_util_serialization_Jval$Hwriter_isPunctuatorChar_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_util_serialization_Jval$Hwriter_needsQuotes_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_arc_util_serialization_Jval$Hwriter_needsEscape_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_arc_util_serialization_Jval$Hwriter_needsEscapeML_char_R_boolean(jcontext ctx, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
