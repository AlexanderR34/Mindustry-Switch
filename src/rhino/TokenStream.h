#ifndef HEADER_rhino_TokenStream
#define HEADER_rhino_TokenStream

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_TokenStream {
	java_lang_Object parent;
	jbool F_dirtyLine;
	jref F_regExpFlags;
	jref F_string;
	jdouble F_number;
	jbool F_isBinary;
	jbool F_isOldOctal;
	jbool F_isOctal;
	jbool F_isHex;
	jint F_quoteChar;
	jref F_stringBuffer;
	jint F_stringBufferTop;
	jref F_allStrings;
	jref F_ungetBuffer;
	jint F_ungetCursor;
	jbool F_hitEOF;
	jint F_lineStart;
	jint F_lineEndChar;
	jint F_lineno;
	jref F_sourceString;
	jref F_sourceReader;
	jref F_sourceBuffer;
	jint F_sourceEnd;
	jint F_sourceCursor;
	jint F_cursor;
	jint F_tokenBeg;
	jint F_tokenEnd;
	jref F_commentType;
	jbool F_xmlIsAttribute;
	jbool F_xmlIsTagContent;
	jint F_xmlOpenTagsCount;
	jref F_parser;
	jref F_commentPrefix;
	jint F_commentCursor;
} rhino_TokenStream;

extern Class class_rhino_TokenStream;

extern jint SF_rhino_TokenStream_EOF_CHAR;
extern jchar SF_rhino_TokenStream_BYTE_ORDER_MARK;
extern jbool SF_rhino_TokenStream_$assertionsDisabled;

