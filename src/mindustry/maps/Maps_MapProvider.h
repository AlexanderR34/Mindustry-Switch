#ifndef HEADER_mindustry_maps_Maps$MapProvider
#define HEADER_mindustry_maps_Maps$MapProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_Maps$MapProvider {
	java_lang_Object parent;
} mindustry_maps_Maps$MapProvider;

extern Class class_mindustry_maps_Maps$MapProvider;


#define INDEX_mindustry_maps_Maps$MapProvider_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map 0
typedef jobject (*func_mindustry_maps_Maps$MapProvider_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_maps_Maps$MapProvider(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_Maps$MapProvider(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
