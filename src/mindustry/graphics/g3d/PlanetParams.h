#ifndef HEADER_mindustry_graphics_g3d_PlanetParams
#define HEADER_mindustry_graphics_g3d_PlanetParams

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_PlanetParams {
	java_lang_Object parent;
	jref F_camPos;
	jref F_otherCamPos;
	jfloat F_otherCamAlpha;
	jref F_camUp;
	jref F_camDir;
	jref F_planet;
	jfloat F_zoom;
	jfloat F_uiAlpha;
	jbool F_drawUi;
	jbool F_drawSkybox;
	jref F_renderer;
	jint F_viewW;
	jint F_viewH;
	jbool F_alwaysDrawAtmosphere;
} mindustry_graphics_g3d_PlanetParams;

extern Class class_mindustry_graphics_g3d_PlanetParams;


#define VTABLE_mindustry_graphics_g3d_PlanetParams_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_PlanetParams_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_PlanetParams_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_PlanetParams_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_PlanetParams_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_PlanetParams_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_finalize 5
typedef void (*func_mindustry_graphics_g3d_PlanetParams_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_notify 6
typedef void (*func_mindustry_graphics_g3d_PlanetParams_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_PlanetParams_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_wait 8
typedef void (*func_mindustry_graphics_g3d_PlanetParams_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_wait_long 9
typedef void (*func_mindustry_graphics_g3d_PlanetParams_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_PlanetParams_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_PlanetParams_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_g3d_PlanetParams(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_PlanetParams(jcontext ctx);
void init_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
