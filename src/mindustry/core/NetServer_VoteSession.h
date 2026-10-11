#ifndef HEADER_mindustry_core_NetServer$VoteSession
#define HEADER_mindustry_core_NetServer$VoteSession

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_NetServer$VoteSession {
	java_lang_Object parent;
	jref F_target;
	jref F_voted;
	jref F_task;
	jint F_votes;
	jref F_this$0;
} mindustry_core_NetServer$VoteSession;

extern Class class_mindustry_core_NetServer$VoteSession;


#define VTABLE_mindustry_core_NetServer$VoteSession_hashCode_R_int 0
typedef jint (*func_mindustry_core_NetServer$VoteSession_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_NetServer$VoteSession_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer$VoteSession_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_NetServer$VoteSession_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_NetServer$VoteSession_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_NetServer$VoteSession_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_finalize 5
typedef void (*func_mindustry_core_NetServer$VoteSession_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_notify 6
typedef void (*func_mindustry_core_NetServer$VoteSession_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_notifyAll 7
typedef void (*func_mindustry_core_NetServer$VoteSession_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_wait 8
typedef void (*func_mindustry_core_NetServer$VoteSession_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_wait_long 9
typedef void (*func_mindustry_core_NetServer$VoteSession_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_NetServer$VoteSession_wait_long_int 10
typedef void (*func_mindustry_core_NetServer$VoteSession_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int 11
typedef void (*func_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_core_NetServer$VoteSession_checkPass_R_boolean 12
typedef jbool (*func_mindustry_core_NetServer$VoteSession_checkPass_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean 13
typedef jbool (*func_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer 14
typedef void (*func_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_core_NetServer$VoteSession(jobject object, jint mark, jint depth);
void clinit_mindustry_core_NetServer$VoteSession(jcontext ctx);
void init_mindustry_core_NetServer$VoteSession_mindustry_core_NetServer_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_mindustry_core_NetServer$VoteSession_checkPass_R_boolean(jcontext ctx, jobject self);
void SM_mindustry_core_NetServer$VoteSession_lambda$checkPass$1_mindustry_gen_Player(jcontext ctx, jobject param0);
jbool M_mindustry_core_NetServer$VoteSession_lambda$checkPass$0_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer$VoteSession_lambda$new$0_mindustry_gen_Player_mindustry_core_NetServer(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
