#ifndef HEADER_mindustry_io_SaveReadState
#define HEADER_mindustry_io_SaveReadState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_SaveReadState {
	java_lang_Object parent;
	jref F_context;
	jbool F_preview;
	jref F_ruleString;
	jref F_allBuildings;
} mindustry_io_SaveReadState;

extern Class class_mindustry_io_SaveReadState;


#define VTABLE_mindustry_io_SaveReadState_hashCode_R_int 0
typedef jint (*func_mindustry_io_SaveReadState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_SaveReadState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveReadState_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_SaveReadState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_SaveReadState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_SaveReadState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_finalize 5
typedef void (*func_mindustry_io_SaveReadState_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_notify 6
typedef void (*func_mindustry_io_SaveReadState_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_notifyAll 7
typedef void (*func_mindustry_io_SaveReadState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_wait 8
typedef void (*func_mindustry_io_SaveReadState_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveReadState_wait_long 9
typedef void (*func_mindustry_io_SaveReadState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_SaveReadState_wait_long_int 10
typedef void (*func_mindustry_io_SaveReadState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_io_SaveReadState(jobject object, jint mark, jint depth);
void clinit_mindustry_io_SaveReadState(jcontext ctx);
void init_mindustry_io_SaveReadState_mindustry_world_WorldContext(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
