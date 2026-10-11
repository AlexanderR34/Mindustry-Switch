#ifndef HEADER_arc_util_serialization_JsonWriter$JsonObject
#define HEADER_arc_util_serialization_JsonWriter$JsonObject

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_JsonWriter$JsonObject {
	java_lang_Object parent;
	jbool F_array;
	jbool F_needsComma;
	jref F_this$0;
} arc_util_serialization_JsonWriter$JsonObject;

extern Class class_arc_util_serialization_JsonWriter$JsonObject;


#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_JsonWriter$JsonObject_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_JsonWriter$JsonObject_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_JsonWriter$JsonObject_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_JsonWriter$JsonObject_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_JsonWriter$JsonObject_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_finalize 5
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_notify 6
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_notifyAll 7
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_wait 8
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_wait_long 9
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_wait_long_int 10
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_JsonWriter$JsonObject_close 11
typedef void (*func_arc_util_serialization_JsonWriter$JsonObject_close)(jcontext ctx, jobject self);

void mark_arc_util_serialization_JsonWriter$JsonObject(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_JsonWriter$JsonObject(jcontext ctx);
void init_arc_util_serialization_JsonWriter$JsonObject_arc_util_serialization_JsonWriter_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_util_serialization_JsonWriter$JsonObject_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
