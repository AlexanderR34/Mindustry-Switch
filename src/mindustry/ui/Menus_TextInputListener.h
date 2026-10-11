#ifndef HEADER_mindustry_ui_Menus$TextInputListener
#define HEADER_mindustry_ui_Menus$TextInputListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Menus$TextInputListener {
	java_lang_Object parent;
} mindustry_ui_Menus$TextInputListener;

extern Class class_mindustry_ui_Menus$TextInputListener;


#define INDEX_mindustry_ui_Menus$TextInputListener_get_mindustry_gen_Player_java_lang_String 0
typedef void (*func_mindustry_ui_Menus$TextInputListener_get_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_ui_Menus$TextInputListener(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Menus$TextInputListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
