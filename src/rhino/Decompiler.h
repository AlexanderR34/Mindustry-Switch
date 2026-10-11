#ifndef HEADER_rhino_Decompiler
#define HEADER_rhino_Decompiler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Decompiler {
	java_lang_Object parent;
	jref F_sourceBuffer;
	jint F_sourceTop;
} rhino_Decompiler;

extern Class class_rhino_Decompiler;

extern jint SF_rhino_Decompiler_ONLY_BODY_FLAG;
extern jint SF_rhino_Decompiler_TO_SOURCE_FLAG;
extern jint SF_rhino_Decompiler_INITIAL_INDENT_PROP;
extern jint SF_rhino_Decompiler_INDENT_GAP_PROP;
extern jint SF_rhino_Decompiler_CASE_GAP_PROP;
extern jint SF_rhino_Decompiler_FUNCTION_END;
extern jbool SF_rhino_Decompiler_printSource;

#define VTABLE_rhino_Decompiler_hashCode_R_int 0
typedef jint (*func_rhino_Decompiler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Decompiler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Decompiler_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Decompiler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Decompiler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Decompiler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_finalize 5
typedef void (*func_rhino_Decompiler_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_notify 6
typedef void (*func_rhino_Decompiler_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_notifyAll 7
typedef void (*func_rhino_Decompiler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_wait 8
typedef void (*func_rhino_Decompiler_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_wait_long 9
typedef void (*func_rhino_Decompiler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Decompiler_wait_long_int 10
typedef void (*func_rhino_Decompiler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Decompiler_getEncodedSource_R_java_lang_String 11
typedef jobject (*func_rhino_Decompiler_getEncodedSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_getCurrentOffset_R_int 12
typedef jint (*func_rhino_Decompiler_getCurrentOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Decompiler_markFunctionStart_int_R_int 13
typedef jint (*func_rhino_Decompiler_markFunctionStart_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Decompiler_markFunctionEnd_int_R_int 14
typedef jint (*func_rhino_Decompiler_markFunctionEnd_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Decompiler_addToken_int 15
typedef void (*func_rhino_Decompiler_addToken_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Decompiler_addEOL_int 16
typedef void (*func_rhino_Decompiler_addEOL_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Decompiler_addName_java_lang_String 17
typedef void (*func_rhino_Decompiler_addName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Decompiler_addString_java_lang_String 18
typedef void (*func_rhino_Decompiler_addString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String 19
typedef void (*func_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Decompiler_addNumber_double 20
typedef void (*func_rhino_Decompiler_addNumber_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_Decompiler_appendString_java_lang_String 21
typedef void (*func_rhino_Decompiler_appendString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Decompiler_append_char 22
typedef void (*func_rhino_Decompiler_append_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_rhino_Decompiler_increaseSourceCapacity_int 23
typedef void (*func_rhino_Decompiler_increaseSourceCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Decompiler_sourceToString_int_R_java_lang_String 24
typedef jobject (*func_rhino_Decompiler_sourceToString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);

void mark_rhino_Decompiler(jobject object, jint mark, jint depth);
void clinit_rhino_Decompiler(jcontext ctx);
void init_rhino_Decompiler(jcontext ctx, jobject self);
jobject M_rhino_Decompiler_getEncodedSource_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_Decompiler_getCurrentOffset_R_int(jcontext ctx, jobject self);
jint M_rhino_Decompiler_markFunctionStart_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_Decompiler_markFunctionEnd_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_Decompiler_addToken_int(jcontext ctx, jobject self, jint param0);
void M_rhino_Decompiler_addEOL_int(jcontext ctx, jobject self, jint param0);
void M_rhino_Decompiler_addName_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Decompiler_addString_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Decompiler_addNumber_double(jcontext ctx, jobject self, jdouble param0);
void M_rhino_Decompiler_appendString_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Decompiler_append_char(jcontext ctx, jobject self, jchar param0);
void M_rhino_Decompiler_increaseSourceCapacity_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_Decompiler_sourceToString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject SM_rhino_Decompiler_decompile_java_lang_String_int_rhino_UintMap_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
jint SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_rhino_Decompiler_getSourceStringEnd_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int(jcontext ctx, jobject param0, jint param1, jbool param2, jobject param3);
jint SM_rhino_Decompiler_printSourceNumber_java_lang_String_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject param0, jint param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
