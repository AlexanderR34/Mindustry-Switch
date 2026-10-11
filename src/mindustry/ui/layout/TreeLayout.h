#ifndef HEADER_mindustry_ui_layout_TreeLayout
#define HEADER_mindustry_ui_layout_TreeLayout

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_layout_TreeLayout {
	java_lang_Object parent;
} mindustry_ui_layout_TreeLayout;

extern Class class_mindustry_ui_layout_TreeLayout;


#define INDEX_mindustry_ui_layout_TreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode 0
typedef void (*func_mindustry_ui_layout_TreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_layout_TreeLayout(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_layout_TreeLayout(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
