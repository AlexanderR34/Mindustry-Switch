#ifndef HEADER_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1
#define HEADER_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1

#include "Clearwing.h"
#include "arc/Input_TextInput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 {
	arc_Input$TextInput parent;
	jref F_val$contents;
	jref F_this$1;
} mindustry_world_blocks_logic_MessageBlock$MessageBuild$1;

extern Class class_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1;


#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_finalize 5
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_notify 6
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_notifyAll 7
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_wait 8
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_wait_long 9
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_wait_long_int 10
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String 11
typedef void (*func_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1(jcontext ctx);
void init_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_mindustry_world_blocks_logic_MessageBlock$MessageBuild_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
