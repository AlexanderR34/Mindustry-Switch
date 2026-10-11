#ifndef HEADER_java_text_FieldPosition
#define HEADER_java_text_FieldPosition

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_FieldPosition {
	java_lang_Object parent;
	jint F_field;
	jint F_endIndex;
	jint F_beginIndex;
} java_text_FieldPosition;

extern Class class_java_text_FieldPosition;


#define VTABLE_java_text_FieldPosition_hashCode_R_int 0
typedef jint (*func_java_text_FieldPosition_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_FieldPosition_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_FieldPosition_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_FieldPosition_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_FieldPosition_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_toString_R_java_lang_String 4
typedef jobject (*func_java_text_FieldPosition_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_finalize 5
typedef void (*func_java_text_FieldPosition_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_notify 6
typedef void (*func_java_text_FieldPosition_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_notifyAll 7
typedef void (*func_java_text_FieldPosition_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_wait 8
typedef void (*func_java_text_FieldPosition_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_wait_long 9
typedef void (*func_java_text_FieldPosition_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_FieldPosition_wait_long_int 10
typedef void (*func_java_text_FieldPosition_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_FieldPosition_getField_R_int 11
typedef jint (*func_java_text_FieldPosition_getField_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_getBeginIndex_R_int 12
typedef jint (*func_java_text_FieldPosition_getBeginIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_getEndIndex_R_int 13
typedef jint (*func_java_text_FieldPosition_getEndIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_FieldPosition_setBeginIndex_int 14
typedef void (*func_java_text_FieldPosition_setBeginIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_text_FieldPosition_setEndIndex_int 15
typedef void (*func_java_text_FieldPosition_setEndIndex_int)(jcontext ctx, jobject self, jint param0);

void mark_java_text_FieldPosition(jobject object, jint mark, jint depth);
void clinit_java_text_FieldPosition(jcontext ctx);
void init_java_text_FieldPosition_int(jcontext ctx, jobject self, jint param0);
jint M_java_text_FieldPosition_getField_R_int(jcontext ctx, jobject self);
jint M_java_text_FieldPosition_getBeginIndex_R_int(jcontext ctx, jobject self);
jint M_java_text_FieldPosition_getEndIndex_R_int(jcontext ctx, jobject self);
void M_java_text_FieldPosition_setBeginIndex_int(jcontext ctx, jobject self, jint param0);
void M_java_text_FieldPosition_setEndIndex_int(jcontext ctx, jobject self, jint param0);
jbool M_java_text_FieldPosition_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_text_FieldPosition_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
