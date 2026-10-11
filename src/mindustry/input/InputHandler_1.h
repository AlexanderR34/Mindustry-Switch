#ifndef HEADER_mindustry_input_InputHandler$1
#define HEADER_mindustry_input_InputHandler$1

#include "Clearwing.h"
#include "mindustry/input/InputHandler_QueryEachable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_InputHandler$1 {
	mindustry_input_InputHandler$QueryEachable parent;
	jref F_this$0;
} mindustry_input_InputHandler$1;

extern Class class_mindustry_input_InputHandler$1;


#define VTABLE_mindustry_input_InputHandler$1_hashCode_R_int 0
typedef jint (*func_mindustry_input_InputHandler$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_InputHandler$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_InputHandler$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_InputHandler$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_InputHandler$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_finalize 5
typedef void (*func_mindustry_input_InputHandler$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_notify 6
typedef void (*func_mindustry_input_InputHandler$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_notifyAll 7
typedef void (*func_mindustry_input_InputHandler$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_wait 8
typedef void (*func_mindustry_input_InputHandler$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler$1_wait_long 9
typedef void (*func_mindustry_input_InputHandler$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_InputHandler$1_wait_long_int 10
typedef void (*func_mindustry_input_InputHandler$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_input_InputHandler$1_each_arc_func_Cons 11
typedef void (*func_mindustry_input_InputHandler$1_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler$1_find_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan 12
typedef jobject (*func_mindustry_input_InputHandler$1_find_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan 13
typedef jobject (*func_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);

void mark_mindustry_input_InputHandler$1(jobject object, jint mark, jint depth);
void clinit_mindustry_input_InputHandler$1(jcontext ctx);
void init_mindustry_input_InputHandler$1_mindustry_input_InputHandler_arc_math_geom_QuadTree_Array1_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
