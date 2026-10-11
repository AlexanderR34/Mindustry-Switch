#ifndef HEADER_mindustry_logic_LParser
#define HEADER_mindustry_logic_LParser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LParser {
	java_lang_Object parent;
	jref F_statements;
	jref F_chars;
	jint F_pos;
	jint F_line;
	jint F_tok;
	jbool F_privileged;
} mindustry_logic_LParser;

extern Class class_mindustry_logic_LParser;

extern jobject SF_mindustry_logic_LParser_tokens;
extern jint SF_mindustry_logic_LParser_maxJumps;
extern jobject SF_mindustry_logic_LParser_opNameChanges;
extern jobject SF_mindustry_logic_LParser_jumps;
extern jobject SF_mindustry_logic_LParser_jumpLocations;

#define VTABLE_mindustry_logic_LParser_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LParser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LParser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LParser_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LParser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LParser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LParser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_finalize 5
typedef void (*func_mindustry_logic_LParser_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_notify 6
typedef void (*func_mindustry_logic_LParser_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_notifyAll 7
typedef void (*func_mindustry_logic_LParser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_wait 8
typedef void (*func_mindustry_logic_LParser_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_wait_long 9
typedef void (*func_mindustry_logic_LParser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LParser_wait_long_int 10
typedef void (*func_mindustry_logic_LParser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LParser_comment 11
typedef void (*func_mindustry_logic_LParser_comment)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_error_java_lang_String 12
typedef void (*func_mindustry_logic_LParser_error_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LParser_string_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_LParser_string_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_token_R_java_lang_String 14
typedef jobject (*func_mindustry_logic_LParser_token_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_checkRead 15
typedef void (*func_mindustry_logic_LParser_checkRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_statement 16
typedef void (*func_mindustry_logic_LParser_statement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser_parse_R_arc_struct_Seq 17
typedef jobject (*func_mindustry_logic_LParser_parse_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_mindustry_logic_LParser(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LParser(jcontext ctx);
void init_mindustry_logic_LParser_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_logic_LParser_comment(jcontext ctx, jobject self);
void M_mindustry_logic_LParser_error_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LParser_string_R_java_lang_String(jcontext ctx, jobject self);
jint SM_mindustry_logic_LParser_utf16size_int_R_int(jcontext ctx, jint param0);
jobject M_mindustry_logic_LParser_token_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_logic_LParser_checkRead(jcontext ctx, jobject self);
void M_mindustry_logic_LParser_statement(jcontext ctx, jobject self);
jobject M_mindustry_logic_LParser_parse_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
