#ifndef HEADER_regexodus_UnicodeConstants
#define HEADER_regexodus_UnicodeConstants

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_UnicodeConstants {
	java_lang_Object parent;
} regexodus_UnicodeConstants;

extern Class class_regexodus_UnicodeConstants;

extern jint SF_regexodus_UnicodeConstants_CATEGORY_COUNT;
extern jint SF_regexodus_UnicodeConstants_Cc;
extern jint SF_regexodus_UnicodeConstants_Cf;
extern jint SF_regexodus_UnicodeConstants_Co;
extern jint SF_regexodus_UnicodeConstants_Cn;
extern jint SF_regexodus_UnicodeConstants_Lu;
extern jint SF_regexodus_UnicodeConstants_Ll;
extern jint SF_regexodus_UnicodeConstants_Lt;
extern jint SF_regexodus_UnicodeConstants_Lm;
extern jint SF_regexodus_UnicodeConstants_Lo;
extern jint SF_regexodus_UnicodeConstants_Mn;
extern jint SF_regexodus_UnicodeConstants_Me;
extern jint SF_regexodus_UnicodeConstants_Mc;
extern jint SF_regexodus_UnicodeConstants_Nd;
extern jint SF_regexodus_UnicodeConstants_Nl;
extern jint SF_regexodus_UnicodeConstants_No;
extern jint SF_regexodus_UnicodeConstants_Zs;
extern jint SF_regexodus_UnicodeConstants_Zl;
extern jint SF_regexodus_UnicodeConstants_Zp;
extern jint SF_regexodus_UnicodeConstants_Cs;
extern jint SF_regexodus_UnicodeConstants_Pd;
extern jint SF_regexodus_UnicodeConstants_Ps;
extern jint SF_regexodus_UnicodeConstants_Pi;
extern jint SF_regexodus_UnicodeConstants_Pe;
extern jint SF_regexodus_UnicodeConstants_Pf;
extern jint SF_regexodus_UnicodeConstants_Pc;
extern jint SF_regexodus_UnicodeConstants_Po;
extern jint SF_regexodus_UnicodeConstants_Sm;
extern jint SF_regexodus_UnicodeConstants_Sc;
extern jint SF_regexodus_UnicodeConstants_Sk;
extern jint SF_regexodus_UnicodeConstants_So;
extern jint SF_regexodus_UnicodeConstants_BLOCK_COUNT;
extern jint SF_regexodus_UnicodeConstants_BLOCK_SIZE;
extern jint SF_regexodus_UnicodeConstants_MAX_WEIGHT;


void mark_regexodus_UnicodeConstants(jobject object, jint mark, jint depth);
void clinit_regexodus_UnicodeConstants(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
