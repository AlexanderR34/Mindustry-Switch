#ifndef HEADER_mindustry_ui_builder_UiDslParser
#define HEADER_mindustry_ui_builder_UiDslParser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_UiDslParser {
	java_lang_Object parent;
	jref F_src;
	jint F_pos;
	jbool F_lastQuoted;
} mindustry_ui_builder_UiDslParser;

extern Class class_mindustry_ui_builder_UiDslParser;


#define VTABLE_mindustry_ui_builder_UiDslParser_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_UiDslParser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_UiDslParser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiDslParser_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_UiDslParser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_UiDslParser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_UiDslParser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_finalize 5
typedef void (*func_mindustry_ui_builder_UiDslParser_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_notify 6
typedef void (*func_mindustry_ui_builder_UiDslParser_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_notifyAll 7
typedef void (*func_mindustry_ui_builder_UiDslParser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_wait 8
typedef void (*func_mindustry_ui_builder_UiDslParser_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_wait_long 9
typedef void (*func_mindustry_ui_builder_UiDslParser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_UiDslParser_wait_long_int 10
typedef void (*func_mindustry_ui_builder_UiDslParser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder 11
typedef void (*func_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder 12
typedef void (*func_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object 13
typedef jobject (*func_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String 14
typedef jobject (*func_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String 15
typedef jobject (*func_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String 16
typedef jobject (*func_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_skipWs 17
typedef void (*func_mindustry_ui_builder_UiDslParser_skipWs)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_expect_char 18
typedef void (*func_mindustry_ui_builder_UiDslParser_expect_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean 19
typedef jbool (*func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char 20
typedef jchar (*func_mindustry_ui_builder_UiDslParser_peek_R_char)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int 21
typedef jint (*func_mindustry_ui_builder_UiDslParser_line_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_ui_builder_UiDslParser(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_UiDslParser(jcontext ctx);
void init_mindustry_ui_builder_UiDslParser_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_ui_builder_UiDslParser_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder(jcontext ctx, jobject param0);
void M_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_ui_builder_UiDslParser_getShorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey(jcontext ctx, jobject param0);
jobject M_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_ui_builder_UiDslParser_skipWs(jcontext ctx, jobject self);
void M_mindustry_ui_builder_UiDslParser_expect_char(jcontext ctx, jobject self, jchar param0);
jbool M_mindustry_ui_builder_UiDslParser_atEnd_R_boolean(jcontext ctx, jobject self);
jchar M_mindustry_ui_builder_UiDslParser_peek_R_char(jcontext ctx, jobject self);
jint M_mindustry_ui_builder_UiDslParser_line_int_R_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
