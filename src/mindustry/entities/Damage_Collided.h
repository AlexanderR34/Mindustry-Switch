#ifndef HEADER_mindustry_entities_Damage$Collided
#define HEADER_mindustry_entities_Damage$Collided

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Damage$Collided {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jref F_target;
} mindustry_entities_Damage$Collided;

extern Class class_mindustry_entities_Damage$Collided;


#define VTABLE_mindustry_entities_Damage$Collided_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Damage$Collided_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Damage$Collided_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Damage$Collided_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Damage$Collided_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Damage$Collided_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Damage$Collided_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_finalize 5
typedef void (*func_mindustry_entities_Damage$Collided_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_notify 6
typedef void (*func_mindustry_entities_Damage$Collided_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_notifyAll 7
typedef void (*func_mindustry_entities_Damage$Collided_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_wait 8
typedef void (*func_mindustry_entities_Damage$Collided_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_wait_long 9
typedef void (*func_mindustry_entities_Damage$Collided_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Damage$Collided_wait_long_int 10
typedef void (*func_mindustry_entities_Damage$Collided_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_Damage$Collided_reset 11
typedef void (*func_mindustry_entities_Damage$Collided_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided 12
typedef jobject (*func_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);

void mark_mindustry_entities_Damage$Collided(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Damage$Collided(jcontext ctx);
void init_mindustry_entities_Damage$Collided(jcontext ctx, jobject self);
jobject M_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
void M_mindustry_entities_Damage$Collided_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
