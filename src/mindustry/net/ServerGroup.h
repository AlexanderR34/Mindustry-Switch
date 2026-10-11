#ifndef HEADER_mindustry_net_ServerGroup
#define HEADER_mindustry_net_ServerGroup

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ServerGroup {
	java_lang_Object parent;
	jref F_name;
	jref F_addresses;
	jbool F_prioritized;
} mindustry_net_ServerGroup;

extern Class class_mindustry_net_ServerGroup;


#define VTABLE_mindustry_net_ServerGroup_hashCode_R_int 0
typedef jint (*func_mindustry_net_ServerGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ServerGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ServerGroup_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ServerGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ServerGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ServerGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_finalize 5
typedef void (*func_mindustry_net_ServerGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_notify 6
typedef void (*func_mindustry_net_ServerGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_notifyAll 7
typedef void (*func_mindustry_net_ServerGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_wait 8
typedef void (*func_mindustry_net_ServerGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_wait_long 9
typedef void (*func_mindustry_net_ServerGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ServerGroup_wait_long_int 10
typedef void (*func_mindustry_net_ServerGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ServerGroup_hidden_R_boolean 11
typedef jbool (*func_mindustry_net_ServerGroup_hidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_favorite_R_boolean 12
typedef jbool (*func_mindustry_net_ServerGroup_favorite_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ServerGroup_setHidden_boolean 13
typedef void (*func_mindustry_net_ServerGroup_setHidden_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_ServerGroup_setFavorite_boolean 14
typedef void (*func_mindustry_net_ServerGroup_setFavorite_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_ServerGroup_key_R_java_lang_String 15
typedef jobject (*func_mindustry_net_ServerGroup_key_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_net_ServerGroup(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ServerGroup(jcontext ctx);
void init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_net_ServerGroup(jcontext ctx, jobject self);
jbool M_mindustry_net_ServerGroup_hidden_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_net_ServerGroup_favorite_R_boolean(jcontext ctx, jobject self);
void M_mindustry_net_ServerGroup_setHidden_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_net_ServerGroup_setFavorite_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_net_ServerGroup_key_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
