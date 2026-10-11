#ifndef HEADER_java_util_TreeMap$TreeMapEntry
#define HEADER_java_util_TreeMap$TreeMapEntry

#include "Clearwing.h"
#include "java/util/MapEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$TreeMapEntry {
	java_util_MapEntry parent;
	jref F_node;
	jint F_index;
} java_util_TreeMap$TreeMapEntry;

extern Class class_java_util_TreeMap$TreeMapEntry;


#define VTABLE_java_util_TreeMap$TreeMapEntry_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$TreeMapEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$TreeMapEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$TreeMapEntry_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$TreeMapEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$TreeMapEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$TreeMapEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_finalize 5
typedef void (*func_java_util_TreeMap$TreeMapEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_notify 6
typedef void (*func_java_util_TreeMap$TreeMapEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_notifyAll 7
typedef void (*func_java_util_TreeMap$TreeMapEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_wait 8
typedef void (*func_java_util_TreeMap$TreeMapEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_wait_long 9
typedef void (*func_java_util_TreeMap$TreeMapEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$TreeMapEntry_wait_long_int 10
typedef void (*func_java_util_TreeMap$TreeMapEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$TreeMapEntry_getKey_R_java_lang_Object 11
typedef jobject (*func_java_util_TreeMap$TreeMapEntry_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_getValue_R_java_lang_Object 12
typedef jobject (*func_java_util_TreeMap$TreeMapEntry_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$TreeMapEntry_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_java_util_TreeMap$TreeMapEntry_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_TreeMap$TreeMapEntry(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$TreeMapEntry(jcontext ctx);
void init_java_util_TreeMap$TreeMapEntry_java_lang_Object_java_lang_Object_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_java_util_TreeMap$TreeMapEntry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
