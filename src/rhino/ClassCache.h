#ifndef HEADER_rhino_ClassCache
#define HEADER_rhino_ClassCache

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ClassCache {
	java_lang_Object parent;
	volatile jbool F_cachingIsEnabled;
	jref F_classTable;
	jref F_classAdapterCache;
	jref F_interfaceAdapterCache;
	jint F_generatedClassSerial;
	jref F_associatedScope;
} rhino_ClassCache;

extern Class class_rhino_ClassCache;

extern jobject SF_rhino_ClassCache_AKEY;

#define VTABLE_rhino_ClassCache_hashCode_R_int 0
typedef jint (*func_rhino_ClassCache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ClassCache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ClassCache_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ClassCache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ClassCache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ClassCache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_finalize 5
typedef void (*func_rhino_ClassCache_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_notify 6
typedef void (*func_rhino_ClassCache_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_notifyAll 7
typedef void (*func_rhino_ClassCache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_wait 8
typedef void (*func_rhino_ClassCache_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_wait_long 9
typedef void (*func_rhino_ClassCache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ClassCache_wait_long_int 10
typedef void (*func_rhino_ClassCache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean 11
typedef jbool (*func_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ClassCache_clearCaches 12
typedef void (*func_rhino_ClassCache_clearCaches)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_isCachingEnabled_R_boolean 13
typedef jbool (*func_rhino_ClassCache_isCachingEnabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_setCachingEnabled_boolean 14
typedef void (*func_rhino_ClassCache_setCachingEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ClassCache_getClassCacheMap_R_java_util_Map 15
typedef jobject (*func_rhino_ClassCache_getClassCacheMap_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map 16
typedef jobject (*func_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_newClassSerialNumber_R_int 17
typedef jint (*func_rhino_ClassCache_newClassSerialNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object 18
typedef jobject (*func_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object 19
typedef void (*func_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable 20
typedef jobject (*func_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable)(jcontext ctx, jobject self);

void mark_rhino_ClassCache(jobject object, jint mark, jint depth);
void clinit_rhino_ClassCache(jcontext ctx);
void init_rhino_ClassCache(jcontext ctx, jobject self);
jobject SM_rhino_ClassCache_get_rhino_Scriptable_R_rhino_ClassCache(jcontext ctx, jobject param0);
jbool M_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_rhino_ClassCache_clearCaches(jcontext ctx, jobject self);
jbool M_rhino_ClassCache_isCachingEnabled_R_boolean(jcontext ctx, jobject self);
void M_rhino_ClassCache_setCachingEnabled_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_rhino_ClassCache_getClassCacheMap_R_java_util_Map(jcontext ctx, jobject self);
jobject M_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map(jcontext ctx, jobject self);
jint M_rhino_ClassCache_newClassSerialNumber_R_int(jcontext ctx, jobject self);
jobject M_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
