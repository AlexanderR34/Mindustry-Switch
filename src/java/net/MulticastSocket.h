#pragma once
#include "Clearwing.h"
#include "java/net/DatagramSocket.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct java_net_MulticastSocket { java_net_DatagramSocket parent; } java_net_MulticastSocket;
extern Class class_java_net_MulticastSocket;
#ifdef __cplusplus
}
#endif
