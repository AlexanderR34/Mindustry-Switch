#ifndef HEADER_mindustry_editor_data_AssetView
#define HEADER_mindustry_editor_data_AssetView

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_data_AssetView {
	java_lang_Object parent;
} mindustry_editor_data_AssetView;

extern Class class_mindustry_editor_data_AssetView;


#define INDEX_mindustry_editor_data_AssetView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table 0
typedef void (*func_mindustry_editor_data_AssetView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_editor_data_AssetView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table 1
typedef void (*func_mindustry_editor_data_AssetView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_editor_data_AssetView(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_data_AssetView(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
