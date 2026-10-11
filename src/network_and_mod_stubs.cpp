#include <cstdio>
#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"
#include "java/lang/UnsatisfiedLinkError.h"
#include "java/net/DatagramPacket.h"
#include "java/net/DatagramSocket.h"
#include "java/net/InetAddress.h"
#include "java/net/Inet4Address.h"
#include "java/net/InetAddressImpl.h"
#include "java/net/NetworkInterface.h"
#include "java/util/concurrent/CountDownLatch.h"

#include "arc/net/Connection.h"
#include "arc/net/Client.h"
#include "arc/net/Server.h"
#include "arc/net/TcpConnection.h"
#include "arc/net/UdpConnection.h"
#include "arc/net/NetListener_LagListener.h"
#include "arc/net/NetListener_ThreadedListener.h"
#include "arc/net/Server_DiscoveryReceiver.h"
#include "arc/net/dns/JndiContextNameserverProvider_Inner.h"
#include "arc/util/Http_HttpRequest.h"
#include "arc/assets/Loadable.h"
#include "arc/net/EndPoint.h"
#include "arc/net/NetListener.h"
#include "java/lang/Runnable.h"
#include "mindustry/net/Net_NetProvider.h"

#include "mindustry/core/Platform_1.h"
#include "mindustry/mod/ModClassLoader.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/BeControl.h"
#include "arc/struct/Seq.h"
#include "arc/struct/OrderedMap.h"

