#ifndef HEADER_java_nio_file_PathMatcher
#define HEADER_java_nio_file_PathMatcher

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_PathMatcher {
	java_lang_Object parent;
} java_nio_file_PathMatcher;

extern Class class_java_nio_file_PathMatcher;


#define INDEX_java_nio_file_PathMatcher_matches_java_nio_file_Path_R_boolean 0
typedef jbool (*func_java_nio_file_PathMatcher_matches_java_nio_file_Path_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_java_nio_file_PathMatcher(jobject object, jint mark, jint depth);
void clinit_java_nio_file_PathMatcher(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
