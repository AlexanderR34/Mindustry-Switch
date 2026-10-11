#ifndef HEADER_arc_util_serialization_JsonValue$PrettyPrintSettings
#define HEADER_arc_util_serialization_JsonValue$PrettyPrintSettings

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_JsonValue$PrettyPrintSettings {
	java_lang_Object parent;
	jref F_outputType;
	jint F_singleLineColumns;
	jbool F_wrapNumericArrays;
} arc_util_serialization_JsonValue$PrettyPrintSettings;

extern Class class_arc_util_serialization_JsonValue$PrettyPrintSettings;


#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_finalize 5
typedef void (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_notify 6
typedef void (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_notifyAll 7
typedef void (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_wait 8
typedef void (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_wait_long 9
typedef void (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_JsonValue$PrettyPrintSettings_wait_long_int 10
typedef void (*func_arc_util_serialization_JsonValue$PrettyPrintSettings_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_serialization_JsonValue$PrettyPrintSettings(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_JsonValue$PrettyPrintSettings(jcontext ctx);
void init_arc_util_serialization_JsonValue$PrettyPrintSettings(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
