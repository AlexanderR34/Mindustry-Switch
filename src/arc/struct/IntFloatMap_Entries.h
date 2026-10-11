#ifndef HEADER_arc_struct_IntFloatMap$Entries
#define HEADER_arc_struct_IntFloatMap$Entries

#include "Clearwing.h"
#include "arc/struct/IntFloatMap_MapIterator.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntFloatMap$Entries {
	arc_struct_IntFloatMap$MapIterator parent;
	jref F_entry;
} arc_struct_IntFloatMap$Entries;

extern Class class_arc_struct_IntFloatMap$Entries;


#define VTABLE_arc_struct_IntFloatMap$Entries_hashCode_R_int 0
typedef jint (*func_arc_struct_IntFloatMap$Entries_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntFloatMap$Entries_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap$Entries_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntFloatMap$Entries_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntFloatMap$Entries_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntFloatMap$Entries_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_finalize 5
typedef void (*func_arc_struct_IntFloatMap$Entries_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_notify 6
typedef void (*func_arc_struct_IntFloatMap$Entries_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_notifyAll 7
typedef void (*func_arc_struct_IntFloatMap$Entries_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_wait 8
typedef void (*func_arc_struct_IntFloatMap$Entries_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_wait_long 9
typedef void (*func_arc_struct_IntFloatMap$Entries_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntFloatMap$Entries_wait_long_int 10
typedef void (*func_arc_struct_IntFloatMap$Entries_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntFloatMap$Entries_reset 11
typedef void (*func_arc_struct_IntFloatMap$Entries_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_findNextIndex 12
typedef void (*func_arc_struct_IntFloatMap$Entries_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_remove 13
typedef void (*func_arc_struct_IntFloatMap$Entries_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_iterator_R_java_util_Iterator 14
typedef jobject (*func_arc_struct_IntFloatMap$Entries_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_forEach_java_util_function_Consumer 15
typedef void (*func_arc_struct_IntFloatMap$Entries_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap$Entries_spliterator_R_java_util_Spliterator 16
typedef jobject (*func_arc_struct_IntFloatMap$Entries_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_hasNext_R_boolean 17
typedef jbool (*func_arc_struct_IntFloatMap$Entries_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_next_R_java_lang_Object 18
typedef jobject (*func_arc_struct_IntFloatMap$Entries_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$Entries_forEachRemaining_java_util_function_Consumer 19
typedef void (*func_arc_struct_IntFloatMap$Entries_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap$Entries_next_R_arc_struct_IntFloatMap$Entry 20
typedef jobject (*func_arc_struct_IntFloatMap$Entries_next_R_arc_struct_IntFloatMap$Entry)(jcontext ctx, jobject self);

void mark_arc_struct_IntFloatMap$Entries(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntFloatMap$Entries(jcontext ctx);
void init_arc_struct_IntFloatMap$Entries_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_IntFloatMap$Entries_next_R_arc_struct_IntFloatMap$Entry(jcontext ctx, jobject self);
jbool M_arc_struct_IntFloatMap$Entries_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_IntFloatMap$Entries_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
void M_arc_struct_IntFloatMap$Entries_remove(jcontext ctx, jobject self);
void M_arc_struct_IntFloatMap$Entries_reset(jcontext ctx, jobject self);
jobject M_arc_struct_IntFloatMap$Entries_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
