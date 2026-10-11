#ifndef HEADER_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct
#define HEADER_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct {
	java_lang_Object parent;
	jint F_type;
	jint F_x;
	jint F_y;
	jint F_p1;
	jint F_p2;
	jint F_p3;
	jint F_p4;
} mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct;

extern Class class_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct;


#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_finalize 5
typedef void (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_notify 6
typedef void (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_notifyAll 7
typedef void (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_wait 8
typedef void (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_wait_long 9
typedef void (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_wait_long_int 10
typedef void (*func_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(jcontext ctx);
void init_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
