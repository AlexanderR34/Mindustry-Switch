#ifndef HEADER_java_text_ParsePosition
#define HEADER_java_text_ParsePosition

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_ParsePosition {
	java_lang_Object parent;
	jint F_index;
	jint F_errorIndex;
} java_text_ParsePosition;

extern Class class_java_text_ParsePosition;


#define VTABLE_java_text_ParsePosition_hashCode_R_int 0
typedef jint (*func_java_text_ParsePosition_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_ParsePosition_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_ParsePosition_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_ParsePosition_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_ParsePosition_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_toString_R_java_lang_String 4
typedef jobject (*func_java_text_ParsePosition_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_finalize 5
typedef void (*func_java_text_ParsePosition_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_notify 6
typedef void (*func_java_text_ParsePosition_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_notifyAll 7
typedef void (*func_java_text_ParsePosition_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_wait 8
typedef void (*func_java_text_ParsePosition_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_wait_long 9
typedef void (*func_java_text_ParsePosition_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_ParsePosition_wait_long_int 10
typedef void (*func_java_text_ParsePosition_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_ParsePosition_getIndex_R_int 11
typedef jint (*func_java_text_ParsePosition_getIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_ParsePosition_setIndex_int 12
typedef void (*func_java_text_ParsePosition_setIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_text_ParsePosition_setErrorIndex_int 13
typedef void (*func_java_text_ParsePosition_setErrorIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_text_ParsePosition_getErrorIndex_R_int 14
typedef jint (*func_java_text_ParsePosition_getErrorIndex_R_int)(jcontext ctx, jobject self);

void mark_java_text_ParsePosition(jobject object, jint mark, jint depth);
void clinit_java_text_ParsePosition(jcontext ctx);
jint M_java_text_ParsePosition_getIndex_R_int(jcontext ctx, jobject self);
void M_java_text_ParsePosition_setIndex_int(jcontext ctx, jobject self, jint param0);
void init_java_text_ParsePosition_int(jcontext ctx, jobject self, jint param0);
void M_java_text_ParsePosition_setErrorIndex_int(jcontext ctx, jobject self, jint param0);
jint M_java_text_ParsePosition_getErrorIndex_R_int(jcontext ctx, jobject self);
jbool M_java_text_ParsePosition_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_text_ParsePosition_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_text_ParsePosition_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
