#include "arc/net/dns/ArcDns.h"
#include "java/lang/StringBuilder.h"
#include "arc/net/dns/SRVRecord.h"
#include "arc/math/Rand.h"
#include "arc/net/dns/NameserverProvider.h"
#include "java/nio/charset/Charset.h"
#include "arc/util/io/Streams_OptimizedByteArrayOutputStream.h"
#include "java/net/DatagramPacket.h"
#include "arc/Application.h"
#include "java/io/DataOutput.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "java/net/DatagramSocket.h"
#include "java/net/InetAddress.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "java/net/InetSocketAddress.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "arc/net/dns/JndiContextNameserverProvider.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/net/dns/ResolvConfNameserverProvider.h"
#include "java/io/OutputStream.h"
#include "arc/net/dns/WellKnownNameserverProvider.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "arc/net/dns/ArcDns.h"
#include "java/io/DataOutputStream.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {

jint SF_arc_net_dns_ArcDns_dnsResolverPort;
jobject SF_arc_net_dns_ArcDns_nameservers;
jobject SF_arc_net_dns_ArcDns_nameserverProviders;

void mark_arc_net_dns_ArcDns(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_net_dns_ArcDns_nameservers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_net_dns_ArcDns_nameservers)->clazz)->markFunction)((jobject) SF_arc_net_dns_ArcDns_nameservers, mark, depth + 1);
		if (SF_arc_net_dns_ArcDns_nameserverProviders)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_net_dns_ArcDns_nameserverProviders)->clazz)->markFunction)((jobject) SF_arc_net_dns_ArcDns_nameserverProviders, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_net_dns_ArcDns *) object;
}

void init_arc_net_dns_ArcDns(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ArcDns:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_ArcDns(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_net_dns_ArcDns_getNameserverProviders_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ArcDns:getNameserverProviders", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_ArcDns(ctx);
	{
	LINE_NUMBER(29);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameserverProviders;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_net_dns_ArcDns_setNameserverProviders_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ArcDns:setNameserverProviders", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_ArcDns(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(34);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameserverProviders;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(35);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameserverProviders;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(36);
	SM_arc_net_dns_ArcDns_refreshNameservers(ctx);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_net_dns_ArcDns_getNameservers_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ArcDns:getNameservers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_ArcDns(ctx);
	{
	LINE_NUMBER(41);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_net_dns_ArcDns_refreshNameservers(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ArcDns:refreshNameservers", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_ArcDns(ctx);
	{
	LINE_NUMBER(45);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(47);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(48);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_arc_net_dns_ArcDns(ctx);
	sp[1].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	((func_arc_Application_getDnsServers_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getDnsServers_arc_struct_Seq, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(51);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameserverProviders;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_net_dns_NameserverProvider, sp[0].o));
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_arc_net_dns_NameserverProvider_isEnabled_R_boolean) resolveInterfaceMethod(ctx, &class_arc_net_dns_NameserverProvider, INDEX_arc_net_dns_NameserverProvider_isEnabled_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(54);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	sp[1].o = (jobject)((func_arc_net_dns_NameserverProvider_getNameservers_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_net_dns_NameserverProvider, INDEX_arc_net_dns_NameserverProvider_getNameservers_R_arc_struct_Seq, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	LINE_NUMBER(59);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[DNS] Failed to initialize provider: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	LINE_NUMBER(61);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(63);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_net_InetSocketAddress, sp[0].o));
	LINE_NUMBER(64);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[DNS] Added @ to nameservers"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(68);
	clinit_arc_net_dns_ArcDns(ctx);
	sp[0].o = (jobject)SF_arc_net_dns_ArcDns_nameservers;
	clinit_java_net_InetSocketAddress(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	sp[2].o = (jobject)SM_java_net_InetAddress_getLoopbackAddress_R_java_net_InetAddress(ctx);
	init_java_net_InetSocketAddress_java_net_InetAddress_int(ctx, sp[1].o, sp[2].o, (53));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_net_dns_ArcDns_getSrvRecords_java_lang_String_java_net_InetSocketAddress_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	return nullptr;
}

}
