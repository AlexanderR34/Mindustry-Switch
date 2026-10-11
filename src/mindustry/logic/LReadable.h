#ifndef HEADER_mindustry_logic_LReadable
#define HEADER_mindustry_logic_LReadable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LReadable {
	java_lang_Object parent;
} mindustry_logic_LReadable;

extern Class class_mindustry_logic_LReadable;


#define INDEX_mindustry_logic_LReadable_readable_mindustry_logic_LExecutor_R_boolean 0
typedef jbool (*func_mindustry_logic_LReadable_readable_mindustry_logic_LExecutor_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_logic_LReadable_read_mindustry_logic_LVar_mindustry_logic_LVar 1
typedef void (*func_mindustry_logic_LReadable_read_mindustry_logic_LVar_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_logic_LReadable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LReadable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
