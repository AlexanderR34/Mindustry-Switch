#ifndef HEADER_mindustry_logic_LDrawable
#define HEADER_mindustry_logic_LDrawable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LDrawable {
	java_lang_Object parent;
} mindustry_logic_LDrawable;

extern Class class_mindustry_logic_LDrawable;


#define INDEX_mindustry_logic_LDrawable_drawable_mindustry_logic_LExecutor_R_boolean 0
typedef jbool (*func_mindustry_logic_LDrawable_drawable_mindustry_logic_LExecutor_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_logic_LDrawable_draw_arc_struct_LongSeq 1
typedef void (*func_mindustry_logic_LDrawable_draw_arc_struct_LongSeq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LDrawable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LDrawable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
