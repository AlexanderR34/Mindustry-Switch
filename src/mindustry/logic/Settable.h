#ifndef HEADER_mindustry_logic_Settable
#define HEADER_mindustry_logic_Settable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_Settable {
	java_lang_Object parent;
} mindustry_logic_Settable;

extern Class class_mindustry_logic_Settable;


#define INDEX_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_double 0
typedef void (*func_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define INDEX_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_java_lang_Object 1
typedef void (*func_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_logic_Settable_setProp_mindustry_ctype_UnlockableContent_double 2
typedef void (*func_mindustry_logic_Settable_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);

void mark_mindustry_logic_Settable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_Settable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
