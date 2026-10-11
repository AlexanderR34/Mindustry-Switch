#ifndef HEADER_mindustry_ui_builder_UiDslWriter
#define HEADER_mindustry_ui_builder_UiDslWriter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_UiDslWriter {
	java_lang_Object parent;
} mindustry_ui_builder_UiDslWriter;

extern Class class_mindustry_ui_builder_UiDslWriter;


#define VTABLE_mindustry_ui_builder_UiDslWriter_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_UiDslWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_UiDslWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiDslWriter_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_UiDslWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_UiDslWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_UiDslWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_finalize 5
typedef void (*func_mindustry_ui_builder_UiDslWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_notify 6
typedef void (*func_mindustry_ui_builder_UiDslWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_notifyAll 7
typedef void (*func_mindustry_ui_builder_UiDslWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_wait 8
typedef void (*func_mindustry_ui_builder_UiDslWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiDslWriter_wait_long 9
typedef void (*func_mindustry_ui_builder_UiDslWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_UiDslWriter_wait_long_int 10
typedef void (*func_mindustry_ui_builder_UiDslWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_builder_UiDslWriter(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_UiDslWriter(jcontext ctx);
void init_mindustry_ui_builder_UiDslWriter(jcontext ctx, jobject self);
jobject SM_mindustry_ui_builder_UiDslWriter_write_mindustry_ui_builder_UiBuilder$NodeBuilder_R_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_builder_UiDslWriter_writeEntries_java_lang_StringBuilder_arc_struct_Seq_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_mindustry_ui_builder_UiDslWriter_writeChildNode_java_lang_StringBuilder_mindustry_ui_builder_UiBuilder$NodeBuilder_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_mindustry_ui_builder_UiDslWriter_shorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_builder_UiDslWriter_formatValue_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_builder_UiDslWriter_formatFloat_float_R_java_lang_String(jcontext ctx, jfloat param0);
jbool SM_mindustry_ui_builder_UiDslWriter_needsQuotes_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_builder_UiDslWriter_quote_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
