#pragma once
#include "Clearwing.h"
#include "java/io/InterruptedIOException.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct java_net_SocketTimeoutException { java_io_InterruptedIOException parent; } java_net_SocketTimeoutException;
extern Class class_java_net_SocketTimeoutException;
inline void clinit_java_net_SocketTimeoutException(jcontext ctx) {}
#ifdef __cplusplus
}
#endif
