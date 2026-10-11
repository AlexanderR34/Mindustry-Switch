#ifndef HEADER_java_io_FileFilter
#define HEADER_java_io_FileFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_FileFilter {
	java_lang_Object parent;
} java_io_FileFilter;

extern Class class_java_io_FileFilter;


#define INDEX_java_io_FileFilter_accept_java_io_File_R_boolean 0
typedef jbool (*func_java_io_FileFilter_accept_java_io_File_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_java_io_FileFilter(jobject object, jint mark, jint depth);
void clinit_java_io_FileFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
