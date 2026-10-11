#ifndef HEADER_mindustry_logic_LWritable
#define HEADER_mindustry_logic_LWritable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LWritable {
	java_lang_Object parent;
} mindustry_logic_LWritable;

extern Class class_mindustry_logic_LWritable;


#define INDEX_mindustry_logic_LWritable_writable_mindustry_logic_LExecutor_R_boolean 0
typedef jbool (*func_mindustry_logic_LWritable_writable_mindustry_logic_LExecutor_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_logic_LWritable_write_mindustry_logic_LVar_mindustry_logic_LVar 1
typedef void (*func_mindustry_logic_LWritable_write_mindustry_logic_LVar_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_logic_LWritable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LWritable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
