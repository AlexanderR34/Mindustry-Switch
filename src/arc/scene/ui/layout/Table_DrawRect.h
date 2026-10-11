#ifndef HEADER_arc_scene_ui_layout_Table$DrawRect
#define HEADER_arc_scene_ui_layout_Table$DrawRect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_layout_Table$DrawRect {
	java_lang_Object parent;
} arc_scene_ui_layout_Table$DrawRect;

extern Class class_arc_scene_ui_layout_Table$DrawRect;


#define INDEX_arc_scene_ui_layout_Table$DrawRect_draw_float_float_float_float 0
typedef void (*func_arc_scene_ui_layout_Table$DrawRect_draw_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_arc_scene_ui_layout_Table$DrawRect(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_layout_Table$DrawRect(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
