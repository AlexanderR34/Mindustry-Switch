#ifndef HEADER_rhino_Node$PropListItem
#define HEADER_rhino_Node$PropListItem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Node$PropListItem {
	java_lang_Object parent;
	jref F_next;
	jint F_type;
	jint F_intValue;
	jref F_objectValue;
} rhino_Node$PropListItem;

extern Class class_rhino_Node$PropListItem;


#define VTABLE_rhino_Node$PropListItem_hashCode_R_int 0
typedef jint (*func_rhino_Node$PropListItem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Node$PropListItem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Node$PropListItem_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Node$PropListItem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Node$PropListItem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Node$PropListItem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_finalize 5
typedef void (*func_rhino_Node$PropListItem_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_notify 6
typedef void (*func_rhino_Node$PropListItem_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_notifyAll 7
typedef void (*func_rhino_Node$PropListItem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_wait 8
typedef void (*func_rhino_Node$PropListItem_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$PropListItem_wait_long 9
typedef void (*func_rhino_Node$PropListItem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Node$PropListItem_wait_long_int 10
typedef void (*func_rhino_Node$PropListItem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Node$PropListItem(jobject object, jint mark, jint depth);
void clinit_rhino_Node$PropListItem(jcontext ctx);
void init_rhino_Node$PropListItem(jcontext ctx, jobject self);
void init_rhino_Node$PropListItem_rhino_Node$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
