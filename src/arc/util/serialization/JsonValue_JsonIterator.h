#ifndef HEADER_arc_util_serialization_JsonValue$JsonIterator
#define HEADER_arc_util_serialization_JsonValue$JsonIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_JsonValue$JsonIterator {
	java_lang_Object parent;
	jref F_entry;
	jref F_current;
	jref F_this$0;
} arc_util_serialization_JsonValue$JsonIterator;

extern Class class_arc_util_serialization_JsonValue$JsonIterator;


#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_JsonValue$JsonIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_JsonValue$JsonIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_finalize 5
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_notify 6
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_notifyAll 7
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_wait 8
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_wait_long 9
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_wait_long_int 10
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean 11
typedef jbool (*func_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object 12
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_remove 13
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator 15
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_forEach_java_util_function_Consumer 16
typedef void (*func_arc_util_serialization_JsonValue$JsonIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_spliterator_R_java_util_Spliterator 17
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue 18
typedef jobject (*func_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue)(jcontext ctx, jobject self);

void mark_arc_util_serialization_JsonValue$JsonIterator(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_JsonValue$JsonIterator(jcontext ctx);
void init_arc_util_serialization_JsonValue$JsonIterator_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0);
jbool M_arc_util_serialization_JsonValue$JsonIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_util_serialization_JsonValue$JsonIterator_next_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self);
void M_arc_util_serialization_JsonValue$JsonIterator_remove(jcontext ctx, jobject self);
jobject M_arc_util_serialization_JsonValue$JsonIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_util_serialization_JsonValue$JsonIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
