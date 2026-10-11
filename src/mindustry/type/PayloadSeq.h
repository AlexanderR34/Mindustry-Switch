#ifndef HEADER_mindustry_type_PayloadSeq
#define HEADER_mindustry_type_PayloadSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_PayloadSeq {
	java_lang_Object parent;
	jref F_payloads;
	jint F_total;
} mindustry_type_PayloadSeq;

extern Class class_mindustry_type_PayloadSeq;


#define VTABLE_mindustry_type_PayloadSeq_hashCode_R_int 0
typedef jint (*func_mindustry_type_PayloadSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_PayloadSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_PayloadSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_PayloadSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_PayloadSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_finalize 5
typedef void (*func_mindustry_type_PayloadSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_notify 6
typedef void (*func_mindustry_type_PayloadSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_notifyAll 7
typedef void (*func_mindustry_type_PayloadSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_wait 8
typedef void (*func_mindustry_type_PayloadSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_wait_long 9
typedef void (*func_mindustry_type_PayloadSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_PayloadSeq_wait_long_int 10
typedef void (*func_mindustry_type_PayloadSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_PayloadSeq_isEmpty_R_boolean 11
typedef jbool (*func_mindustry_type_PayloadSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_any_R_boolean 12
typedef jbool (*func_mindustry_type_PayloadSeq_any_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_total_R_int 13
typedef jint (*func_mindustry_type_PayloadSeq_total_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent 14
typedef void (*func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int 15
typedef void (*func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent 16
typedef void (*func_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int 17
typedef void (*func_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_PayloadSeq_remove_arc_struct_Seq 18
typedef void (*func_mindustry_type_PayloadSeq_remove_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq 19
typedef jobject (*func_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_clear 20
typedef void (*func_mindustry_type_PayloadSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int 21
typedef jint (*func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean 22
typedef jbool (*func_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean 23
typedef jbool (*func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean 24
typedef jbool (*func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean 25
typedef jbool (*func_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_write_arc_util_io_Writes 26
typedef void (*func_mindustry_type_PayloadSeq_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_read_arc_util_io_Reads 27
typedef void (*func_mindustry_type_PayloadSeq_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean 28
typedef jbool (*func_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack 29
typedef void (*func_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_type_PayloadSeq(jobject object, jint mark, jint depth);
void clinit_mindustry_type_PayloadSeq(jcontext ctx);
void init_mindustry_type_PayloadSeq(jcontext ctx, jobject self);
jbool M_mindustry_type_PayloadSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_PayloadSeq_any_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_type_PayloadSeq_total_R_int(jcontext ctx, jobject self);
void M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_type_PayloadSeq_remove_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_PayloadSeq_removeAll_arc_func_Boolf_R_mindustry_type_PayloadSeq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_PayloadSeq_clear(jcontext ctx, jobject self);
jint M_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_PayloadSeq_contains_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_PayloadSeq_contains_mindustry_type_PayloadStack_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_PayloadSeq_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_PayloadSeq_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_PayloadSeq_lambda$contains$0_mindustry_type_PayloadStack_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_PayloadSeq_lambda$remove$0_mindustry_type_PayloadStack(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
