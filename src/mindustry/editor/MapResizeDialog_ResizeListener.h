#ifndef HEADER_mindustry_editor_MapResizeDialog$ResizeListener
#define HEADER_mindustry_editor_MapResizeDialog$ResizeListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_MapResizeDialog$ResizeListener {
	java_lang_Object parent;
} mindustry_editor_MapResizeDialog$ResizeListener;

extern Class class_mindustry_editor_MapResizeDialog$ResizeListener;


#define INDEX_mindustry_editor_MapResizeDialog$ResizeListener_get_int_int_int_int 0
typedef void (*func_mindustry_editor_MapResizeDialog$ResizeListener_get_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_mindustry_editor_MapResizeDialog$ResizeListener(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_MapResizeDialog$ResizeListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
