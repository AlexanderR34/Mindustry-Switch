#include "mindustry/net/ArcNetProvider_PacketSerializer.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/Net.h"
#include "arc/func/Prov.h"
#include "arc/math/WindowedMean.h"
#include "arc/net/FrameworkMessage_RegisterTCP.h"
#include "java/io/DataOutput.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/io/ByteBufferInput.h"
#include "mindustry/net/Packet.h"
#include "mindustry/net/ArcNetProvider_PacketSerializer.h"
#include "arc/net/FrameworkMessage_KeepAlive.h"
#include "net/jpountz/lz4/LZ4SafeDecompressor.h"
#include "java/lang/ThreadLocal.h"
#include "arc/net/FrameworkMessage_RegisterUDP.h"
#include "java/io/DataInput.h"
#include "mindustry/net/Packets_StreamChunk.h"
#include "arc/util/io/Reads.h"
#include "arc/net/NetSerializer.h"
#include "arc/net/FrameworkMessage.h"
#include "java/lang/Object.h"
#include "arc/net/FrameworkMessage_DiscoverHost.h"
#include "arc/util/Threads.h"
#include "mindustry/net/ArcNetProvider_PacketSerializer_invoke_arc_func_Prov_3.h"
#include "mindustry/net/ArcNetProvider_PacketSerializer_invoke_arc_func_Prov_5.h"
#include "mindustry/net/ArcNetProvider_PacketSerializer_invoke_arc_func_Prov_4.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "arc/util/io/ByteBufferOutput.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"
#include "net/jpountz/lz4/LZ4Compressor.h"
#include "arc/net/FrameworkMessage_Ping.h"

extern "C" {

jbool SF_mindustry_net_ArcNetProvider$PacketSerializer_debug;
jobject SF_mindustry_net_ArcNetProvider$PacketSerializer_upload;
jobject SF_mindustry_net_ArcNetProvider$PacketSerializer_download;
jlong SF_mindustry_net_ArcNetProvider$PacketSerializer_lastUpload;
jlong SF_mindustry_net_ArcNetProvider$PacketSerializer_lastDownload;
jlong SF_mindustry_net_ArcNetProvider$PacketSerializer_uploadAccum;
jlong SF_mindustry_net_ArcNetProvider$PacketSerializer_downloadAccum;
jint SF_mindustry_net_ArcNetProvider$PacketSerializer_lastPos;

void mark_mindustry_net_ArcNetProvider$PacketSerializer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_ArcNetProvider$PacketSerializer_upload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_ArcNetProvider$PacketSerializer_upload)->clazz)->markFunction)((jobject) SF_mindustry_net_ArcNetProvider$PacketSerializer_upload, mark, depth + 1);
		if (SF_mindustry_net_ArcNetProvider$PacketSerializer_download)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_ArcNetProvider$PacketSerializer_download)->clazz)->markFunction)((jobject) SF_mindustry_net_ArcNetProvider$PacketSerializer_download, mark, depth + 1);
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
	auto self = (mindustry_net_ArcNetProvider$PacketSerializer *) object;
	if (self->F_decompressBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_decompressBuffer)->clazz)->markFunction)((jobject) self->F_decompressBuffer, mark, depth + 1);
	if (self->F_reads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reads)->clazz)->markFunction)((jobject) self->F_reads, mark, depth + 1);
	if (self->F_writes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writes)->clazz)->markFunction)((jobject) self->F_writes, mark, depth + 1);
}

