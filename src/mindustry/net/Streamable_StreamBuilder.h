#ifndef HEADER_mindustry_net_Streamable$StreamBuilder
#define HEADER_mindustry_net_Streamable$StreamBuilder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Streamable$StreamBuilder {
	java_lang_Object parent;
	jint F_id;
	jbyte F_type;
	jint F_total;
	jref F_stream;
	jbool F_incremental;
	jref F_incrementalStream;
	jint F_received;
} mindustry_net_Streamable$StreamBuilder;

extern Class class_mindustry_net_Streamable$StreamBuilder;


#define VTABLE_mindustry_net_Streamable$StreamBuilder_hashCode_R_int 0
typedef jint (*func_mindustry_net_Streamable$StreamBuilder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Streamable$StreamBuilder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Streamable$StreamBuilder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Streamable$StreamBuilder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Streamable$StreamBuilder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_finalize 5
typedef void (*func_mindustry_net_Streamable$StreamBuilder_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_notify 6
typedef void (*func_mindustry_net_Streamable$StreamBuilder_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_notifyAll 7
typedef void (*func_mindustry_net_Streamable$StreamBuilder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_wait 8
typedef void (*func_mindustry_net_Streamable$StreamBuilder_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_wait_long 9
typedef void (*func_mindustry_net_Streamable$StreamBuilder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_wait_long_int 10
typedef void (*func_mindustry_net_Streamable$StreamBuilder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_progress_R_float 11
typedef jfloat (*func_mindustry_net_Streamable$StreamBuilder_progress_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_add_Array1_byte 12
typedef void (*func_mindustry_net_Streamable$StreamBuilder_add_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable 13
typedef jobject (*func_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean 14
typedef jbool (*func_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$StreamBuilder_close 15
typedef void (*func_mindustry_net_Streamable$StreamBuilder_close)(jcontext ctx, jobject self);

void mark_mindustry_net_Streamable$StreamBuilder(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Streamable$StreamBuilder(jcontext ctx);
void init_mindustry_net_Streamable$StreamBuilder_mindustry_net_Packets$StreamBegin_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jfloat M_mindustry_net_Streamable$StreamBuilder_progress_R_float(jcontext ctx, jobject self);
void M_mindustry_net_Streamable$StreamBuilder_add_Array1_byte(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable(jcontext ctx, jobject self);
jbool M_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean(jcontext ctx, jobject self);
void M_mindustry_net_Streamable$StreamBuilder_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
