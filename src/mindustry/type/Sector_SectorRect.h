#ifndef HEADER_mindustry_type_Sector$SectorRect
#define HEADER_mindustry_type_Sector$SectorRect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Sector$SectorRect {
	java_lang_Object parent;
	jref F_center;
	jref F_top;
	jref F_right;
	jref F_result;
	jfloat F_radius;
	jfloat F_rotation;
} mindustry_type_Sector$SectorRect;

extern Class class_mindustry_type_Sector$SectorRect;


#define VTABLE_mindustry_type_Sector$SectorRect_hashCode_R_int 0
typedef jint (*func_mindustry_type_Sector$SectorRect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Sector$SectorRect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector$SectorRect_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Sector$SectorRect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Sector$SectorRect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Sector$SectorRect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_finalize 5
typedef void (*func_mindustry_type_Sector$SectorRect_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_notify 6
typedef void (*func_mindustry_type_Sector$SectorRect_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_notifyAll 7
typedef void (*func_mindustry_type_Sector$SectorRect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_wait 8
typedef void (*func_mindustry_type_Sector$SectorRect_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector$SectorRect_wait_long 9
typedef void (*func_mindustry_type_Sector$SectorRect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Sector$SectorRect_wait_long_int 10
typedef void (*func_mindustry_type_Sector$SectorRect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3 11
typedef jobject (*func_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_mindustry_type_Sector$SectorRect(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Sector$SectorRect(jcontext ctx);
void init_mindustry_type_Sector$SectorRect_float_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_float(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2, jobject param3, jfloat param4);
jobject M_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
