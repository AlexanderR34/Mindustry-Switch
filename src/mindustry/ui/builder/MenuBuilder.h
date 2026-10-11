#ifndef HEADER_mindustry_ui_builder_MenuBuilder
#define HEADER_mindustry_ui_builder_MenuBuilder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_MenuBuilder {
	java_lang_Object parent;
	jref F_title;
	jbool F_hideOnClick;
	jbool F_hideExisting;
	jbool F_fillScreen;
	jlong F_token;
	jint F_id;
	jref F_ui;
} mindustry_ui_builder_MenuBuilder;

extern Class class_mindustry_ui_builder_MenuBuilder;


#define VTABLE_mindustry_ui_builder_MenuBuilder_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_MenuBuilder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_MenuBuilder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_finalize 5
typedef void (*func_mindustry_ui_builder_MenuBuilder_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_notify 6
typedef void (*func_mindustry_ui_builder_MenuBuilder_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_notifyAll 7
typedef void (*func_mindustry_ui_builder_MenuBuilder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_wait 8
typedef void (*func_mindustry_ui_builder_MenuBuilder_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_wait_long 9
typedef void (*func_mindustry_ui_builder_MenuBuilder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_wait_long_int 10
typedef void (*func_mindustry_ui_builder_MenuBuilder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player 11
typedef void (*func_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_showAll 12
typedef void (*func_mindustry_ui_builder_MenuBuilder_showAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String 13
typedef void (*func_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder 14
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder 15
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder 16
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder 17
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder 18
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder 19
typedef jobject (*func_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_ui_builder_MenuBuilder(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_MenuBuilder(jcontext ctx);
void init_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self);
jobject SM_mindustry_ui_builder_MenuBuilder_of_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_builder_MenuBuilder_of_java_lang_String_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject param0);
void M_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_builder_MenuBuilder_showAll(jcontext ctx, jobject self);
void M_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jlong param0);
jobject M_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
