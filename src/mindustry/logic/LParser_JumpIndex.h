#ifndef HEADER_mindustry_logic_LParser$JumpIndex
#define HEADER_mindustry_logic_LParser$JumpIndex

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LParser$JumpIndex {
	java_lang_Object parent;
	jref F_jump;
	jref F_location;
} mindustry_logic_LParser$JumpIndex;

extern Class class_mindustry_logic_LParser$JumpIndex;


#define VTABLE_mindustry_logic_LParser$JumpIndex_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LParser$JumpIndex_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LParser$JumpIndex_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LParser$JumpIndex_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LParser$JumpIndex_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LParser$JumpIndex_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LParser$JumpIndex_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_finalize 5
typedef void (*func_mindustry_logic_LParser$JumpIndex_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_notify 6
typedef void (*func_mindustry_logic_LParser$JumpIndex_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_notifyAll 7
typedef void (*func_mindustry_logic_LParser$JumpIndex_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_wait 8
typedef void (*func_mindustry_logic_LParser$JumpIndex_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LParser$JumpIndex_wait_long 9
typedef void (*func_mindustry_logic_LParser$JumpIndex_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LParser$JumpIndex_wait_long_int 10
typedef void (*func_mindustry_logic_LParser$JumpIndex_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_logic_LParser$JumpIndex(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LParser$JumpIndex(jcontext ctx);
void init_mindustry_logic_LParser$JumpIndex_mindustry_logic_LStatements$JumpStatement_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
