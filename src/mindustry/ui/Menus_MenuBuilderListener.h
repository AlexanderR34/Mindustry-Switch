#ifndef HEADER_mindustry_ui_Menus$MenuBuilderListener
#define HEADER_mindustry_ui_Menus$MenuBuilderListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Menus$MenuBuilderListener {
	java_lang_Object parent;
} mindustry_ui_Menus$MenuBuilderListener;

extern Class class_mindustry_ui_Menus$MenuBuilderListener;


#define INDEX_mindustry_ui_Menus$MenuBuilderListener_get_mindustry_gen_Player_mindustry_ui_builder_MenuResult 0
typedef void (*func_mindustry_ui_Menus$MenuBuilderListener_get_mindustry_gen_Player_mindustry_ui_builder_MenuResult)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_ui_Menus$MenuBuilderListener(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Menus$MenuBuilderListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
