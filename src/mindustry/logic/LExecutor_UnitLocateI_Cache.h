#ifndef HEADER_mindustry_logic_LExecutor$UnitLocateI$Cache
#define HEADER_mindustry_logic_LExecutor$UnitLocateI$Cache

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$UnitLocateI$Cache {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jbool F_found;
	jref F_build;
} mindustry_logic_LExecutor$UnitLocateI$Cache;

extern Class class_mindustry_logic_LExecutor$UnitLocateI$Cache;


#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_finalize 5
typedef void (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_notify 6
typedef void (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_wait 8
typedef void (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$UnitLocateI$Cache_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$UnitLocateI$Cache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_logic_LExecutor$UnitLocateI$Cache(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$UnitLocateI$Cache(jcontext ctx);
void init_mindustry_logic_LExecutor$UnitLocateI$Cache(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
