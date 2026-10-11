#ifndef HEADER_java_text_Normalizer$Form
#define HEADER_java_text_Normalizer$Form

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_Normalizer$Form {
	java_lang_Enum parent;
} java_text_Normalizer$Form;

extern Class class_java_text_Normalizer$Form;

extern jobject SF_java_text_Normalizer$Form_NFD;
extern jobject SF_java_text_Normalizer$Form_NFC;
extern jobject SF_java_text_Normalizer$Form_NFKD;
extern jobject SF_java_text_Normalizer$Form_NFKC;
extern jobject SF_java_text_Normalizer$Form_$VALUES;

#define VTABLE_java_text_Normalizer$Form_hashCode_R_int 0
typedef jint (*func_java_text_Normalizer$Form_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_Normalizer$Form_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Normalizer$Form_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_Normalizer$Form_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_Normalizer$Form_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_toString_R_java_lang_String 4
typedef jobject (*func_java_text_Normalizer$Form_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_finalize 5
typedef void (*func_java_text_Normalizer$Form_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_notify 6
typedef void (*func_java_text_Normalizer$Form_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_notifyAll 7
typedef void (*func_java_text_Normalizer$Form_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_wait 8
typedef void (*func_java_text_Normalizer$Form_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_wait_long 9
typedef void (*func_java_text_Normalizer$Form_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_Normalizer$Form_wait_long_int 10
typedef void (*func_java_text_Normalizer$Form_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_Normalizer$Form_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_text_Normalizer$Form_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Normalizer$Form_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_text_Normalizer$Form_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Normalizer$Form_name_R_java_lang_String 13
typedef jobject (*func_java_text_Normalizer$Form_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_ordinal_R_int 14
typedef jint (*func_java_text_Normalizer$Form_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Normalizer$Form_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_text_Normalizer$Form_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_text_Normalizer$Form(jobject object, jint mark, jint depth);
void clinit_java_text_Normalizer$Form(jcontext ctx);
jobject SM_java_text_Normalizer$Form_values_R_Array1_java_text_Normalizer$Form(jcontext ctx);
jobject SM_java_text_Normalizer$Form_valueOf_java_lang_String_R_java_text_Normalizer$Form(jcontext ctx, jobject param0);
void init_java_text_Normalizer$Form_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_java_text_Normalizer$Form_$values_R_Array1_java_text_Normalizer$Form(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
