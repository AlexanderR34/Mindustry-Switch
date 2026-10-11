#ifndef HEADER_arc_Graphics$Cursor$SystemCursor
#define HEADER_arc_Graphics$Cursor$SystemCursor

#include "Clearwing.h"
#include "java/lang/Enum.h"
#include "arc/Graphics_Cursor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Graphics$Cursor$SystemCursor {
	java_lang_Enum parent;
	jref F_cursor;
} arc_Graphics$Cursor$SystemCursor;

extern Class class_arc_Graphics$Cursor$SystemCursor;

extern jobject SF_arc_Graphics$Cursor$SystemCursor_arrow;
extern jobject SF_arc_Graphics$Cursor$SystemCursor_ibeam;
extern jobject SF_arc_Graphics$Cursor$SystemCursor_crosshair;
extern jobject SF_arc_Graphics$Cursor$SystemCursor_hand;
extern jobject SF_arc_Graphics$Cursor$SystemCursor_horizontalResize;
extern jobject SF_arc_Graphics$Cursor$SystemCursor_verticalResize;
extern jobject SF_arc_Graphics$Cursor$SystemCursor_$VALUES;

#define VTABLE_arc_Graphics$Cursor$SystemCursor_hashCode_R_int 0
typedef jint (*func_arc_Graphics$Cursor$SystemCursor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Graphics$Cursor$SystemCursor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Graphics$Cursor$SystemCursor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Graphics$Cursor$SystemCursor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_toString_R_java_lang_String 4
typedef jobject (*func_arc_Graphics$Cursor$SystemCursor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_finalize 5
typedef void (*func_arc_Graphics$Cursor$SystemCursor_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_notify 6
typedef void (*func_arc_Graphics$Cursor$SystemCursor_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_notifyAll 7
typedef void (*func_arc_Graphics$Cursor$SystemCursor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_wait 8
typedef void (*func_arc_Graphics$Cursor$SystemCursor_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_wait_long 9
typedef void (*func_arc_Graphics$Cursor$SystemCursor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_wait_long_int 10
typedef void (*func_arc_Graphics$Cursor$SystemCursor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_Graphics$Cursor$SystemCursor_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_Graphics$Cursor$SystemCursor_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_name_R_java_lang_String 13
typedef jobject (*func_arc_Graphics$Cursor$SystemCursor_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_ordinal_R_int 14
typedef jint (*func_arc_Graphics$Cursor$SystemCursor_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_Graphics$Cursor$SystemCursor_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_dispose 16
typedef void (*func_arc_Graphics$Cursor$SystemCursor_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_isDisposed_R_boolean 17
typedef jbool (*func_arc_Graphics$Cursor$SystemCursor_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor 18
typedef void (*func_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0);

void mark_arc_Graphics$Cursor$SystemCursor(jobject object, jint mark, jint depth);
void clinit_arc_Graphics$Cursor$SystemCursor(jcontext ctx);
jobject SM_arc_Graphics$Cursor$SystemCursor_values_R_Array1_arc_Graphics$Cursor$SystemCursor(jcontext ctx);
jobject SM_arc_Graphics$Cursor$SystemCursor_valueOf_java_lang_String_R_arc_Graphics$Cursor$SystemCursor(jcontext ctx, jobject param0);
void init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0);
void M_arc_Graphics$Cursor$SystemCursor_dispose(jcontext ctx, jobject self);
jobject SM_arc_Graphics$Cursor$SystemCursor_$values_R_Array1_arc_Graphics$Cursor$SystemCursor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
