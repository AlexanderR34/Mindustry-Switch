#include "java/lang/reflect/Proxy.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

#include <mutex>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

jobject SM_java_lang_reflect_Proxy_getProxyClass_java_lang_ClassLoader_Array1_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject loader, jobject interfaceArray) {
    throwRuntimeException(ctx, "Dynamic proxies not supported on AOT platform");
    return nullptr;
}

