#ifndef HEADER_mindustry_io_TypeIO$BuildingBox
#define HEADER_mindustry_io_TypeIO$BuildingBox

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/io/TypeIO_Boxed.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_TypeIO$BuildingBox {
	java_lang_Object parent;
	jint F_pos;
} mindustry_io_TypeIO$BuildingBox;

extern Class class_mindustry_io_TypeIO$BuildingBox;


#define VTABLE_mindustry_io_TypeIO$BuildingBox_hashCode_R_int 0
typedef jint (*func_mindustry_io_TypeIO$BuildingBox_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_TypeIO$BuildingBox_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_TypeIO$BuildingBox_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_TypeIO$BuildingBox_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_finalize 5
typedef void (*func_mindustry_io_TypeIO$BuildingBox_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_notify 6
typedef void (*func_mindustry_io_TypeIO$BuildingBox_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_notifyAll 7
typedef void (*func_mindustry_io_TypeIO$BuildingBox_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_wait 8
typedef void (*func_mindustry_io_TypeIO$BuildingBox_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_wait_long 9
typedef void (*func_mindustry_io_TypeIO$BuildingBox_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_wait_long_int 10
typedef void (*func_mindustry_io_TypeIO$BuildingBox_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object 11
typedef jobject (*func_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building 12
typedef jobject (*func_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building)(jcontext ctx, jobject self);

void mark_mindustry_io_TypeIO$BuildingBox(jobject object, jint mark, jint depth);
void clinit_mindustry_io_TypeIO$BuildingBox(jcontext ctx);
void init_mindustry_io_TypeIO$BuildingBox_int(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
