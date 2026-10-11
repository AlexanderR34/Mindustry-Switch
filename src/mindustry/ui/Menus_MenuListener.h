#ifndef HEADER_mindustry_ui_Menus$MenuListener
#define HEADER_mindustry_ui_Menus$MenuListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Menus$MenuListener {
	java_lang_Object parent;
} mindustry_ui_Menus$MenuListener;

extern Class class_mindustry_ui_Menus$MenuListener;


#define INDEX_mindustry_ui_Menus$MenuListener_get_mindustry_gen_Player_int 0
typedef void (*func_mindustry_ui_Menus$MenuListener_get_mindustry_gen_Player_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_ui_Menus$MenuListener(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Menus$MenuListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
