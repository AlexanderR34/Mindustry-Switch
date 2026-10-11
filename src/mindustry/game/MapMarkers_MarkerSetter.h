#ifndef HEADER_mindustry_game_MapMarkers$MarkerSetter
#define HEADER_mindustry_game_MapMarkers$MarkerSetter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_MapMarkers$MarkerSetter {
	java_lang_Object parent;
} mindustry_game_MapMarkers$MarkerSetter;

extern Class class_mindustry_game_MapMarkers$MarkerSetter;


#define INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int 0
typedef void (*func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_game_MapMarkers$MarkerSetter(jobject object, jint mark, jint depth);
void clinit_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
