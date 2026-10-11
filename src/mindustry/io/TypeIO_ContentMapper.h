#ifndef HEADER_mindustry_io_TypeIO$ContentMapper
#define HEADER_mindustry_io_TypeIO$ContentMapper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_TypeIO$ContentMapper {
	java_lang_Object parent;
} mindustry_io_TypeIO$ContentMapper;

extern Class class_mindustry_io_TypeIO$ContentMapper;


#define INDEX_mindustry_io_TypeIO$ContentMapper_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content 0
typedef jobject (*func_mindustry_io_TypeIO$ContentMapper_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_io_TypeIO$ContentMapper(jobject object, jint mark, jint depth);
void clinit_mindustry_io_TypeIO$ContentMapper(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
