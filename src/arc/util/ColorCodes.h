#ifndef HEADER_arc_util_ColorCodes
#define HEADER_arc_util_ColorCodes

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_ColorCodes {
	java_lang_Object parent;
} arc_util_ColorCodes;

extern Class class_arc_util_ColorCodes;

extern jobject SF_arc_util_ColorCodes_flush;
extern jobject SF_arc_util_ColorCodes_reset;
extern jobject SF_arc_util_ColorCodes_bold;
extern jobject SF_arc_util_ColorCodes_italic;
extern jobject SF_arc_util_ColorCodes_underline;
extern jobject SF_arc_util_ColorCodes_black;
extern jobject SF_arc_util_ColorCodes_red;
extern jobject SF_arc_util_ColorCodes_green;
extern jobject SF_arc_util_ColorCodes_yellow;
extern jobject SF_arc_util_ColorCodes_blue;
extern jobject SF_arc_util_ColorCodes_purple;
extern jobject SF_arc_util_ColorCodes_cyan;
extern jobject SF_arc_util_ColorCodes_lightBlack;
extern jobject SF_arc_util_ColorCodes_lightRed;
extern jobject SF_arc_util_ColorCodes_lightGreen;
extern jobject SF_arc_util_ColorCodes_lightYellow;
extern jobject SF_arc_util_ColorCodes_lightBlue;
extern jobject SF_arc_util_ColorCodes_lightMagenta;
extern jobject SF_arc_util_ColorCodes_lightCyan;
extern jobject SF_arc_util_ColorCodes_lightWhite;
extern jobject SF_arc_util_ColorCodes_white;
extern jobject SF_arc_util_ColorCodes_backDefault;
extern jobject SF_arc_util_ColorCodes_backRed;
extern jobject SF_arc_util_ColorCodes_backGreen;
extern jobject SF_arc_util_ColorCodes_backYellow;
extern jobject SF_arc_util_ColorCodes_backBlue;
extern jobject SF_arc_util_ColorCodes_codes;
extern jobject SF_arc_util_ColorCodes_values;

#define VTABLE_arc_util_ColorCodes_hashCode_R_int 0
typedef jint (*func_arc_util_ColorCodes_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_ColorCodes_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_ColorCodes_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_ColorCodes_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_ColorCodes_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_ColorCodes_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_finalize 5
typedef void (*func_arc_util_ColorCodes_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_notify 6
typedef void (*func_arc_util_ColorCodes_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_notifyAll 7
typedef void (*func_arc_util_ColorCodes_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_wait 8
typedef void (*func_arc_util_ColorCodes_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ColorCodes_wait_long 9
typedef void (*func_arc_util_ColorCodes_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_ColorCodes_wait_long_int 10
typedef void (*func_arc_util_ColorCodes_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_ColorCodes(jobject object, jint mark, jint depth);
void clinit_arc_util_ColorCodes(jcontext ctx);
void init_arc_util_ColorCodes(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
