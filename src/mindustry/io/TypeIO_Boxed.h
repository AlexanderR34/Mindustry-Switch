#ifndef HEADER_mindustry_io_TypeIO$Boxed
#define HEADER_mindustry_io_TypeIO$Boxed

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_TypeIO$Boxed {
	java_lang_Object parent;
} mindustry_io_TypeIO$Boxed;

extern Class class_mindustry_io_TypeIO$Boxed;


#define INDEX_mindustry_io_TypeIO$Boxed_unbox_R_java_lang_Object 0
typedef jobject (*func_mindustry_io_TypeIO$Boxed_unbox_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_mindustry_io_TypeIO$Boxed(jobject object, jint mark, jint depth);
void clinit_mindustry_io_TypeIO$Boxed(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
