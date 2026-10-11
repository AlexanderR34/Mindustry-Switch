#ifndef HEADER_java_nio_channels_Selector
#define HEADER_java_nio_channels_Selector

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Selector {
	java_lang_Object parent;
} java_nio_channels_Selector;

extern Class class_java_nio_channels_Selector;


#define VTABLE_java_nio_channels_Selector_hashCode_R_int 0
typedef jint (*func_java_nio_channels_Selector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_Selector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Selector_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_Selector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_Selector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_Selector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_finalize 5
typedef void (*func_java_nio_channels_Selector_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_notify 6
typedef void (*func_java_nio_channels_Selector_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_notifyAll 7
typedef void (*func_java_nio_channels_Selector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_wait 8
typedef void (*func_java_nio_channels_Selector_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_wait_long 9
typedef void (*func_java_nio_channels_Selector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Selector_wait_long_int 10
typedef void (*func_java_nio_channels_Selector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_Selector_close 11
typedef void (*func_java_nio_channels_Selector_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_isOpen_R_boolean 12
typedef jbool (*func_java_nio_channels_Selector_isOpen_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_provider_R_java_nio_channels_spi_SelectorProvider 13
typedef jobject (*func_java_nio_channels_Selector_provider_R_java_nio_channels_spi_SelectorProvider)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_keys_R_java_util_Set 14
typedef jobject (*func_java_nio_channels_Selector_keys_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_selectedKeys_R_java_util_Set 15
typedef jobject (*func_java_nio_channels_Selector_selectedKeys_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_selectNow_R_int 16
typedef jint (*func_java_nio_channels_Selector_selectNow_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_select_long_R_int 17
typedef jint (*func_java_nio_channels_Selector_select_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Selector_select_R_int 18
typedef jint (*func_java_nio_channels_Selector_select_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int 19
typedef jint (*func_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_nio_channels_Selector_select_java_util_function_Consumer_R_int 20
typedef jint (*func_java_nio_channels_Selector_select_java_util_function_Consumer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int 21
typedef jint (*func_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int 22
typedef jint (*func_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_nio_channels_Selector_wakeup_R_java_nio_channels_Selector 23
typedef jobject (*func_java_nio_channels_Selector_wakeup_R_java_nio_channels_Selector)(jcontext ctx, jobject self);

void mark_java_nio_channels_Selector(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Selector(jcontext ctx);
void init_java_nio_channels_Selector(jcontext ctx, jobject self);
jobject SM_java_nio_channels_Selector_open_R_java_nio_channels_Selector(jcontext ctx);
jint M_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int(jcontext ctx, jobject self, jobject param0, jlong param1);
jint M_java_nio_channels_Selector_select_java_util_function_Consumer_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int(jcontext ctx, jobject self, jobject param0, jlong param1);

#ifdef __cplusplus
}
#endif

#endif