extern "C" {

// ============================================================================
// Static Fields
// ============================================================================
__attribute__((weak)) jint SF_mindustry_net_ArcNetProvider_clientReadBufferSize = 8192;
__attribute__((weak)) jobject SF_mindustry_net_ArcNetProvider_decompressor = nullptr;
__attribute__((weak)) jobject SF_mindustry_net_ArcNetProvider_compressor = nullptr;
__attribute__((weak)) jobject SF_mindustry_net_ArcNetProvider_writeConnections = nullptr;

__attribute__((weak)) jobject SF_mindustry_mod_Mods_metaFiles = nullptr;
__attribute__((weak)) jobject SF_mindustry_mod_Mods_blacklistedMods = nullptr;

__attribute__((weak)) jint SF_mindustry_net_BeControl_updateInterval = 0;

// ============================================================================
// Missing / Stub Virtual Methods Implementations
// ============================================================================

// --- arc_net_Connection ---
__attribute__((weak)) jobject M_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jint M_arc_net_Connection_sendTCP_java_lang_Object_R_int(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) jint M_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) jint M_arc_net_Connection_sendUDP_java_lang_Object_R_int(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) jint M_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) void M_arc_net_Connection_close_arc_net_DcReason(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Connection_updateReturnTripTime(jcontext ctx, jobject self) {}
__attribute__((weak)) jint M_arc_net_Connection_getReturnTripTime_R_int(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) void M_arc_net_Connection_setKeepAliveTCP_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) void M_arc_net_Connection_setTimeout_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) void M_arc_net_Connection_addListener_arc_net_NetListener(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Connection_removeListener_arc_net_NetListener(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Connection_notifyConnected(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Connection_notifyDisconnected_arc_net_DcReason(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Connection_notifyIdle(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Connection_notifyReceived_java_lang_Object(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jobject M_arc_net_Connection_getEndPoint_R_arc_net_EndPoint(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Connection_setName_java_lang_String(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jint M_arc_net_Connection_getTcpWriteBufferSize_R_int(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) jbool M_arc_net_Connection_isIdle_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) void M_arc_net_Connection_setIdleThreshold_float(jcontext ctx, jobject self, jfloat p) {}
__attribute__((weak)) jobject M_arc_net_Connection_toString_R_java_lang_String(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Connection_setConnected_boolean(jcontext ctx, jobject self, jbool p) {}
__attribute__((weak)) jobject M_arc_net_Connection_getArbitraryData_R_java_lang_Object(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Connection_setArbitraryData_java_lang_Object(jcontext ctx, jobject self, jobject p) {}

// --- arc_net_Client ---
__attribute__((weak)) void M_arc_net_Client_run(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_start(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_stop(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_close(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_update_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) jobject M_arc_net_Client_getUpdateThread_R_java_lang_Thread(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Client_reconnect(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_reconnect_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) void M_arc_net_Client_keepAlive(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_handleNetException_arc_net_ArcNetException(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Client_dispose(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Client_setKeepAliveUDP_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) jobject M_arc_net_Client_getSerialization_R_arc_net_NetSerializer(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Client_broadcast_int_java_net_DatagramSocket(jcontext ctx, jobject self, jint p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_Client_discoverHosts_int_java_lang_String_int_int_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jint p0, jobject p1, jint p2, jint p3, jobject p4, jobject p5) {}
__attribute__((weak)) jobject M_arc_net_Client_lambda$discoverHosts$1_java_lang_String_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object(jcontext ctx, jobject self, jobject p0, jint p1, jint p2, jobject p3, jobject p4, jobject p5) { return nullptr; }
__attribute__((weak)) jobject M_arc_net_Client_lambda$discoverHosts$0_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object(jcontext ctx, jobject self, jint p0, jint p1, jobject p2, jobject p3, jobject p4) { return nullptr; }
__attribute__((weak)) jobject SM_arc_net_Client_lambda$new$0_R_java_net_DatagramPacket(jcontext ctx) { return nullptr; }

// --- arc_net_Server ---
__attribute__((weak)) void M_arc_net_Server_run(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server_addListener_arc_net_NetListener(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Server_removeListener_arc_net_NetListener(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Server_start(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server_stop(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server_close(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server_update_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) jobject M_arc_net_Server_getUpdateThread_R_java_lang_Thread(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Server_acceptOperation_java_nio_channels_SocketChannel(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jint M_arc_net_Server_generateId_R_int(jcontext ctx, jobject self) { return 1; }
__attribute__((weak)) jobject M_arc_net_Server_newConnection_R_arc_net_Connection(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_Server_addConnection_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Server_removeConnection_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Server_sendToAllTCP_java_lang_Object(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Server_sendToAllExceptTCP_int_java_lang_Object(jcontext ctx, jobject self, jint p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_Server_sendToAllTCP_java_lang_Object_java_lang_Iterable(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_Server_sendToAllUDP_java_lang_Object(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_Server_sendToAllExceptUDP_int_java_lang_Object(jcontext ctx, jobject self, jint p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_Server_sendToAllUDP_java_lang_Object_java_lang_Iterable(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) jobject M_arc_net_Server_serializeTCP_java_lang_Object_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_arc_net_Server_serializeUDP_java_lang_Object_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) void M_arc_net_Server_dispose(jcontext ctx, jobject self) {}
__attribute__((weak)) jobject M_arc_net_Server_getConnections_R_Array1_arc_net_Connection(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jbool SM_arc_net_Server_lambda$generateId$0_Array1_int_arc_net_Connection_R_boolean(jcontext ctx, jobject p0, jobject p1) { return 0; }
__attribute__((weak)) void SM_arc_net_Server_lambda$update$0_arc_net_UdpConnection_java_net_InetSocketAddress_java_nio_ByteBuffer(jcontext ctx, jobject p0, jobject p1, jobject p2) {}
__attribute__((weak)) void SM_arc_net_Server_lambda$new$0_java_net_InetAddress_arc_net_ServerDiscoveryHandler$ReponseHandler(jcontext ctx, jobject p0, jobject p1) {}

// --- arc_net_TcpConnection ---
__attribute__((weak)) void init_arc_net_TcpConnection_arc_net_NetSerializer_int_int(jcontext ctx, jobject self, jobject p0, jint p1, jint p2) {}
__attribute__((weak)) jobject M_arc_net_TcpConnection_accept_java_nio_channels_Selector_java_nio_channels_SocketChannel_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject p0, jobject p1) { return nullptr; }
__attribute__((weak)) void M_arc_net_TcpConnection_connect_java_nio_channels_Selector_java_net_SocketAddress_int(jcontext ctx, jobject self, jobject p0, jobject p1, jint p2) {}
__attribute__((weak)) jobject M_arc_net_TcpConnection_readObject_R_java_lang_Object(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_net_TcpConnection_writeOperation(jcontext ctx, jobject self) {}
__attribute__((weak)) jbool M_arc_net_TcpConnection_writeToSocket_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) jint M_arc_net_TcpConnection_send_java_lang_Object_R_int(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) jint M_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) void M_arc_net_TcpConnection_close(jcontext ctx, jobject self) {}
__attribute__((weak)) jbool M_arc_net_TcpConnection_needsKeepAlive_long_R_boolean(jcontext ctx, jobject self, jlong p) { return 0; }
__attribute__((weak)) jbool M_arc_net_TcpConnection_isTimedOut_long_R_boolean(jcontext ctx, jobject self, jlong p) { return 0; }

// --- arc_net_UdpConnection ---
__attribute__((weak)) void init_arc_net_UdpConnection_arc_net_NetSerializer_int(jcontext ctx, jobject self, jobject p0, jint p1) {}
__attribute__((weak)) void M_arc_net_UdpConnection_bind_java_nio_channels_Selector_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_UdpConnection_connect_java_nio_channels_Selector_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) jobject M_arc_net_UdpConnection_readFromAddress_R_java_net_InetSocketAddress(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_arc_net_UdpConnection_readObject_R_java_lang_Object(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jint M_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int(jcontext ctx, jobject self, jobject p0, jobject p1) { return 0; }
__attribute__((weak)) jint M_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int(jcontext ctx, jobject self, jobject p0, jobject p1) { return 0; }
__attribute__((weak)) void M_arc_net_UdpConnection_close(jcontext ctx, jobject self) {}
__attribute__((weak)) jbool M_arc_net_UdpConnection_needsKeepAlive_long_R_boolean(jcontext ctx, jobject self, jlong p) { return 0; }

// --- arc_net_NetListener$LagListener ---
__attribute__((weak)) void init_arc_net_NetListener$LagListener_int_int_arc_net_NetListener(jcontext ctx, jobject self, jint p0, jint p1, jobject p2) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_connected_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_idle_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_queue_java_lang_Runnable(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_lambda$idle$0_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_lambda$received$0_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$LagListener_lambda$connected$0_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}

// --- arc_net_NetListener$ThreadedListener ---
__attribute__((weak)) void init_arc_net_NetListener$ThreadedListener_arc_net_NetListener(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_connected_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_idle_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_queue_java_lang_Runnable(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_lambda$idle$0_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_lambda$received$0_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_arc_net_NetListener$ThreadedListener_lambda$connected$0_arc_net_Connection(jcontext ctx, jobject self, jobject p) {}

// --- arc_net_Server$DiscoveryReceiver ---
__attribute__((weak)) void init_arc_net_Server$DiscoveryReceiver_arc_net_Server_int(jcontext ctx, jobject self, jobject p0, jint p1) {}
__attribute__((weak)) void M_arc_net_Server$DiscoveryReceiver_close(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server$DiscoveryReceiver_start(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server$DiscoveryReceiver_lambda$start$0(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_arc_net_Server$DiscoveryReceiver_lambda$start$1_java_net_DatagramPacket_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject p0, jobject p1) {}

// --- arc_net_dns_JndiContextNameserverProvider$Inner ---
__attribute__((weak)) void init_arc_net_dns_JndiContextNameserverProvider$Inner(jcontext ctx, jobject self) {}
__attribute__((weak)) jobject M_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jbool M_arc_net_dns_JndiContextNameserverProvider$Inner_isEnabled_R_boolean(jcontext ctx, jobject self) { return 0; }

// --- arc_util_Http$HttpRequest ---
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_method_arc_util_Http$HttpMethod_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jint p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_redirects_boolean_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jbool p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_credentials_boolean_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jbool p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_header_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p0, jobject p1) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_content_Array1_byte_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p) { return self; }
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_content_java_io_InputStream_long_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject p0, jlong p1) { return self; }
__attribute__((weak)) void M_arc_util_Http$HttpRequest_submit_arc_func_Cons(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_arc_util_Http$HttpRequest_block_arc_func_ConsT(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jobject M_arc_util_Http$HttpRequest_block_R_arc_util_Http$HttpResponse(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) void M_arc_util_Http$HttpRequest_lambda$submit$0_arc_func_ConsT(jcontext ctx, jobject self, jobject p) {}

// --- mindustry_mod_Mods ---
__attribute__((weak)) void init_mindustry_mod_Mods(jcontext ctx, jobject self) { init_java_lang_Object(ctx, self); }
__attribute__((weak)) void M_mindustry_mod_Mods_loadAsync(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_loadSync(jcontext ctx, jobject self) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getName_R_java_lang_String(jcontext ctx, jobject self) { return (jobject) createStringLiteral(ctx, u8"Mods"_j); }
__attribute__((weak)) jobject M_mindustry_mod_Mods_getDependencies_R_arc_struct_Seq(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) void M_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_getMod_java_lang_Class_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p0, jbool p1) { return nullptr; }
__attribute__((weak)) void M_mindustry_mod_Mods_loadIcons(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_mod_Mods_packSprites_mindustry_graphics_MultiPacker_arc_struct_Seq_mindustry_mod_Mods$LoadedMod_boolean_arc_struct_Seq_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject p0, jobject p1, jobject p2, jbool p3, jobject p4, jobject p5) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getPage_arc_files_Fi_R_mindustry_graphics_MultiPacker$PageType(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) void M_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jbool M_mindustry_mod_Mods_hasScripts_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) jbool M_mindustry_mod_Mods_requiresReload_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) jbool M_mindustry_mod_Mods_skipModLoading_R_boolean(jcontext ctx, jobject self) { return 1; }
__attribute__((weak)) void M_mindustry_mod_Mods_load(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_sortMods(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_updateDependencies_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq(jcontext ctx, jobject self) {
	if (self) {
		auto m = (mindustry_mod_Mods*)self;
		if (m->F_mods) return (jobject)m->F_mods;
	}
	clinit_arc_struct_Seq(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, s);
	return s;
}
__attribute__((weak)) jobject M_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) void M_mindustry_mod_Mods_buildFiles(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_checkWarnings(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_checkDependencies_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject p0, jbool p1) {}
__attribute__((weak)) void M_mindustry_mod_Mods_downloadDependencies_arc_struct_Seq(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_mod_Mods_reload(jcontext ctx, jobject self) {}
__attribute__((weak)) jbool M_mindustry_mod_Mods_hasContentErrors_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) void M_mindustry_mod_Mods_loadScripts(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_loadContent(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_loadModPatches(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_mindustry_mod_Mods_addParseListener_mindustry_mod_ContentParser$ParseListener(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq(jcontext ctx, jobject self) {
	clinit_arc_struct_Seq(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, s);
	return s;
}
__attribute__((weak)) void M_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean(jcontext ctx, jobject self, jobject p0, jbool p1) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject p) {
	clinit_arc_struct_Seq(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, s);
	return s;
}
__attribute__((weak)) jobject M_mindustry_mod_Mods_list_R_arc_struct_Seq(jcontext ctx, jobject self) {
	if (self) {
		auto m = (mindustry_mod_Mods*)self;
		if (m->F_mods) return (jobject)m->F_mods;
	}
	clinit_arc_struct_Seq(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, s);
	return s;
}
__attribute__((weak)) jobject M_mindustry_mod_Mods_getMods_R_arc_struct_Seq(jcontext ctx, jobject self) {
	if (self) {
		auto m = (mindustry_mod_Mods*)self;
		if (m->F_mods) return (jobject)m->F_mods;
	}
	clinit_arc_struct_Seq(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, s);
	return s;
}
__attribute__((weak)) void M_mindustry_mod_Mods_eachClass_arc_func_Cons(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_mod_Mods_eachEnabled_arc_func_Cons(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_mod_Mods_contextRun_mindustry_mod_Mods$LoadedMod_java_lang_Runnable(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) jobject M_mindustry_mod_Mods_findMeta_arc_files_Fi_R_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_resolveDependencies_arc_struct_Seq_R_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject p) {
	clinit_arc_struct_OrderedMap(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, s);
	return s;
}
__attribute__((weak)) jbool M_mindustry_mod_Mods_resolve_java_lang_String_mindustry_mod_Mods$ModResolutionContext_R_boolean(jcontext ctx, jobject self, jobject p0, jobject p1) { return 0; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_resolveRoot_arc_files_Fi_R_arc_files_Fi(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p0, jbool p1, jbool p2) { return nullptr; }
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$eachClass$1_arc_func_Cons_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$loadScripts$0_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$downloadDependencies$0_arc_struct_Seq(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jbool M_mindustry_mod_Mods_lambda$load$0_arc_files_Fi_R_boolean(jcontext ctx, jobject self, jobject p) { return 0; }
__attribute__((weak)) jbool M_mindustry_mod_Mods_lambda$load$1_arc_files_Fi_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject p0, jobject p1) { return 0; }
__attribute__((weak)) jobject M_mindustry_mod_Mods_lambda$packSprites$0_arc_files_Fi_boolean_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_float_arc_struct_ObjectFloatMap_R_java_lang_Runnable(jcontext ctx, jobject self, jobject p0, jbool p1, jobject p2, jbool p3, jobject p4, jobject p5, jfloat p6, jobject p7) { return nullptr; }
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$packSprites$1_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_arc_files_Fi_arc_graphics_Pixmap_float_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject p0, jbool p1, jobject p2, jobject p3, jobject p4, jobject p5, jfloat p6, jobject p7) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$loadAsync$6_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker_arc_graphics_Texture$TextureFilter_arc_struct_ObjectFloatMap_long(jcontext ctx, jobject self, jobject p0, jobject p1, jobject p2, jobject p3, jobject p4, jlong p5) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$loadAsync$4_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject p0, jobject p1, jobject p2) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$loadAsync$0_mindustry_graphics_MultiPacker_arc_struct_Seq_arc_struct_ObjectFloatMap_Array1_int_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p0, jobject p1, jobject p2, jobject p3, jobject p4) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$importMod$0_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_mod_Mods_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject p) {}

// --- mindustry_net_ArcNetProvider ---
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject p0, jobject p1, jbool p2) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_boolean(jcontext ctx, jobject self, jobject p0, jbool p1) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean(jcontext ctx, jobject self, jobject p0, jobject p1, jbool p2) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject p0, jint p1, jobject p2) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean(jcontext ctx, jobject self, jobject p0, jbool p1) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_disconnectClient(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_discoverServers_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject p0, jint p1, jobject p2, jobject p3) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_hostServer_int(jcontext ctx, jobject self, jint p) {}
__attribute__((weak)) jobject M_mindustry_net_ArcNetProvider_getConnections_R_java_lang_Iterable(jcontext ctx, jobject self) {
	clinit_arc_struct_Seq(ctx);
	auto s = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, s);
	return s;
}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_closeServer(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_dispose(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_lambda$hostServer$0(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_lambda$connectClient$0_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject p0, jint p1, jobject p2) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_lambda$connectClient$1(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_ArcNetProvider_lambda$new$2(jcontext ctx, jobject self) {}

// --- mindustry_net_BeControl ---
__attribute__((weak)) jbool M_mindustry_net_BeControl_active_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) void init_mindustry_net_BeControl(jcontext ctx, jobject self) { init_java_lang_Object(ctx, self); }
__attribute__((weak)) void M_mindustry_net_BeControl_init(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_BeControl_checkUpdate_arc_func_Boolc(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) jbool M_mindustry_net_BeControl_isUpdateAvailable_R_boolean(jcontext ctx, jobject self) { return 0; }
__attribute__((weak)) void M_mindustry_net_BeControl_showUpdateDialog(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_BeControl_download_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Floatc_arc_func_Boolp_java_lang_Runnable_arc_func_Cons(jcontext ctx, jobject self, jobject p0, jobject p1, jobject p2, jobject p3, jobject p4, jobject p5, jobject p6) {}
__attribute__((weak)) void M_mindustry_net_BeControl_lambda$showUpdateDialog$10(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_BeControl_lambda$showUpdateDialog$0(jcontext ctx, jobject self) {}
__attribute__((weak)) void M_mindustry_net_BeControl_lambda$checkUpdate$1_arc_func_Boolc_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject p0, jobject p1) {}
__attribute__((weak)) void M_mindustry_net_BeControl_lambda$checkUpdate$3_arc_func_Boolc(jcontext ctx, jobject self, jobject p) {}
__attribute__((weak)) void M_mindustry_net_BeControl_lambda$init$0(jcontext ctx, jobject self) {}

// --- mindustry_core_Platform$1 ---
__attribute__((weak)) void init_mindustry_core_Platform$1_mindustry_core_Platform_java_lang_ClassLoader(jcontext ctx, jobject self, jobject p0, jobject p1) { init_java_lang_Object(ctx, self); }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_getParent_R_java_lang_ClassLoader(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_getResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject p0, jbool p1) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_loadClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_getResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_getResources_java_lang_String_R_java_util_Enumeration(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_findLoadedClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_findClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_findSystemClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_core_Platform$1_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class(jcontext ctx, jobject self, jobject p0, jobject p1, jint p2, jint p3) { return nullptr; }

// --- mindustry_mod_ModClassLoader ---
__attribute__((weak)) void init_mindustry_mod_ModClassLoader(jcontext ctx, jobject self) { init_java_lang_Object(ctx, self); }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_getParent_R_java_lang_ClassLoader(jcontext ctx, jobject self) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject p0, jbool p1) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_loadClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_getResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_getResources_java_lang_String_R_java_util_Enumeration(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_findClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_findSystemClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject p) { return nullptr; }
__attribute__((weak)) jobject M_mindustry_mod_ModClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class(jcontext ctx, jobject self, jobject p0, jobject p1, jint p2, jint p3) { return nullptr; }


// ============================================================================
// VTABLE DEFINITIONS
// ============================================================================

static void *vtable_arc_net_Connection[40] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_Connection_initialize_arc_net_NetSerializer_int_int,
	(void *) M_arc_net_Connection_getID_R_int,
	(void *) M_arc_net_Connection_isConnected_R_boolean,
	(void *) M_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException,
	(void *) M_arc_net_Connection_sendTCP_java_lang_Object_R_int,
	(void *) M_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_Connection_sendUDP_java_lang_Object_R_int,
	(void *) M_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_Connection_close_arc_net_DcReason,
	(void *) M_arc_net_Connection_updateReturnTripTime,
	(void *) M_arc_net_Connection_getReturnTripTime_R_int,
	(void *) M_arc_net_Connection_setKeepAliveTCP_int,
	(void *) M_arc_net_Connection_setTimeout_int,
	(void *) M_arc_net_Connection_addListener_arc_net_NetListener,
	(void *) M_arc_net_Connection_removeListener_arc_net_NetListener,
	(void *) M_arc_net_Connection_notifyConnected,
	(void *) M_arc_net_Connection_notifyDisconnected_arc_net_DcReason,
	(void *) M_arc_net_Connection_notifyIdle,
	(void *) M_arc_net_Connection_notifyReceived_java_lang_Object,
	(void *) M_arc_net_Connection_getEndPoint_R_arc_net_EndPoint,
	(void *) M_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress,
	(void *) M_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress,
	(void *) M_arc_net_Connection_setName_java_lang_String,
	(void *) M_arc_net_Connection_getTcpWriteBufferSize_R_int,
	(void *) M_arc_net_Connection_isIdle_R_boolean,
	(void *) M_arc_net_Connection_setIdleThreshold_float,
	(void *) M_arc_net_Connection_setConnected_boolean,
	(void *) M_arc_net_Connection_getArbitraryData_R_java_lang_Object,
	(void *) M_arc_net_Connection_setArbitraryData_java_lang_Object,
};

static void *vtable_arc_net_Client[62] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_Connection_initialize_arc_net_NetSerializer_int_int,
	(void *) M_arc_net_Connection_getID_R_int,
	(void *) M_arc_net_Connection_isConnected_R_boolean,
	(void *) M_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException,
	(void *) M_arc_net_Connection_sendTCP_java_lang_Object_R_int,
	(void *) M_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_Connection_sendUDP_java_lang_Object_R_int,
	(void *) M_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_Connection_close_arc_net_DcReason,
	(void *) M_arc_net_Connection_updateReturnTripTime,
	(void *) M_arc_net_Connection_getReturnTripTime_R_int,
	(void *) M_arc_net_Connection_setKeepAliveTCP_int,
	(void *) M_arc_net_Connection_setTimeout_int,
	(void *) M_arc_net_Connection_addListener_arc_net_NetListener,
	(void *) M_arc_net_Connection_removeListener_arc_net_NetListener,
	(void *) M_arc_net_Connection_notifyConnected,
	(void *) M_arc_net_Connection_notifyDisconnected_arc_net_DcReason,
	(void *) M_arc_net_Connection_notifyIdle,
	(void *) M_arc_net_Connection_notifyReceived_java_lang_Object,
	(void *) M_arc_net_Connection_getEndPoint_R_arc_net_EndPoint,
	(void *) M_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress,
	(void *) M_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress,
	(void *) M_arc_net_Connection_setName_java_lang_String,
	(void *) M_arc_net_Connection_getTcpWriteBufferSize_R_int,
	(void *) M_arc_net_Connection_isIdle_R_boolean,
	(void *) M_arc_net_Connection_setIdleThreshold_float,
	(void *) M_arc_net_Connection_setConnected_boolean,
	(void *) M_arc_net_Connection_getArbitraryData_R_java_lang_Object,
	(void *) M_arc_net_Connection_setArbitraryData_java_lang_Object,
	(void *) M_arc_net_Client_run,
	(void *) M_arc_net_Client_start,
	(void *) M_arc_net_Client_stop,
	(void *) M_arc_net_Client_close,
	(void *) M_arc_net_Client_update_int,
	(void *) M_arc_net_Client_getUpdateThread_R_java_lang_Thread,
	(void *) M_arc_net_Client_setDiscoveryPacket_arc_func_Prov,
	(void *) M_arc_net_Client_connect_int_java_lang_String_int,
	(void *) M_arc_net_Client_connect_int_java_lang_String_int_int,
	(void *) M_arc_net_Client_connect_int_java_net_InetAddress_int,
	(void *) M_arc_net_Client_connect_int_java_net_InetAddress_int_int,
	(void *) M_arc_net_Client_reconnect,
	(void *) M_arc_net_Client_reconnect_int,
	(void *) M_arc_net_Client_keepAlive,
	(void *) M_arc_net_Client_handleNetException_arc_net_ArcNetException,
	(void *) M_arc_net_Client_dispose,
	(void *) M_arc_net_Client_setKeepAliveUDP_int,
	(void *) M_arc_net_Client_getSerialization_R_arc_net_NetSerializer,
	(void *) M_arc_net_Client_broadcast_int_java_net_DatagramSocket,
	(void *) M_arc_net_Client_discoverHosts_int_java_lang_String_int_int_arc_func_Cons_java_lang_Runnable,
	(void *) M_arc_net_Client_lambda$discoverHosts$1_java_lang_String_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object,
	(void *) M_arc_net_Client_lambda$discoverHosts$0_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object,
};

static void *vtable_arc_net_Server[41] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_Server_run,
	(void *) M_arc_net_Server_addListener_arc_net_NetListener,
	(void *) M_arc_net_Server_removeListener_arc_net_NetListener,
	(void *) M_arc_net_Server_start,
	(void *) M_arc_net_Server_stop,
	(void *) M_arc_net_Server_close,
	(void *) M_arc_net_Server_update_int,
	(void *) M_arc_net_Server_getUpdateThread_R_java_lang_Thread,
	(void *) M_arc_net_Server_setMulticast_java_lang_String_int,
	(void *) M_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler,
	(void *) M_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter,
	(void *) M_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter,
	(void *) M_arc_net_Server_bind_int,
	(void *) M_arc_net_Server_bind_int_int,
	(void *) M_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress,
	(void *) M_arc_net_Server_acceptOperation_java_nio_channels_SocketChannel,
	(void *) M_arc_net_Server_generateId_R_int,
	(void *) M_arc_net_Server_newConnection_R_arc_net_Connection,
	(void *) M_arc_net_Server_addConnection_arc_net_Connection,
	(void *) M_arc_net_Server_removeConnection_arc_net_Connection,
	(void *) M_arc_net_Server_sendToAllTCP_java_lang_Object,
	(void *) M_arc_net_Server_sendToAllExceptTCP_int_java_lang_Object,
	(void *) M_arc_net_Server_sendToAllTCP_java_lang_Object_java_lang_Iterable,
	(void *) M_arc_net_Server_sendToAllUDP_java_lang_Object,
	(void *) M_arc_net_Server_sendToAllExceptUDP_int_java_lang_Object,
	(void *) M_arc_net_Server_sendToAllUDP_java_lang_Object_java_lang_Iterable,
	(void *) M_arc_net_Server_serializeTCP_java_lang_Object_R_java_nio_ByteBuffer,
	(void *) M_arc_net_Server_serializeUDP_java_lang_Object_R_java_nio_ByteBuffer,
	(void *) M_arc_net_Server_dispose,
	(void *) M_arc_net_Server_getConnections_R_Array1_arc_net_Connection,
};

static void *vtable_mindustry_net_ArcNetProvider[30] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean,
	(void *) M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_boolean,
	(void *) M_mindustry_net_ArcNetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean,
	(void *) M_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable,
	(void *) M_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean,
	(void *) M_mindustry_net_ArcNetProvider_disconnectClient,
	(void *) M_mindustry_net_ArcNetProvider_discoverServers_arc_func_Cons_java_lang_Runnable,
	(void *) M_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons,
	(void *) M_mindustry_net_ArcNetProvider_hostServer_int,
	(void *) M_mindustry_net_ArcNetProvider_getConnections_R_java_lang_Iterable,
	(void *) M_mindustry_net_ArcNetProvider_closeServer,
	(void *) M_mindustry_net_ArcNetProvider_dispose,
	(void *) M_mindustry_net_ArcNetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter,
	(void *) M_mindustry_net_ArcNetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter,
	(void *) M_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host,
	(void *) M_mindustry_net_ArcNetProvider_lambda$hostServer$0,
	(void *) M_mindustry_net_ArcNetProvider_lambda$connectClient$0_java_lang_String_int_java_lang_Runnable,
	(void *) M_mindustry_net_ArcNetProvider_lambda$connectClient$1,
	(void *) M_mindustry_net_ArcNetProvider_lambda$new$2,
};

static void *vtable_mindustry_mod_Mods[74] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_Mods_loadAsync,
	(void *) M_mindustry_mod_Mods_loadSync,
	(void *) M_mindustry_mod_Mods_getName_R_java_lang_String,
	(void *) M_mindustry_mod_Mods_getDependencies_R_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader,
	(void *) M_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi,
	(void *) M_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi,
	(void *) M_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2,
	(void *) M_mindustry_mod_Mods_getMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_getMod_java_lang_Class_R_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_loadIcons,
	(void *) M_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_packSprites_mindustry_graphics_MultiPacker_arc_struct_Seq_mindustry_mod_Mods$LoadedMod_boolean_arc_struct_Seq_arc_struct_ObjectFloatMap,
	(void *) M_mindustry_mod_Mods_waitForMain_java_lang_Runnable,
	(void *) M_mindustry_mod_Mods_getPage_arc_files_Fi_R_mindustry_graphics_MultiPacker$PageType,
	(void *) M_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts,
	(void *) M_mindustry_mod_Mods_hasScripts_R_boolean,
	(void *) M_mindustry_mod_Mods_requiresReload_R_boolean,
	(void *) M_mindustry_mod_Mods_skipModLoading_R_boolean,
	(void *) M_mindustry_mod_Mods_load,
	(void *) M_mindustry_mod_Mods_sortMods,
	(void *) M_mindustry_mod_Mods_updateDependencies_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_buildFiles,
	(void *) M_mindustry_mod_Mods_checkWarnings,
	(void *) M_mindustry_mod_Mods_checkDependencies_arc_struct_Seq_boolean,
	(void *) M_mindustry_mod_Mods_downloadDependencies_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_reload,
	(void *) M_mindustry_mod_Mods_hasContentErrors_R_boolean,
	(void *) M_mindustry_mod_Mods_loadScripts,
	(void *) M_mindustry_mod_Mods_loadContent,
	(void *) M_mindustry_mod_Mods_loadModPatches,
	(void *) M_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable,
	(void *) M_mindustry_mod_Mods_addParseListener_mindustry_mod_ContentParser$ParseListener,
	(void *) M_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean,
	(void *) M_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_list_R_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_getMods_R_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_eachClass_arc_func_Cons,
	(void *) M_mindustry_mod_Mods_eachEnabled_arc_func_Cons,
	(void *) M_mindustry_mod_Mods_contextRun_mindustry_mod_Mods$LoadedMod_java_lang_Runnable,
	(void *) M_mindustry_mod_Mods_findMeta_arc_files_Fi_R_mindustry_mod_Mods$ModMeta,
	(void *) M_mindustry_mod_Mods_resolveDependencies_arc_struct_Seq_R_arc_struct_OrderedMap,
	(void *) M_mindustry_mod_Mods_resolve_java_lang_String_mindustry_mod_Mods$ModResolutionContext_R_boolean,
	(void *) M_mindustry_mod_Mods_resolveRoot_arc_files_Fi_R_arc_files_Fi,
	(void *) M_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_lambda$eachClass$1_arc_func_Cons_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_lambda$loadScripts$0_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_lambda$downloadDependencies$0_arc_struct_Seq,
	(void *) M_mindustry_mod_Mods_lambda$load$0_arc_files_Fi_R_boolean,
	(void *) M_mindustry_mod_Mods_lambda$load$1_arc_files_Fi_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_Mods_lambda$packSprites$0_arc_files_Fi_boolean_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_float_arc_struct_ObjectFloatMap_R_java_lang_Runnable,
	(void *) M_mindustry_mod_Mods_lambda$packSprites$1_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_arc_files_Fi_arc_graphics_Pixmap_float_arc_struct_ObjectFloatMap,
	(void *) M_mindustry_mod_Mods_lambda$loadAsync$6_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker_arc_graphics_Texture$TextureFilter_arc_struct_ObjectFloatMap_long,
	(void *) M_mindustry_mod_Mods_lambda$loadAsync$4_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_mod_Mods_lambda$loadAsync$0_mindustry_graphics_MultiPacker_arc_struct_Seq_arc_struct_ObjectFloatMap_Array1_int_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_lambda$importMod$0_mindustry_mod_Mods$LoadedMod,
	(void *) M_mindustry_mod_Mods_lambda$new$0_mindustry_game_EventType$ClientLoadEvent,
};

static void *vtable_mindustry_net_BeControl[22] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_net_BeControl_active_R_boolean,
	(void *) M_mindustry_net_BeControl_init,
	(void *) M_mindustry_net_BeControl_checkUpdate_arc_func_Boolc,
	(void *) M_mindustry_net_BeControl_isUpdateAvailable_R_boolean,
	(void *) M_mindustry_net_BeControl_showUpdateDialog,
	(void *) M_mindustry_net_BeControl_download_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Floatc_arc_func_Boolp_java_lang_Runnable_arc_func_Cons,
	(void *) M_mindustry_net_BeControl_lambda$showUpdateDialog$10,
	(void *) M_mindustry_net_BeControl_lambda$showUpdateDialog$0,
	(void *) M_mindustry_net_BeControl_lambda$checkUpdate$1_arc_func_Boolc_arc_util_Http$HttpResponse,
	(void *) M_mindustry_net_BeControl_lambda$checkUpdate$3_arc_func_Boolc,
	(void *) M_mindustry_net_BeControl_lambda$init$0,
};

static void *vtable_arc_net_TcpConnection[21] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_TcpConnection_accept_java_nio_channels_Selector_java_nio_channels_SocketChannel_R_java_nio_channels_SelectionKey,
	(void *) M_arc_net_TcpConnection_connect_java_nio_channels_Selector_java_net_SocketAddress_int,
	(void *) M_arc_net_TcpConnection_readObject_R_java_lang_Object,
	(void *) M_arc_net_TcpConnection_writeOperation,
	(void *) M_arc_net_TcpConnection_writeToSocket_R_boolean,
	(void *) M_arc_net_TcpConnection_send_java_lang_Object_R_int,
	(void *) M_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_TcpConnection_close,
	(void *) M_arc_net_TcpConnection_needsKeepAlive_long_R_boolean,
	(void *) M_arc_net_TcpConnection_isTimedOut_long_R_boolean,
};

static void *vtable_arc_net_UdpConnection[19] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_UdpConnection_bind_java_nio_channels_Selector_java_net_InetSocketAddress,
	(void *) M_arc_net_UdpConnection_connect_java_nio_channels_Selector_java_net_InetSocketAddress,
	(void *) M_arc_net_UdpConnection_readFromAddress_R_java_net_InetSocketAddress,
	(void *) M_arc_net_UdpConnection_readObject_R_java_lang_Object,
	(void *) M_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int,
	(void *) M_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int,
	(void *) M_arc_net_UdpConnection_close,
	(void *) M_arc_net_UdpConnection_needsKeepAlive_long_R_boolean,
};

static void *vtable_arc_net_NetListener_LagListener[20] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_NetListener$LagListener_connected_arc_net_Connection,
	(void *) M_arc_net_NetListener$LagListener_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener$LagListener_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener$LagListener_idle_arc_net_Connection,
	(void *) M_arc_net_NetListener$LagListener_queue_java_lang_Runnable,
	(void *) M_arc_net_NetListener$LagListener_lambda$idle$0_arc_net_Connection,
	(void *) M_arc_net_NetListener$LagListener_lambda$received$0_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener$LagListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener$LagListener_lambda$connected$0_arc_net_Connection,
};

static void *vtable_arc_net_NetListener_ThreadedListener[20] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_NetListener$ThreadedListener_connected_arc_net_Connection,
	(void *) M_arc_net_NetListener$ThreadedListener_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener$ThreadedListener_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener$ThreadedListener_idle_arc_net_Connection,
	(void *) M_arc_net_NetListener$ThreadedListener_queue_java_lang_Runnable,
	(void *) M_arc_net_NetListener$ThreadedListener_lambda$idle$0_arc_net_Connection,
	(void *) M_arc_net_NetListener$ThreadedListener_lambda$received$0_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener$ThreadedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener$ThreadedListener_lambda$connected$0_arc_net_Connection,
};

static void *vtable_arc_net_Server_DiscoveryReceiver[15] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_Server$DiscoveryReceiver_close,
	(void *) M_arc_net_Server$DiscoveryReceiver_start,
	(void *) M_arc_net_Server$DiscoveryReceiver_lambda$start$0,
	(void *) M_arc_net_Server$DiscoveryReceiver_lambda$start$1_java_net_DatagramPacket_java_nio_ByteBuffer,
};

static void *vtable_arc_net_dns_JndiContextNameserverProvider_Inner[13] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq,
	(void *) M_arc_net_dns_JndiContextNameserverProvider$Inner_isEnabled_R_boolean,
};

static void *vtable_arc_util_Http_HttpRequest[24] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_method_arc_util_Http$HttpMethod_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_redirects_boolean_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_credentials_boolean_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_header_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_content_Array1_byte_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_content_java_io_InputStream_long_R_arc_util_Http$HttpRequest,
	(void *) M_arc_util_Http$HttpRequest_submit_arc_func_Cons,
	(void *) M_arc_util_Http$HttpRequest_block_arc_func_ConsT,
	(void *) M_arc_util_Http$HttpRequest_block_R_arc_util_Http$HttpResponse,
};

static void *vtable_mindustry_core_Platform_1[21] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_core_Platform$1_getParent_R_java_lang_ClassLoader,
	(void *) M_mindustry_core_Platform$1_getResourceAsStream_java_lang_String_R_java_io_InputStream,
	(void *) M_mindustry_core_Platform$1_loadClass_java_lang_String_boolean_R_java_lang_Class,
	(void *) M_mindustry_core_Platform$1_loadClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_core_Platform$1_getResource_java_lang_String_R_java_net_URL,
	(void *) M_mindustry_core_Platform$1_getResources_java_lang_String_R_java_util_Enumeration,
	(void *) M_mindustry_core_Platform$1_findLoadedClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_core_Platform$1_findClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_core_Platform$1_findSystemClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_core_Platform$1_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class,
};

static void *vtable_mindustry_mod_ModClassLoader[21] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_ModClassLoader_getParent_R_java_lang_ClassLoader,
	(void *) M_mindustry_mod_ModClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream,
	(void *) M_mindustry_mod_ModClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class,
	(void *) M_mindustry_mod_ModClassLoader_loadClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_mod_ModClassLoader_getResource_java_lang_String_R_java_net_URL,
	(void *) M_mindustry_mod_ModClassLoader_getResources_java_lang_String_R_java_util_Enumeration,
	(void *) M_mindustry_mod_ModClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_mod_ModClassLoader_findClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_mod_ModClassLoader_findSystemClass_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_mod_ModClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class,
};


// ============================================================================
// CLASS REGISTRATION METADATA
// ============================================================================

Class class_arc_net_Connection = {
	.nativeName = (intptr_t) "arc/net/Connection",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_Connection),
	.classVtable = (intptr_t) vtable_arc_net_Connection,
	.staticInitializer = (intptr_t) clinit_arc_net_Connection,
	.markFunction = (intptr_t) mark_arc_net_Connection,
	.access = 0x21,
	.vtableSize = 40,
};
static bool reg_arc_net_Connection = registerClass(&class_arc_net_Connection);

static jclass interfaces_arc_net_Client[] = {
	&class_arc_net_EndPoint,
	&class_java_lang_Runnable,
};

static VtableEntry vtableEntries_arc_net_Client[] = {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "run", "()V" },
	{ "addListener", "(Larc/net/NetListener;)V" },
	{ "removeListener", "(Larc/net/NetListener;)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "close", "()V" },
	{ "update", "(I)V" },
	{ "getUpdateThread", "()Ljava/lang/Thread;" },
};

static MethodMetadata methods_arc_net_Client[] = {
	{ "run", (intptr_t) M_arc_net_Client_run, 11, "()V", 1 },
	{ "addListener", (intptr_t) M_arc_net_Connection_addListener_arc_net_NetListener, 12, "(Larc/net/NetListener;)V", 1 },
	{ "removeListener", (intptr_t) M_arc_net_Connection_removeListener_arc_net_NetListener, 13, "(Larc/net/NetListener;)V", 1 },
	{ "start", (intptr_t) M_arc_net_Client_start, 14, "()V", 1 },
	{ "stop", (intptr_t) M_arc_net_Client_stop, 15, "()V", 1 },
	{ "close", (intptr_t) M_arc_net_Client_close, 16, "()V", 1 },
	{ "update", (intptr_t) M_arc_net_Client_update_int, 17, "(I)V", 1 },
	{ "getUpdateThread", (intptr_t) M_arc_net_Client_getUpdateThread_R_java_lang_Thread, 18, "()Ljava/lang/Thread;", 1 },
};

Class class_arc_net_Client = {
	.nativeName = (intptr_t) "arc/net/Client",
	.parentClass = (intptr_t) &class_arc_net_Connection,
	.size = sizeof(arc_net_Client),
	.classVtable = (intptr_t) vtable_arc_net_Client,
	.staticInitializer = (intptr_t) clinit_arc_net_Client,
	.markFunction = (intptr_t) mark_arc_net_Client,
	.access = 0x21,
	.interfaceCount = 2,
	.nativeInterfaces = (intptr_t) interfaces_arc_net_Client,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 8,
	.nativeMethods = (intptr_t) methods_arc_net_Client,
	.vtableSize = 62,
	.vtableEntries = (intptr_t) vtableEntries_arc_net_Client,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_arc_net_Client = registerClass(&class_arc_net_Client);

static jclass interfaces_arc_net_Server[] = {
	&class_arc_net_EndPoint,
	&class_java_lang_Runnable,
};

static VtableEntry vtableEntries_arc_net_Server[] = {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "run", "()V" },
	{ "addListener", "(Larc/net/NetListener;)V" },
	{ "removeListener", "(Larc/net/NetListener;)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "close", "()V" },
	{ "update", "(I)V" },
	{ "getUpdateThread", "()Ljava/lang/Thread;" },
};

static MethodMetadata methods_arc_net_Server[] = {
	{ "run", (intptr_t) M_arc_net_Server_run, 11, "()V", 1 },
	{ "addListener", (intptr_t) M_arc_net_Server_addListener_arc_net_NetListener, 12, "(Larc/net/NetListener;)V", 1 },
	{ "removeListener", (intptr_t) M_arc_net_Server_removeListener_arc_net_NetListener, 13, "(Larc/net/NetListener;)V", 1 },
	{ "start", (intptr_t) M_arc_net_Server_start, 14, "()V", 1 },
	{ "stop", (intptr_t) M_arc_net_Server_stop, 15, "()V", 1 },
	{ "close", (intptr_t) M_arc_net_Server_close, 16, "()V", 1 },
	{ "update", (intptr_t) M_arc_net_Server_update_int, 17, "(I)V", 1 },
	{ "getUpdateThread", (intptr_t) M_arc_net_Server_getUpdateThread_R_java_lang_Thread, 18, "()Ljava/lang/Thread;", 1 },
};

Class class_arc_net_Server = {
	.nativeName = (intptr_t) "arc/net/Server",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_Server),
	.classVtable = (intptr_t) vtable_arc_net_Server,
	.staticInitializer = (intptr_t) clinit_arc_net_Server,
	.markFunction = (intptr_t) mark_arc_net_Server,
	.access = 0x21,
	.interfaceCount = 2,
	.nativeInterfaces = (intptr_t) interfaces_arc_net_Server,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 8,
	.nativeMethods = (intptr_t) methods_arc_net_Server,
	.vtableSize = 41,
	.vtableEntries = (intptr_t) vtableEntries_arc_net_Server,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_arc_net_Server = registerClass(&class_arc_net_Server);

static jclass interfaces_mindustry_net_ArcNetProvider[] = {
	&class_mindustry_net_Net$NetProvider,
};

static VtableEntry vtableEntries_mindustry_net_ArcNetProvider[] = {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "sendAllServer", "(Ljava/lang/Object;Ljava/lang/Iterable;Z)V" },
	{ "sendAllServer", "(Ljava/lang/Object;Z)V" },
	{ "sendExceptServer", "(Lmindustry/net/NetConnection;Ljava/lang/Object;Z)V" },
	{ "connectClient", "(Ljava/lang/String;ILjava/lang/Runnable;)V" },
	{ "sendClient", "(Ljava/lang/Object;Z)V" },
	{ "disconnectClient", "()V" },
	{ "discoverServers", "(Larc/func/Cons;Ljava/lang/Runnable;)V" },
	{ "pingHost", "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V" },
	{ "hostServer", "(I)V" },
	{ "getConnections", "()Ljava/lang/Iterable;" },
	{ "closeServer", "()V" },
	{ "dispose", "()V" },
	{ "setConnectFilter", "(Larc/net/Server$ServerConnectFilter;)V" },
	{ "getConnectFilter", "()Larc/net/Server$ServerConnectFilter;" },
};

static MethodMetadata methods_mindustry_net_ArcNetProvider[] = {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider, 0, "()V", 1 },
	{ "sendAllServer", (intptr_t) M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean, 11, "(Ljava/lang/Object;Ljava/lang/Iterable;Z)V", 1 },
	{ "sendAllServer", (intptr_t) M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_boolean, 12, "(Ljava/lang/Object;Z)V", 1 },
	{ "sendExceptServer", (intptr_t) M_mindustry_net_ArcNetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean, 13, "(Lmindustry/net/NetConnection;Ljava/lang/Object;Z)V", 1 },
	{ "connectClient", (intptr_t) M_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable, 14, "(Ljava/lang/String;ILjava/lang/Runnable;)V", 1 },
	{ "sendClient", (intptr_t) M_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean, 15, "(Ljava/lang/Object;Z)V", 1 },
	{ "disconnectClient", (intptr_t) M_mindustry_net_ArcNetProvider_disconnectClient, 16, "()V", 1 },
	{ "discoverServers", (intptr_t) M_mindustry_net_ArcNetProvider_discoverServers_arc_func_Cons_java_lang_Runnable, 17, "(Larc/func/Cons;Ljava/lang/Runnable;)V", 1 },
	{ "pingHost", (intptr_t) M_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons, 18, "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V", 1 },
	{ "hostServer", (intptr_t) M_mindustry_net_ArcNetProvider_hostServer_int, 19, "(I)V", 1 },
	{ "getConnections", (intptr_t) M_mindustry_net_ArcNetProvider_getConnections_R_java_lang_Iterable, 20, "()Ljava/lang/Iterable;", 1 },
	{ "closeServer", (intptr_t) M_mindustry_net_ArcNetProvider_closeServer, 21, "()V", 1 },
	{ "dispose", (intptr_t) M_mindustry_net_ArcNetProvider_dispose, 22, "()V", 1 },
	{ "setConnectFilter", (intptr_t) M_mindustry_net_ArcNetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter, 23, "(Larc/net/Server$ServerConnectFilter;)V", 1 },
	{ "getConnectFilter", (intptr_t) M_mindustry_net_ArcNetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter, 24, "()Larc/net/Server$ServerConnectFilter;", 1 },
};

Class class_mindustry_net_ArcNetProvider = {
	.nativeName = (intptr_t) "mindustry/net/ArcNetProvider",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(mindustry_net_ArcNetProvider),
	.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider,
	.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider,
	.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider,
	.access = 0x21,
	.interfaceCount = 1,
	.nativeInterfaces = (intptr_t) interfaces_mindustry_net_ArcNetProvider,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 15,
	.nativeMethods = (intptr_t) methods_mindustry_net_ArcNetProvider,
	.vtableSize = 30,
	.vtableEntries = (intptr_t) vtableEntries_mindustry_net_ArcNetProvider,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_mindustry_net_ArcNetProvider = registerClass(&class_mindustry_net_ArcNetProvider);

static jclass interfaces_mindustry_mod_Mods[] = {
	&class_arc_assets_Loadable,
};

static VtableEntry vtableEntries_mindustry_mod_Mods[] = {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "loadAsync", "()V" },
	{ "loadSync", "()V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getDependencies", "()Larc/struct/Seq;" },
};

static MethodMetadata methods_mindustry_mod_Mods[] = {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods, 0, "()V", 1 },
	{ "loadAsync", (intptr_t) M_mindustry_mod_Mods_loadAsync, 11, "()V", 1 },
	{ "loadSync", (intptr_t) M_mindustry_mod_Mods_loadSync, 12, "()V", 1 },
	{ "getName", (intptr_t) M_mindustry_mod_Mods_getName_R_java_lang_String, 13, "()Ljava/lang/String;", 1 },
	{ "getDependencies", (intptr_t) M_mindustry_mod_Mods_getDependencies_R_arc_struct_Seq, 14, "()Larc/struct/Seq;", 1 },
};

Class class_mindustry_mod_Mods = {
	.nativeName = (intptr_t) "mindustry/mod/Mods",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(mindustry_mod_Mods),
	.classVtable = (intptr_t) vtable_mindustry_mod_Mods,
	.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods,
	.markFunction = (intptr_t) mark_mindustry_mod_Mods,
	.access = 0x21,
	.interfaceCount = 1,
	.nativeInterfaces = (intptr_t) interfaces_mindustry_mod_Mods,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 5,
	.nativeMethods = (intptr_t) methods_mindustry_mod_Mods,
	.vtableSize = 74,
	.vtableEntries = (intptr_t) vtableEntries_mindustry_mod_Mods,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_mindustry_mod_Mods = registerClass(&class_mindustry_mod_Mods);

Class class_mindustry_net_BeControl = {
	.nativeName = (intptr_t) "mindustry/net/BeControl",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(mindustry_net_BeControl),
	.classVtable = (intptr_t) vtable_mindustry_net_BeControl,
	.staticInitializer = (intptr_t) clinit_mindustry_net_BeControl,
	.markFunction = (intptr_t) mark_mindustry_net_BeControl,
	.access = 0x21,
	.vtableSize = 22,
};
static bool reg_mindustry_net_BeControl = registerClass(&class_mindustry_net_BeControl);

Class class_arc_net_TcpConnection = {
	.nativeName = (intptr_t) "arc/net/TcpConnection",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_TcpConnection),
	.classVtable = (intptr_t) vtable_arc_net_TcpConnection,
	.staticInitializer = (intptr_t) clinit_arc_net_TcpConnection,
	.markFunction = (intptr_t) mark_arc_net_TcpConnection,
	.access = 0x21,
	.vtableSize = 21,
};
static bool reg_arc_net_TcpConnection = registerClass(&class_arc_net_TcpConnection);

Class class_arc_net_UdpConnection = {
	.nativeName = (intptr_t) "arc/net/UdpConnection",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_UdpConnection),
	.classVtable = (intptr_t) vtable_arc_net_UdpConnection,
	.staticInitializer = (intptr_t) clinit_arc_net_UdpConnection,
	.markFunction = (intptr_t) mark_arc_net_UdpConnection,
	.access = 0x21,
	.vtableSize = 19,
};
static bool reg_arc_net_UdpConnection = registerClass(&class_arc_net_UdpConnection);

static jclass interfaces_arc_net_NetListener_LagListener[] = {
	&class_arc_net_NetListener,
};

static VtableEntry vtableEntries_arc_net_NetListener_LagListener[] = {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "connected", "(Larc/net/Connection;)V" },
	{ "disconnected", "(Larc/net/Connection;Larc/net/DcReason;)V" },
	{ "received", "(Larc/net/Connection;Ljava/lang/Object;)V" },
	{ "idle", "(Larc/net/Connection;)V" },
};

static MethodMetadata methods_arc_net_NetListener_LagListener[] = {
	{ "connected", (intptr_t) M_arc_net_NetListener$LagListener_connected_arc_net_Connection, 11, "(Larc/net/Connection;)V", 1 },
	{ "disconnected", (intptr_t) M_arc_net_NetListener$LagListener_disconnected_arc_net_Connection_arc_net_DcReason, 12, "(Larc/net/Connection;Larc/net/DcReason;)V", 1 },
	{ "received", (intptr_t) M_arc_net_NetListener$LagListener_received_arc_net_Connection_java_lang_Object, 13, "(Larc/net/Connection;Ljava/lang/Object;)V", 1 },
	{ "idle", (intptr_t) M_arc_net_NetListener$LagListener_idle_arc_net_Connection, 14, "(Larc/net/Connection;)V", 1 },
};

Class class_arc_net_NetListener$LagListener = {
	.nativeName = (intptr_t) "arc/net/NetListener$LagListener",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_NetListener$LagListener),
	.classVtable = (intptr_t) vtable_arc_net_NetListener_LagListener,
	.access = 0x21,
	.interfaceCount = 1,
	.nativeInterfaces = (intptr_t) interfaces_arc_net_NetListener_LagListener,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 4,
	.nativeMethods = (intptr_t) methods_arc_net_NetListener_LagListener,
	.vtableSize = 20,
	.vtableEntries = (intptr_t) vtableEntries_arc_net_NetListener_LagListener,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_arc_net_NetListener_LagListener = registerClass(&class_arc_net_NetListener$LagListener);

Class class_arc_net_NetListener$ThreadedListener = {
	.nativeName = (intptr_t) "arc/net/NetListener$ThreadedListener",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_NetListener$ThreadedListener),
	.classVtable = (intptr_t) vtable_arc_net_NetListener_ThreadedListener,
	.access = 0x21,
	.interfaceCount = 1,
	.nativeInterfaces = (intptr_t) interfaces_arc_net_NetListener_LagListener,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 4,
	.nativeMethods = (intptr_t) methods_arc_net_NetListener_LagListener,
	.vtableSize = 20,
	.vtableEntries = (intptr_t) vtableEntries_arc_net_NetListener_LagListener,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_arc_net_NetListener_ThreadedListener = registerClass(&class_arc_net_NetListener$ThreadedListener);

Class class_arc_net_Server$DiscoveryReceiver = {
	.nativeName = (intptr_t) "arc/net/Server$DiscoveryReceiver",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_Server$DiscoveryReceiver),
	.classVtable = (intptr_t) vtable_arc_net_Server_DiscoveryReceiver,
	.access = 0x21,
	.vtableSize = 15,
};
static bool reg_arc_net_Server_DiscoveryReceiver = registerClass(&class_arc_net_Server$DiscoveryReceiver);

Class class_arc_net_dns_JndiContextNameserverProvider$Inner = {
	.nativeName = (intptr_t) "arc/net/dns/JndiContextNameserverProvider$Inner",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_net_dns_JndiContextNameserverProvider$Inner),
	.classVtable = (intptr_t) vtable_arc_net_dns_JndiContextNameserverProvider_Inner,
	.access = 0x21,
	.vtableSize = 13,
};
static bool reg_arc_net_dns_JndiContextNameserverProvider_Inner = registerClass(&class_arc_net_dns_JndiContextNameserverProvider$Inner);

Class class_arc_util_Http$HttpRequest = {
	.nativeName = (intptr_t) "arc/util/Http$HttpRequest",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_util_Http$HttpRequest),
	.classVtable = (intptr_t) vtable_arc_util_Http_HttpRequest,
	.access = 0x21,
	.vtableSize = 24,
};
static bool reg_arc_util_Http_HttpRequest = registerClass(&class_arc_util_Http$HttpRequest);

Class class_mindustry_core_Platform$1 = {
	.nativeName = (intptr_t) "mindustry/core/Platform$1",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(mindustry_core_Platform$1),
	.classVtable = (intptr_t) vtable_mindustry_core_Platform_1,
	.access = 0x21,
	.vtableSize = 21,
};
static bool reg_mindustry_core_Platform_1 = registerClass(&class_mindustry_core_Platform$1);

Class class_mindustry_mod_ModClassLoader = {
	.nativeName = (intptr_t) "mindustry/mod/ModClassLoader",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(mindustry_mod_ModClassLoader),
	.classVtable = (intptr_t) vtable_mindustry_mod_ModClassLoader,
	.access = 0x21,
	.vtableSize = 21,
};
static bool reg_mindustry_mod_ModClassLoader = registerClass(&class_mindustry_mod_ModClassLoader);

Class class_java_lang_UnsatisfiedLinkError = {
	.nativeName = (intptr_t) "java/lang/UnsatisfiedLinkError",
	.parentClass = (intptr_t) &class_java_lang_Throwable,
	.size = sizeof(java_lang_UnsatisfiedLinkError),
	.access = 0x21,
};
static bool reg_java_lang_UnsatisfiedLinkError = registerClass(&class_java_lang_UnsatisfiedLinkError);

Class class_java_net_DatagramPacket = {
	.nativeName = (intptr_t) "java/net/DatagramPacket",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(java_net_DatagramPacket),
	.access = 0x21,
};
static bool reg_java_net_DatagramPacket = registerClass(&class_java_net_DatagramPacket);

Class class_java_net_DatagramSocket = {
	.nativeName = (intptr_t) "java/net/DatagramSocket",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(java_net_DatagramSocket),
	.access = 0x21,
};
static bool reg_java_net_DatagramSocket = registerClass(&class_java_net_DatagramSocket);

Class class_java_util_concurrent_CountDownLatch = {
	.nativeName = (intptr_t) "java/util/concurrent/CountDownLatch",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(java_util_concurrent_CountDownLatch),
	.access = 0x21,
};
static bool reg_java_util_concurrent_CountDownLatch = registerClass(&class_java_util_concurrent_CountDownLatch);

// ============================================================================
// java.net.Inet4AddressImpl & java.net.Inet6AddressImpl
// ============================================================================
typedef struct java_net_Inet4AddressImpl {
	java_lang_Object parent;
} java_net_Inet4AddressImpl;

static jobject make_ipv4(jcontext ctx, jobject hostName, uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3) {
	clinit_java_net_Inet4Address(ctx);
	jobject bytes = (jobject) createArray(ctx, &class_byte, 4);
	ARRAY_ACCESS(jbyte, bytes, 0) = (jbyte) b0;
	ARRAY_ACCESS(jbyte, bytes, 1) = (jbyte) b1;
	ARRAY_ACCESS(jbyte, bytes, 2) = (jbyte) b2;
	ARRAY_ACCESS(jbyte, bytes, 3) = (jbyte) b3;
	jobject addr = gcAlloc(ctx, &class_java_net_Inet4Address);
	init_java_net_Inet4Address_java_lang_String_Array1_byte(ctx, addr, hostName, bytes);
	return addr;
}

static jobject M_java_net_Inet4AddressImpl_getLocalHostName_R_java_lang_String(jcontext ctx, jobject self) {
	return (jobject) createStringLiteral(ctx, u8"localhost"_j);
}

static jobject M_java_net_Inet4AddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject self, jobject hostStrObj) {
	uint8_t b0 = 127, b1 = 0, b2 = 0, b3 = 1;
	if (hostStrObj) {
		const char *nativeStr = stringToNative(ctx, (jstring) hostStrObj);
		int i0 = 0, i1 = 0, i2 = 0, i3 = 0;
		if (nativeStr && sscanf(nativeStr, "%d.%d.%d.%d", &i0, &i1, &i2, &i3) == 4) {
			b0 = (uint8_t) i0;
			b1 = (uint8_t) i1;
			b2 = (uint8_t) i2;
			b3 = (uint8_t) i3;
		}
	}
	jobject addr = make_ipv4(ctx, hostStrObj, b0, b1, b2, b3);
	clinit_java_net_InetAddress(ctx);
	jobject arr = (jobject) createArray(ctx, &class_java_net_InetAddress, 1);
	ARRAY_ACCESS(jobject, arr, 0) = addr;
	return arr;
}

static jobject M_java_net_Inet4AddressImpl_getHostByAddr_Array1_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	return (jobject) createStringLiteral(ctx, u8"localhost"_j);
}

static jobject M_java_net_Inet4AddressImpl_anyLocalAddress_R_java_net_InetAddress(jcontext ctx, jobject self) {
	return make_ipv4(ctx, nullptr, 0, 0, 0, 0);
}

static jobject M_java_net_Inet4AddressImpl_loopbackAddress_R_java_net_InetAddress(jcontext ctx, jobject self) {
	return make_ipv4(ctx, (jobject) createStringLiteral(ctx, u8"localhost"_j), 127, 0, 0, 1);
}

static jbool M_java_net_Inet4AddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	return 1;
}

static void mark_java_net_Inet4AddressImpl(jobject object, jint mark, jint depth) {
	if (!object) return;
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
}

static void clinit_java_net_Inet4AddressImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void init_java_net_Inet4AddressImpl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	init_java_lang_Object(ctx, self);
}

static void *vtable_java_net_Inet4AddressImpl[] = {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_Inet4AddressImpl_getLocalHostName_R_java_lang_String,
	(void *) M_java_net_Inet4AddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress,
	(void *) M_java_net_Inet4AddressImpl_getHostByAddr_Array1_byte_R_java_lang_String,
	(void *) M_java_net_Inet4AddressImpl_anyLocalAddress_R_java_net_InetAddress,
	(void *) M_java_net_Inet4AddressImpl_loopbackAddress_R_java_net_InetAddress,
	(void *) M_java_net_Inet4AddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean,
};

static VtableEntry vtableEntries_java_net_Inet4AddressImpl[] = {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "getLocalHostName", "()Ljava/lang/String;" },
	{ "lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;" },
	{ "getHostByAddr", "([B)Ljava/lang/String;" },
	{ "anyLocalAddress", "()Ljava/net/InetAddress;" },
	{ "loopbackAddress", "()Ljava/net/InetAddress;" },
	{ "isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z" },
};

static jclass interfaces_java_net_Inet4AddressImpl[] = {
	&class_java_net_InetAddressImpl,
};

static MethodMetadata methods_java_net_Inet4AddressImpl[] = {
	{ "<init>", (intptr_t) init_java_net_Inet4AddressImpl, 0, "()V", 1 },
	{ "getLocalHostName", (intptr_t) M_java_net_Inet4AddressImpl_getLocalHostName_R_java_lang_String, 11, "()Ljava/lang/String;", 1 },
	{ "lookupAllHostAddr", (intptr_t) M_java_net_Inet4AddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, 12, "(Ljava/lang/String;)[Ljava/net/InetAddress;", 1 },
	{ "getHostByAddr", (intptr_t) M_java_net_Inet4AddressImpl_getHostByAddr_Array1_byte_R_java_lang_String, 13, "([B)Ljava/lang/String;", 1 },
	{ "anyLocalAddress", (intptr_t) M_java_net_Inet4AddressImpl_anyLocalAddress_R_java_net_InetAddress, 14, "()Ljava/net/InetAddress;", 1 },
	{ "loopbackAddress", (intptr_t) M_java_net_Inet4AddressImpl_loopbackAddress_R_java_net_InetAddress, 15, "()Ljava/net/InetAddress;", 1 },
	{ "isReachable", (intptr_t) M_java_net_Inet4AddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean, 16, "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", 1 },
};

Class class_java_net_Inet4AddressImpl = {
	.nativeName = (intptr_t) "java/net/Inet4AddressImpl",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(java_net_Inet4AddressImpl),
	.classVtable = (intptr_t) vtable_java_net_Inet4AddressImpl,
	.staticInitializer = (intptr_t) clinit_java_net_Inet4AddressImpl,
	.annotationInitializer = (intptr_t) nullptr,
	.markFunction = (intptr_t) mark_java_net_Inet4AddressImpl,
	.primitive = false,
	.arrayDimensions = 0,
	.componentClass = (intptr_t) nullptr,
	.outerClass = (intptr_t) nullptr,
	.innerClassCount = 0,
	.nativeInnerClasses = (intptr_t) nullptr,
	.access = 0x21,
	.interfaceCount = 1,
	.nativeInterfaces = (intptr_t) interfaces_java_net_Inet4AddressImpl,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 7,
	.nativeMethods = (intptr_t) methods_java_net_Inet4AddressImpl,
	.vtableSize = 17,
	.vtableEntries = (intptr_t) vtableEntries_java_net_Inet4AddressImpl,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_java_net_Inet4AddressImpl = registerClass(&class_java_net_Inet4AddressImpl);

Class class_java_net_Inet6AddressImpl = {
	.nativeName = (intptr_t) "java/net/Inet6AddressImpl",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(java_net_Inet4AddressImpl),
	.classVtable = (intptr_t) vtable_java_net_Inet4AddressImpl,
	.staticInitializer = (intptr_t) clinit_java_net_Inet4AddressImpl,
	.annotationInitializer = (intptr_t) nullptr,
	.markFunction = (intptr_t) mark_java_net_Inet4AddressImpl,
	.primitive = false,
	.arrayDimensions = 0,
	.componentClass = (intptr_t) nullptr,
	.outerClass = (intptr_t) nullptr,
	.innerClassCount = 0,
	.nativeInnerClasses = (intptr_t) nullptr,
	.access = 0x21,
	.interfaceCount = 1,
	.nativeInterfaces = (intptr_t) interfaces_java_net_Inet4AddressImpl,
	.fieldCount = 0,
	.nativeFields = (intptr_t) nullptr,
	.methodCount = 7,
	.nativeMethods = (intptr_t) methods_java_net_Inet4AddressImpl,
	.vtableSize = 17,
	.vtableEntries = (intptr_t) vtableEntries_java_net_Inet4AddressImpl,
	.anonymous = false,
	.synthetic = false,
};
static bool reg_java_net_Inet6AddressImpl = registerClass(&class_java_net_Inet6AddressImpl);

}
