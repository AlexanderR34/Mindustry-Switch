#ifndef HEADER_arc_Input$Peripheral
#define HEADER_arc_Input$Peripheral

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Input$Peripheral {
	java_lang_Enum parent;
} arc_Input$Peripheral;

extern Class class_arc_Input$Peripheral;

extern jobject SF_arc_Input$Peripheral_hardwareKeyboard;
extern jobject SF_arc_Input$Peripheral_onscreenKeyboard;
extern jobject SF_arc_Input$Peripheral_multitouchScreen;
extern jobject SF_arc_Input$Peripheral_accelerometer;
extern jobject SF_arc_Input$Peripheral_compass;
extern jobject SF_arc_Input$Peripheral_vibrator;
extern jobject SF_arc_Input$Peripheral_gyroscope;
extern jobject SF_arc_Input$Peripheral_rotationVector;
extern jobject SF_arc_Input$Peripheral_pressure;
extern jobject SF_arc_Input$Peripheral_$VALUES;

#define VTABLE_arc_Input$Peripheral_hashCode_R_int 0
typedef jint (*func_arc_Input$Peripheral_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Input$Peripheral_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$Peripheral_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Input$Peripheral_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Input$Peripheral_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_toString_R_java_lang_String 4
typedef jobject (*func_arc_Input$Peripheral_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_finalize 5
typedef void (*func_arc_Input$Peripheral_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_notify 6
typedef void (*func_arc_Input$Peripheral_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_notifyAll 7
typedef void (*func_arc_Input$Peripheral_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_wait 8
typedef void (*func_arc_Input$Peripheral_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_wait_long 9
typedef void (*func_arc_Input$Peripheral_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Input$Peripheral_wait_long_int 10
typedef void (*func_arc_Input$Peripheral_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Input$Peripheral_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_Input$Peripheral_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$Peripheral_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_Input$Peripheral_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$Peripheral_name_R_java_lang_String 13
typedef jobject (*func_arc_Input$Peripheral_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_ordinal_R_int 14
typedef jint (*func_arc_Input$Peripheral_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$Peripheral_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_Input$Peripheral_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_Input$Peripheral(jobject object, jint mark, jint depth);
void clinit_arc_Input$Peripheral(jcontext ctx);
jobject SM_arc_Input$Peripheral_values_R_Array1_arc_Input$Peripheral(jcontext ctx);
jobject SM_arc_Input$Peripheral_valueOf_java_lang_String_R_arc_Input$Peripheral(jcontext ctx, jobject param0);
void init_arc_Input$Peripheral_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_Input$Peripheral_$values_R_Array1_arc_Input$Peripheral(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