void init_mindustry_net_ArcNetProvider$PacketSerializer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(479);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal(ctx, sp[1].o);
	((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK(sp[0].o))->F_decompressBuffer = (jref) sp[1].o;
	LINE_NUMBER(484);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal(ctx, sp[1].o);
	((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK(sp[0].o))->F_reads = (jref) sp[1].o;
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$PacketSerializer_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal(ctx, sp[1].o);
	((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK(sp[0].o))->F_writes = (jref) sp[1].o;
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider$PacketSerializer_read_java_nio_ByteBuffer_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:read", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(495);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(507);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(508);
	if ((frame[2].i) != (-2)) goto label_3;
	}
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_mindustry_net_ArcNetProvider$PacketSerializer_readFramework_java_nio_ByteBuffer_R_arc_net_FrameworkMessage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_readFramework_java_nio_ByteBuffer_R_arc_net_FrameworkMessage])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)SM_mindustry_net_Net_newPacket_byte_R_mindustry_net_Packet(ctx, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(513);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_net_Packet_allow_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Packet_allow_boolean_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_6;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid packet type for endpoint: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_decompressBuffer;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_java_nio_ByteBuffer, sp[0].o));
	LINE_NUMBER(515);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_getShort_R_short])(ctx, (frame[1].o));
	frame[5].i = (temp0 & (jint(65535)));
	LINE_NUMBER(516);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[1].o));
	frame[6].i = temp1;
	LINE_NUMBER(519);
	if ((frame[6].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (jint(0)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(521);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_array_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_array_R_Array1_byte])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, temp0, (frame[5].i));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(523);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_reads;
	sp[1].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[1].o);
	((func_mindustry_net_Packet_read_arc_util_io_Reads_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Packet_read_arc_util_io_Reads_int])(ctx, sp[0].o, (checkCast(ctx, &class_arc_util_io_Reads, sp[1].o)), (frame[5].i));
	LINE_NUMBER(525);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (temp1 + temp2));
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	frame[7].i = (temp0 - temp1);
	LINE_NUMBER(529);
	clinit_mindustry_net_ArcNetProvider(ctx);
	sp[0].o = (jobject)SF_mindustry_net_ArcNetProvider_decompressor;
	sp[1].o = frame[1].o;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp2, (frame[7].i), (frame[4].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (frame[5].i));
	LINE_NUMBER(533);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_reads;
	sp[1].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[1].o);
	((func_mindustry_net_Packet_read_arc_util_io_Reads_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Packet_read_arc_util_io_Reads_int])(ctx, sp[0].o, (checkCast(ctx, &class_arc_util_io_Reads, sp[1].o)), (frame[5].i));
	LINE_NUMBER(535);
	sp[0].o = frame[1].o;
	jint temp4 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (temp4 + (frame[7].i)));
	}
label_16:;
	{
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$PacketSerializer_write_java_nio_ByteBuffer_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:write", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(549);
	if ((isInstance(ctx, (frame[2].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_nio_ByteBuffer, (frame[2].o)));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[3].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(551);
	if ((isInstance(ctx, (frame[2].o), &class_arc_net_FrameworkMessage)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_arc_net_FrameworkMessage, (frame[2].o)));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (-2));
	LINE_NUMBER(553);
	((func_mindustry_net_ArcNetProvider$PacketSerializer_writeFramework_java_nio_ByteBuffer_arc_net_FrameworkMessage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_writeFramework_java_nio_ByteBuffer_arc_net_FrameworkMessage])(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(555);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_net_Packet)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_net_Packet, (frame[2].o)));
	goto label_9;
	}
label_7:;
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"All sent objects must extend Packet! Class: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)SM_mindustry_net_Net_getPacketId_mindustry_net_Packet_R_byte(ctx, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[6].i));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_decompressBuffer;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[7].o = (checkCast(ctx, &class_java_nio_ByteBuffer, sp[0].o));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[7].o), (jint(0)));
	LINE_NUMBER(561);
	sp[0].o = frame[7].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(562);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_writes;
	sp[1].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[1].o);
	((func_mindustry_net_Packet_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Packet_write_arc_util_io_Writes])(ctx, sp[0].o, (checkCast(ctx, &class_arc_util_io_Writes, sp[1].o)));
	LINE_NUMBER(564);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[7].o));
	frame[8].i = (jshort(temp2));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[8].i));
	LINE_NUMBER(570);
	if ((frame[8].i) < (36)) goto label_18;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_net_Packets$StreamChunk)) == 0) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(573);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_array_R_Array1_byte) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_array_R_Array1_byte])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[8].i));
	goto label_3;
	}
