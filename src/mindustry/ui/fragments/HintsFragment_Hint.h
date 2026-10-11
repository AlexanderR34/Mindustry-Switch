#ifndef HEADER_mindustry_ui_fragments_HintsFragment$Hint
#define HEADER_mindustry_ui_fragments_HintsFragment$Hint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_HintsFragment$Hint {
	java_lang_Object parent;
} mindustry_ui_fragments_HintsFragment$Hint;

extern Class class_mindustry_ui_fragments_HintsFragment$Hint;

extern jint SF_mindustry_ui_fragments_HintsFragment$Hint_visibleDesktop;
extern jint SF_mindustry_ui_fragments_HintsFragment$Hint_visibleMobile;
extern jint SF_mindustry_ui_fragments_HintsFragment$Hint_visibleAll;

#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String 0
typedef jobject (*func_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_text_R_java_lang_String 1
typedef jobject (*func_mindustry_ui_fragments_HintsFragment$Hint_text_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean 2
typedef jbool (*func_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean 3
typedef jbool (*func_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_order_R_int 4
typedef jint (*func_mindustry_ui_fragments_HintsFragment$Hint_order_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_valid_R_boolean 5
typedef jbool (*func_mindustry_ui_fragments_HintsFragment$Hint_valid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_finish 6
typedef void (*func_mindustry_ui_fragments_HintsFragment$Hint_finish)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean 7
typedef jbool (*func_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_ui_fragments_HintsFragment$Hint(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_HintsFragment$Hint(jcontext ctx);
void M_mindustry_ui_fragments_HintsFragment$Hint_finish(jcontext ctx, jobject self);
jbool M_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