#define VTABLE_rhino_TokenStream_hashCode_R_int 0
typedef jint (*func_rhino_TokenStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_TokenStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TokenStream_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_TokenStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_TokenStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_toString_R_java_lang_String 4
typedef jobject (*func_rhino_TokenStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_finalize 5
typedef void (*func_rhino_TokenStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_notify 6
typedef void (*func_rhino_TokenStream_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_notifyAll 7
typedef void (*func_rhino_TokenStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_wait 8
typedef void (*func_rhino_TokenStream_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_wait_long 9
typedef void (*func_rhino_TokenStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_TokenStream_wait_long_int 10
typedef void (*func_rhino_TokenStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_TokenStream_tokenToString_int_R_java_lang_String 11
typedef jobject (*func_rhino_TokenStream_tokenToString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_getSourceString_R_java_lang_String 12
typedef jobject (*func_rhino_TokenStream_getSourceString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getLineno_R_int 13
typedef jint (*func_rhino_TokenStream_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getString_R_java_lang_String 14
typedef jobject (*func_rhino_TokenStream_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getQuoteChar_R_char 15
typedef jchar (*func_rhino_TokenStream_getQuoteChar_R_char)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getNumber_R_double 16
typedef jdouble (*func_rhino_TokenStream_getNumber_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_isNumberBinary_R_boolean 17
typedef jbool (*func_rhino_TokenStream_isNumberBinary_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_isNumberOldOctal_R_boolean 18
typedef jbool (*func_rhino_TokenStream_isNumberOldOctal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_isNumberOctal_R_boolean 19
typedef jbool (*func_rhino_TokenStream_isNumberOctal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_isNumberHex_R_boolean 20
typedef jbool (*func_rhino_TokenStream_isNumberHex_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_eof_R_boolean 21
typedef jbool (*func_rhino_TokenStream_eof_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getToken_R_int 22
typedef jint (*func_rhino_TokenStream_getToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_readRegExp_int 23
typedef void (*func_rhino_TokenStream_readRegExp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String 24
typedef jobject (*func_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_isXMLAttribute_R_boolean 25
typedef jbool (*func_rhino_TokenStream_isXMLAttribute_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getFirstXMLToken_R_int 26
typedef jint (*func_rhino_TokenStream_getFirstXMLToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getNextXMLToken_R_int 27
typedef jint (*func_rhino_TokenStream_getNextXMLToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_readQuotedString_int_R_boolean 28
typedef jbool (*func_rhino_TokenStream_readQuotedString_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_readXmlComment_R_boolean 29
typedef jbool (*func_rhino_TokenStream_readXmlComment_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_readCDATA_R_boolean 30
typedef jbool (*func_rhino_TokenStream_readCDATA_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_readEntity_R_boolean 31
typedef jbool (*func_rhino_TokenStream_readEntity_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_readPI_R_boolean 32
typedef jbool (*func_rhino_TokenStream_readPI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getStringFromBuffer_R_java_lang_String 33
typedef jobject (*func_rhino_TokenStream_getStringFromBuffer_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_addToString_int 34
typedef void (*func_rhino_TokenStream_addToString_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_canUngetChar_R_boolean 35
typedef jbool (*func_rhino_TokenStream_canUngetChar_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_ungetChar_int 36
typedef void (*func_rhino_TokenStream_ungetChar_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_matchChar_int_R_boolean 37
typedef jbool (*func_rhino_TokenStream_matchChar_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_peekChar_R_int 38
typedef jint (*func_rhino_TokenStream_peekChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getChar_R_int 39
typedef jint (*func_rhino_TokenStream_getChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getChar_boolean_R_int 40
typedef jint (*func_rhino_TokenStream_getChar_boolean_R_int)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_TokenStream_getCharIgnoreLineEnd_R_int 41
typedef jint (*func_rhino_TokenStream_getCharIgnoreLineEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_ungetCharIgnoreLineEnd_int 42
typedef void (*func_rhino_TokenStream_ungetCharIgnoreLineEnd_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_skipLine 43
typedef void (*func_rhino_TokenStream_skipLine)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getOffset_R_int 44
typedef jint (*func_rhino_TokenStream_getOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_charAt_int_R_int 45
typedef jint (*func_rhino_TokenStream_charAt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_TokenStream_substring_int_int_R_java_lang_String 46
typedef jobject (*func_rhino_TokenStream_substring_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_TokenStream_getLine_R_java_lang_String 47
typedef jobject (*func_rhino_TokenStream_getLine_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String 48
typedef jobject (*func_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_TokenStream_fillSourceBuffer_R_boolean 49
typedef jbool (*func_rhino_TokenStream_fillSourceBuffer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getCursor_R_int 50
typedef jint (*func_rhino_TokenStream_getCursor_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getTokenBeg_R_int 51
typedef jint (*func_rhino_TokenStream_getTokenBeg_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getTokenEnd_R_int 52
typedef jint (*func_rhino_TokenStream_getTokenEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getTokenLength_R_int 53
typedef jint (*func_rhino_TokenStream_getTokenLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType 54
typedef jobject (*func_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_markCommentStart 55
typedef void (*func_rhino_TokenStream_markCommentStart)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_markCommentStart_java_lang_String 56
typedef void (*func_rhino_TokenStream_markCommentStart_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TokenStream_isMarkingComment_R_boolean 57
typedef jbool (*func_rhino_TokenStream_isMarkingComment_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String 58
typedef jobject (*func_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String 59
typedef jobject (*func_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_TokenStream(jobject object, jint mark, jint depth);
void clinit_rhino_TokenStream(jcontext ctx);
void init_rhino_TokenStream_rhino_Parser_java_io_Reader_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_TokenStream_tokenToString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jbool SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jbool param2);
jint SM_rhino_TokenStream_stringToKeyword_java_lang_String_int_boolean_R_int(jcontext ctx, jobject param0, jint param1, jbool param2);
jint SM_rhino_TokenStream_stringToKeywordForJS_java_lang_String_R_int(jcontext ctx, jobject param0);
jint SM_rhino_TokenStream_stringToKeywordForES_java_lang_String_boolean_R_int(jcontext ctx, jobject param0, jbool param1);
jobject M_rhino_TokenStream_getSourceString_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getLineno_R_int(jcontext ctx, jobject self);
jobject M_rhino_TokenStream_getString_R_java_lang_String(jcontext ctx, jobject self);
jchar M_rhino_TokenStream_getQuoteChar_R_char(jcontext ctx, jobject self);
jdouble M_rhino_TokenStream_getNumber_R_double(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_isNumberBinary_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_isNumberOldOctal_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_isNumberOctal_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_isNumberHex_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_eof_R_boolean(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getToken_R_int(jcontext ctx, jobject self);
jbool SM_rhino_TokenStream_isAlpha_int_R_boolean(jcontext ctx, jint param0);
jbool SM_rhino_TokenStream_isDigit_int_R_boolean(jcontext ctx, jint param0);
jbool SM_rhino_TokenStream_isJSSpace_int_R_boolean(jcontext ctx, jint param0);
jbool SM_rhino_TokenStream_isJSFormatChar_int_R_boolean(jcontext ctx, jint param0);
void M_rhino_TokenStream_readRegExp_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_isXMLAttribute_R_boolean(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getFirstXMLToken_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getNextXMLToken_R_int(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_readQuotedString_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_rhino_TokenStream_readXmlComment_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_readCDATA_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_readEntity_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_TokenStream_readPI_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_TokenStream_addToString_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_TokenStream_canUngetChar_R_boolean(jcontext ctx, jobject self);
void M_rhino_TokenStream_ungetChar_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_TokenStream_matchChar_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_rhino_TokenStream_peekChar_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getChar_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getChar_boolean_R_int(jcontext ctx, jobject self, jbool param0);
jint M_rhino_TokenStream_getCharIgnoreLineEnd_R_int(jcontext ctx, jobject self);
void M_rhino_TokenStream_ungetCharIgnoreLineEnd_int(jcontext ctx, jobject self, jint param0);
void M_rhino_TokenStream_skipLine(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getOffset_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_charAt_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_TokenStream_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_TokenStream_getLine_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_rhino_TokenStream_fillSourceBuffer_R_boolean(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getCursor_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getTokenBeg_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getTokenEnd_R_int(jcontext ctx, jobject self);
jint M_rhino_TokenStream_getTokenLength_R_int(jcontext ctx, jobject self);
jobject M_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType(jcontext ctx, jobject self);
void M_rhino_TokenStream_markCommentStart(jcontext ctx, jobject self);
void M_rhino_TokenStream_markCommentStart_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_TokenStream_isMarkingComment_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
