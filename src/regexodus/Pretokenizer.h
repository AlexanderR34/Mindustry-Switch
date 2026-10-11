#ifndef HEADER_regexodus_Pretokenizer
#define HEADER_regexodus_Pretokenizer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Pretokenizer {
	java_lang_Object parent;
	jint F_tOffset;
	jint F_tOutside;
	jint F_skip;
	jint F_offset;
	jint F_end;
	jint F_c;
	jint F_ttype;
	jref F_data;
	jint F_flags;
	jbool F_flagsChanged;
	jref F_groupName;
	jbool F_groupDeclared;
} regexodus_Pretokenizer;

extern Class class_regexodus_Pretokenizer;

extern jlong SF_regexodus_Pretokenizer_serialVersionUID;
extern jint SF_regexodus_Pretokenizer_START;
extern jint SF_regexodus_Pretokenizer_END;
extern jint SF_regexodus_Pretokenizer_PLAIN_GROUP;
extern jint SF_regexodus_Pretokenizer_POS_LOOKAHEAD;
extern jint SF_regexodus_Pretokenizer_NEG_LOOKAHEAD;
extern jint SF_regexodus_Pretokenizer_POS_LOOKBEHIND;
extern jint SF_regexodus_Pretokenizer_NEG_LOOKBEHIND;
extern jint SF_regexodus_Pretokenizer_INDEPENDENT_REGEX;
extern jint SF_regexodus_Pretokenizer_COMMENT;
extern jint SF_regexodus_Pretokenizer_CONDITIONAL_GROUP;
extern jint SF_regexodus_Pretokenizer_FLAGS;
extern jint SF_regexodus_Pretokenizer_CLASS_GROUP;
extern jint SF_regexodus_Pretokenizer_NAMED_GROUP;

#define VTABLE_regexodus_Pretokenizer_hashCode_R_int 0
typedef jint (*func_regexodus_Pretokenizer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Pretokenizer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pretokenizer_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Pretokenizer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Pretokenizer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Pretokenizer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_finalize 5
typedef void (*func_regexodus_Pretokenizer_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_notify 6
typedef void (*func_regexodus_Pretokenizer_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_notifyAll 7
typedef void (*func_regexodus_Pretokenizer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_wait 8
typedef void (*func_regexodus_Pretokenizer_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pretokenizer_wait_long 9
typedef void (*func_regexodus_Pretokenizer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Pretokenizer_wait_long_int 10
typedef void (*func_regexodus_Pretokenizer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Pretokenizer_flags_int_R_int 11
typedef jint (*func_regexodus_Pretokenizer_flags_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Pretokenizer_next 12
typedef void (*func_regexodus_Pretokenizer_next)(jcontext ctx, jobject self);

void mark_regexodus_Pretokenizer(jobject object, jint mark, jint depth);
void clinit_regexodus_Pretokenizer(jcontext ctx);
void init_regexodus_Pretokenizer_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_regexodus_Pretokenizer_flags_int_R_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_Pretokenizer_next(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
