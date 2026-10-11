#ifndef HEADER_mindustry_world_blocks_logic_LogicBlock$LogicLink
#define HEADER_mindustry_world_blocks_logic_LogicBlock$LogicLink

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_logic_LogicBlock$LogicLink {
	java_lang_Object parent;
	jbool F_valid;
	jint F_x;
	jint F_y;
	jref F_name;
	jref F_lastBuild;
	jref F_logicVar;
} mindustry_world_blocks_logic_LogicBlock$LogicLink;

extern Class class_mindustry_world_blocks_logic_LogicBlock$LogicLink;


#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_finalize 5
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_notify 6
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_notifyAll 7
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_wait 8
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_wait_long 9
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_wait_long_int 10
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object 11
typedef void (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink 12
typedef jobject (*func_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_logic_LogicBlock$LogicLink(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(jcontext ctx);
void init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3);
void M_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
