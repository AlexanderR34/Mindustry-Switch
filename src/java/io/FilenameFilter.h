#ifndef HEADER_java_io_FilenameFilter
#define HEADER_java_io_FilenameFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_FilenameFilter {
	java_lang_Object parent;
} java_io_FilenameFilter;

extern Class class_java_io_FilenameFilter;


#define INDEX_java_io_FilenameFilter_accept_java_io_File_java_lang_String_R_boolean 0
typedef jbool (*func_java_io_FilenameFilter_accept_java_io_File_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_io_FilenameFilter(jobject object, jint mark, jint depth);
void clinit_java_io_FilenameFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
