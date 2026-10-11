#ifndef HEADER_mindustry_io_TypeIO$UnitBox
#define HEADER_mindustry_io_TypeIO$UnitBox

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/io/TypeIO_Boxed.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_TypeIO$UnitBox {
	java_lang_Object parent;
	jint F_id;
} mindustry_io_TypeIO$UnitBox;

extern Class class_mindustry_io_TypeIO$UnitBox;


#define VTABLE_mindustry_io_TypeIO$UnitBox_hashCode_R_int 0
typedef jint (*func_mindustry_io_TypeIO$UnitBox_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_TypeIO$UnitBox_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_TypeIO$UnitBox_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_TypeIO$UnitBox_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_TypeIO$UnitBox_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_TypeIO$UnitBox_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_finalize 5
typedef void (*func_mindustry_io_TypeIO$UnitBox_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_notify 6
typedef void (*func_mindustry_io_TypeIO$UnitBox_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_notifyAll 7
typedef void (*func_mindustry_io_TypeIO$UnitBox_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_wait 8
typedef void (*func_mindustry_io_TypeIO$UnitBox_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_wait_long 9
typedef void (*func_mindustry_io_TypeIO$UnitBox_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_TypeIO$UnitBox_wait_long_int 10
typedef void (*func_mindustry_io_TypeIO$UnitBox_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_TypeIO$UnitBox_unbox_R_java_lang_Object 11
typedef jobject (*func_mindustry_io_TypeIO$UnitBox_unbox_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$UnitBox_unbox_R_mindustry_gen_Unit 12
typedef jobject (*func_mindustry_io_TypeIO$UnitBox_unbox_R_mindustry_gen_Unit)(jcontext ctx, jobject self);

void mark_mindustry_io_TypeIO$UnitBox(jobject object, jint mark, jint depth);
void clinit_mindustry_io_TypeIO$UnitBox(jcontext ctx);
void init_mindustry_io_TypeIO$UnitBox_int(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_io_TypeIO$UnitBox_unbox_R_mindustry_gen_Unit(jcontext ctx, jobject self);
jobject M_mindustry_io_TypeIO$UnitBox_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_io_TypeIO$UnitBox_unbox_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
