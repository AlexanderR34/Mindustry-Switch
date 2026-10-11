#ifndef HEADER_regexodus_MatchIterator
#define HEADER_regexodus_MatchIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_MatchIterator {
	java_lang_Object parent;
} regexodus_MatchIterator;

extern Class class_regexodus_MatchIterator;


#define INDEX_regexodus_MatchIterator_count_R_int 0
typedef jint (*func_regexodus_MatchIterator_count_R_int)(jcontext ctx, jobject self);
#define INDEX_regexodus_MatchIterator_asList_R_java_util_ArrayList 1
typedef jobject (*func_regexodus_MatchIterator_asList_R_java_util_ArrayList)(jcontext ctx, jobject self);

void mark_regexodus_MatchIterator(jobject object, jint mark, jint depth);
void clinit_regexodus_MatchIterator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
