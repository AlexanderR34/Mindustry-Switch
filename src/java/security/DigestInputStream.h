#pragma once
#include "Clearwing.h"
#include "java/io/InputStream.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct java_security_DigestInputStream { java_io_InputStream parent; } java_security_DigestInputStream;
extern Class class_java_security_DigestInputStream;
inline void init_java_security_DigestInputStream_java_io_InputStream_java_security_MessageDigest(jcontext ctx, jobject self, jobject stream, jobject digest) {}
#ifdef __cplusplus
}
#endif
