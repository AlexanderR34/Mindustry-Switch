#ifndef HEADER_regexodus_Replacer$StringBuilderBuffer
#define HEADER_regexodus_Replacer$StringBuilderBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/TextBuffer.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Replacer$StringBuilderBuffer {
	java_lang_Object parent;
	jref F_sb;
} regexodus_Replacer$StringBuilderBuffer;

extern Class class_regexodus_Replacer$StringBuilderBuffer;

extern jlong SF_regexodus_Replacer$StringBuilderBuffer_serialVersionUID;

#define VTABLE_regexodus_Replacer$StringBuilderBuffer_hashCode_R_int 0
typedef jint (*func_regexodus_Replacer$StringBuilderBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Replacer$StringBuilderBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Replacer$StringBuilderBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Replacer$StringBuilderBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Replacer$StringBuilderBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_finalize 5
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_notify 6
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_notifyAll 7
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_wait 8
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_wait_long 9
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_wait_long_int 10
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_append_char 11
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_append_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_append_Array1_char_int_int 12
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_append_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_append_java_lang_String 13
typedef void (*func_regexodus_Replacer$StringBuilderBuffer_append_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$StringBuilderBuffer_toStringBuilder_R_java_lang_StringBuilder 14
typedef jobject (*func_regexodus_Replacer$StringBuilderBuffer_toStringBuilder_R_java_lang_StringBuilder)(jcontext ctx, jobject self);

void mark_regexodus_Replacer$StringBuilderBuffer(jobject object, jint mark, jint depth);
void clinit_regexodus_Replacer$StringBuilderBuffer(jcontext ctx);
void init_regexodus_Replacer$StringBuilderBuffer(jcontext ctx, jobject self);
void init_regexodus_Replacer$StringBuilderBuffer_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Replacer$StringBuilderBuffer_append_char(jcontext ctx, jobject self, jchar param0);
void M_regexodus_Replacer$StringBuilderBuffer_append_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_regexodus_Replacer$StringBuilderBuffer_append_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Replacer$StringBuilderBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Replacer$StringBuilderBuffer_toStringBuilder_R_java_lang_StringBuilder(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
