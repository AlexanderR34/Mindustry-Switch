#ifndef HEADER_mindustry_core_Platform$FileWriter
#define HEADER_mindustry_core_Platform$FileWriter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Platform$FileWriter {
	java_lang_Object parent;
} mindustry_core_Platform$FileWriter;

extern Class class_mindustry_core_Platform$FileWriter;


#define INDEX_mindustry_core_Platform$FileWriter_write_arc_files_Fi 0
typedef void (*func_mindustry_core_Platform$FileWriter_write_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_Platform$FileWriter(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Platform$FileWriter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