label_19:;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(577);
	clinit_mindustry_net_ArcNetProvider(ctx);
	sp[0].o = (jobject)SF_mindustry_net_ArcNetProvider_compressor;
	sp[1].o = frame[7].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[7].o));
	sp[2].o = frame[1].o;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)((func_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, temp2, temp3);
	frame[9].i = temp4;
	LINE_NUMBER(579);
	sp[0].o = frame[1].o;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (temp5 + (frame[9].i)));
	}
label_3:;
	LINE_NUMBER(592);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$PacketSerializer_writeFramework_java_nio_ByteBuffer_arc_net_FrameworkMessage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:writeFramework", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(595);
	if ((isInstance(ctx, (frame[2].o), &class_arc_net_FrameworkMessage$Ping)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_net_FrameworkMessage$Ping, (frame[2].o)));
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), ((jint)((arc_net_FrameworkMessage$Ping *) NULL_CHECK((frame[3].o)))->F_id));
	LINE_NUMBER(598);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((arc_net_FrameworkMessage$Ping *) NULL_CHECK((frame[3].o)))->F_isReply) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].i);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(599);
	if ((isInstance(ctx, (frame[2].o), &class_arc_net_FrameworkMessage$DiscoverHost)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(1)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(601);
	if ((isInstance(ctx, (frame[2].o), &class_arc_net_FrameworkMessage$KeepAlive)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(2)));
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(603);
	if ((isInstance(ctx, (frame[2].o), &class_arc_net_FrameworkMessage$RegisterUDP)) == 0) goto label_12;
	}
	{
	frame[4].o = (checkCast(ctx, &class_arc_net_FrameworkMessage$RegisterUDP, (frame[2].o)));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(3)));
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), ((jint)((arc_net_FrameworkMessage$RegisterUDP *) NULL_CHECK((frame[4].o)))->F_connectionID));
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(606);
	if ((isInstance(ctx, (frame[2].o), &class_arc_net_FrameworkMessage$RegisterTCP)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_arc_net_FrameworkMessage$RegisterTCP, (frame[2].o)));
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jint(4)));
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), ((jint)((arc_net_FrameworkMessage$RegisterTCP *) NULL_CHECK((frame[5].o)))->F_connectionID));
	}
label_7:;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider$PacketSerializer_readFramework_java_nio_ByteBuffer_R_arc_net_FrameworkMessage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:readFramework", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(613);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(615);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(616);
	clinit_arc_net_FrameworkMessage$Ping(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_FrameworkMessage$Ping);
	init_arc_net_FrameworkMessage$Ping(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(617);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[1].o));
	((arc_net_FrameworkMessage$Ping *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(618);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[1].o));
	sp += 1;
	if (temp1 != (jint(1))) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((arc_net_FrameworkMessage$Ping *) NULL_CHECK(sp[0].o))->F_isReply = sp[1].i;
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(620);
	if ((frame[2].i) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(621);
	clinit_arc_net_FrameworkMessage(ctx);
	sp[0].o = (jobject)SF_arc_net_FrameworkMessage_discoverHost;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(622);
	if ((frame[2].i) != (jint(2))) goto label_11;
	}
	{
	LINE_NUMBER(623);
	clinit_arc_net_FrameworkMessage(ctx);
	sp[0].o = (jobject)SF_arc_net_FrameworkMessage_keepAlive;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(624);
	if ((frame[2].i) != (jint(3))) goto label_13;
	}
	{
	LINE_NUMBER(625);
	clinit_arc_net_FrameworkMessage$RegisterUDP(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_FrameworkMessage$RegisterUDP);
	init_arc_net_FrameworkMessage$RegisterUDP(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(626);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[1].o));
	((arc_net_FrameworkMessage$RegisterUDP *) NULL_CHECK(sp[0].o))->F_connectionID = temp0;
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_13:;
	{
	LINE_NUMBER(628);
	if ((frame[2].i) != (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(629);
	clinit_arc_net_FrameworkMessage$RegisterTCP(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_FrameworkMessage$RegisterTCP);
	init_arc_net_FrameworkMessage$RegisterTCP(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(630);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, (frame[1].o));
	((arc_net_FrameworkMessage$RegisterTCP *) NULL_CHECK(sp[0].o))->F_connectionID = temp0;
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_17:;
	{
	LINE_NUMBER(633);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unknown framework message!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$2_R_arc_util_io_Writes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:lambda$new$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	clinit_arc_util_io_ByteBufferOutput(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_ByteBufferOutput);
	sp[2].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_decompressBuffer;
	sp[2].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[2].o);
	init_arc_util_io_ByteBufferOutput_java_nio_ByteBuffer(ctx, sp[1].o, (checkCast(ctx, &class_java_nio_ByteBuffer, sp[2].o)));
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$1_R_arc_util_io_Reads(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	clinit_arc_util_io_ByteBufferInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_ByteBufferInput);
	sp[2].o = (jobject)((mindustry_net_ArcNetProvider$PacketSerializer *) NULL_CHECK((frame[0].o)))->F_decompressBuffer;
	sp[2].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[2].o);
	init_arc_util_io_ByteBufferInput_java_nio_ByteBuffer(ctx, sp[1].o, (checkCast(ctx, &class_java_nio_ByteBuffer, sp[2].o)));
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$0_R_java_nio_ByteBuffer(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, (jint(32768)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_ArcNetProvider$PacketSerializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_net_ArcNetProvider$PacketSerializer_debug = jint(0);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$PacketSerializer:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	{
	LINE_NUMBER(488);
	clinit_arc_math_WindowedMean(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[0].o, (jint(5)));
	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	SF_mindustry_net_ArcNetProvider$PacketSerializer_upload = sp[0].o;
	clinit_arc_math_WindowedMean(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[0].o, (jint(5)));
	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	SF_mindustry_net_ArcNetProvider$PacketSerializer_download = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ArcNetProvider$PacketSerializer[] {
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
	(void *) M_mindustry_net_ArcNetProvider$PacketSerializer_write_java_nio_ByteBuffer_java_lang_Object,
	(void *) M_mindustry_net_ArcNetProvider$PacketSerializer_read_java_nio_ByteBuffer_R_java_lang_Object,
	(void *) M_arc_net_NetSerializer_getLengthLength_R_int,
	(void *) M_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int,
	(void *) M_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int,
	(void *) M_mindustry_net_ArcNetProvider$PacketSerializer_writeFramework_java_nio_ByteBuffer_arc_net_FrameworkMessage,
	(void *) M_mindustry_net_ArcNetProvider$PacketSerializer_readFramework_java_nio_ByteBuffer_R_arc_net_FrameworkMessage,
	(void *) M_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$2_R_arc_util_io_Writes,
	(void *) M_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$1_R_arc_util_io_Reads,
};

static VtableEntry vtableEntries[] {
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
	{ "write", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;)V" },
	{ "read", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;" },
	{ "getLengthLength", "()I" },
	{ "writeLength", "(Ljava/nio/ByteBuffer;I)V" },
	{ "readLength", "(Ljava/nio/ByteBuffer;)I" },
	{ "writeFramework", "(Ljava/nio/ByteBuffer;Larc/net/FrameworkMessage;)V" },
	{ "readFramework", "(Ljava/nio/ByteBuffer;)Larc/net/FrameworkMessage;" },
	{ "lambda$new$2", "()Larc/util/io/Writes;" },
	{ "lambda$new$1", "()Larc/util/io/Reads;" },
};

static jclass interfaces[] { &class_arc_net_NetSerializer, };

static FieldMetadata fields[] {
	{ "debug", &class_boolean, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_debug, "Z", 26 },
	{ "decompressBuffer", &class_java_lang_ThreadLocal, offsetof(mindustry_net_ArcNetProvider$PacketSerializer, F_decompressBuffer), "Ljava/lang/ThreadLocal;", 0 },
	{ "reads", &class_java_lang_ThreadLocal, offsetof(mindustry_net_ArcNetProvider$PacketSerializer, F_reads), "Ljava/lang/ThreadLocal;", 0 },
	{ "writes", &class_java_lang_ThreadLocal, offsetof(mindustry_net_ArcNetProvider$PacketSerializer, F_writes), "Ljava/lang/ThreadLocal;", 0 },
	{ "upload", &class_arc_math_WindowedMean, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_upload, "Larc/math/WindowedMean;", 8 },
	{ "download", &class_arc_math_WindowedMean, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_download, "Larc/math/WindowedMean;", 8 },
	{ "lastUpload", &class_long, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_lastUpload, "J", 8 },
	{ "lastDownload", &class_long, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_lastDownload, "J", 8 },
	{ "uploadAccum", &class_long, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_uploadAccum, "J", 8 },
	{ "downloadAccum", &class_long, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_downloadAccum, "J", 8 },
	{ "lastPos", &class_int, (intptr_t) &SF_mindustry_net_ArcNetProvider$PacketSerializer_lastPos, "I", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider$PacketSerializer, 0, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_net_ArcNetProvider$PacketSerializer_read_java_nio_ByteBuffer_R_java_lang_Object, VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_read_java_nio_ByteBuffer_R_java_lang_Object, "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", 1 },
	{ "write", (intptr_t) M_mindustry_net_ArcNetProvider$PacketSerializer_write_java_nio_ByteBuffer_java_lang_Object, VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_write_java_nio_ByteBuffer_java_lang_Object, "(Ljava/nio/ByteBuffer;Ljava/lang/Object;)V", 1 },
	{ "writeFramework", (intptr_t) M_mindustry_net_ArcNetProvider$PacketSerializer_writeFramework_java_nio_ByteBuffer_arc_net_FrameworkMessage, VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_writeFramework_java_nio_ByteBuffer_arc_net_FrameworkMessage, "(Ljava/nio/ByteBuffer;Larc/net/FrameworkMessage;)V", 1 },
	{ "readFramework", (intptr_t) M_mindustry_net_ArcNetProvider$PacketSerializer_readFramework_java_nio_ByteBuffer_R_arc_net_FrameworkMessage, VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_readFramework_java_nio_ByteBuffer_R_arc_net_FrameworkMessage, "(Ljava/nio/ByteBuffer;)Larc/net/FrameworkMessage;", 1 },
	{ "lambda$new$2", (intptr_t) M_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$2_R_arc_util_io_Writes, VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$2_R_arc_util_io_Writes, "()Larc/util/io/Writes;", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$1_R_arc_util_io_Reads, VTABLE_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$1_R_arc_util_io_Reads, "()Larc/util/io/Reads;", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_net_ArcNetProvider$PacketSerializer_lambda$new$0_R_java_nio_ByteBuffer, 0, "()Ljava/nio/ByteBuffer;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_ArcNetProvider$PacketSerializer, 0, "()V", 8 },
};

Class class_mindustry_net_ArcNetProvider$PacketSerializer{
		.nativeName = (intptr_t) "mindustry/net/ArcNetProvider$PacketSerializer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_ArcNetProvider$PacketSerializer),
		.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider$PacketSerializer,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider$PacketSerializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider$PacketSerializer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_ArcNetProvider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_ArcNetProvider$PacketSerializer = registerClass(&class_mindustry_net_ArcNetProvider$PacketSerializer);

}

