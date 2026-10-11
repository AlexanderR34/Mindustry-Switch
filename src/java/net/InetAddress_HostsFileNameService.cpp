#include "java/net/InetAddress_HostsFileNameService.h"
#include "java/util/Scanner.h"
#include "java/lang/StringBuilder.h"
#include "java/net/InetAddress_NameService.h"
#include "java/util/ArrayList.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FileNotFoundException.h"
#include "java/net/IPAddressUtil.h"
#include "java/net/InetAddress.h"
#include "java/net/Inet4Address.h"
#include "java/net/Inet6Address.h"
#include "java/net/InetAddress_HostsFileNameService.h"
#include "java/net/UnknownHostException.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_net_InetAddress$HostsFileNameService(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (java_net_InetAddress$HostsFileNameService *) object;
	if (self->F_hostsFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hostsFile)->clazz)->markFunction)((jobject) self->F_hostsFile, mark, depth + 1);
}

void clinit_java_net_InetAddress$HostsFileNameService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InetAddress$HostsFileNameService_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$HostsFileNameService(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(936);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(937);
	((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile = (jref) (frame[1].o);
	LINE_NUMBER(938);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_addrToString_Array1_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:addrToString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(941);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(943);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(944);
	sp[0].o = (jobject)SM_java_net_Inet4Address_numericToTextFormat_Array1_byte_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(946);
	sp[0].o = frame[1].o;
	LINE_NUMBER(947);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_convertFromIPv4MappedAddress_Array1_byte_R_Array1_byte(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(948);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(949);
	sp[0].o = (jobject)SM_java_net_Inet4Address_numericToTextFormat_Array1_byte_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)SM_java_net_Inet6Address_numericToTextFormat_Array1_byte_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(954);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_getHostByAddr_Array1_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:getHostByAddr", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(970);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(972);
	sp[0].o = (jobject)M_java_net_InetAddress$HostsFileNameService_addrToString_Array1_byte_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_FileNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(973);
	clinit_java_util_Scanner(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Scanner);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile;
	init_java_io_File_java_lang_String(ctx, sp[1].o, sp[2].o);
	init_java_util_Scanner_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[5].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(974);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextLine_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_Scanner_hasNextLine_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((func_java_util_Scanner_nextLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_Scanner_nextLine_R_java_lang_String])(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(976);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)M_java_net_InetAddress$HostsFileNameService_removeComments_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(978);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)M_java_net_InetAddress$HostsFileNameService_extractHost_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o), (frame[4].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(980);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	LINE_NUMBER(981);
	goto label_1;
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(986);
	((func_java_util_Scanner_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_Scanner_close])(ctx, (frame[5].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(973);
	INST_ASTORE(6);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	((func_java_util_Scanner_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_21;
label_6:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[6].o), (frame[7].o));
	}
label_21:;
	INST_ALOAD(6);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(990);
	goto label_22;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(986);
	frame[5].o = sp[0].o;
	LINE_NUMBER(987);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to resolve address "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" as hosts file "_j))));
	sp[2].o = (jobject)((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" not found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(992);
	if ((frame[3].o) == nullptr) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(993);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Requested address "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" resolves to an invalid entry in hosts file "_j))));
	sp[2].o = (jobject)((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(998);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:lookupAllHostAddr", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1016);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1017);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1018);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1019);
	frame[6].o = (jobject(nullptr));
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_FileNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1022);
	clinit_java_util_Scanner(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Scanner);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile;
	init_java_io_File_java_lang_String(ctx, sp[1].o, sp[2].o);
	init_java_util_Scanner_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[7].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1023);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextLine_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_Scanner_hasNextLine_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((func_java_util_Scanner_nextLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_Scanner_nextLine_R_java_lang_String])(ctx, (frame[7].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1025);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(1026);
	sp[0].o = (jobject)M_java_net_InetAddress$HostsFileNameService_removeComments_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1027);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(1028);
	sp[0].o = (jobject)M_java_net_InetAddress$HostsFileNameService_extractHostAddr_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1029);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(1030);
	sp[0].o = (jobject)M_java_net_InetAddress$HostsFileNameService_createAddressByteArray_java_lang_String_R_Array1_byte(ctx, (frame[0].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1031);
	if ((frame[6].o) != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(1032);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (jint(1)));
	frame[6].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1034);
	if ((frame[5].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(1035);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)SM_java_net_InetAddress_getByAddress_java_lang_String_Array1_byte_R_java_net_InetAddress(ctx, (frame[1].o), (frame[5].o));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1041);
	((func_java_util_Scanner_close) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_Scanner_close])(ctx, (frame[7].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(1022);
	INST_ASTORE(8);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	((func_java_util_Scanner_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_27;
label_6:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[8].o), (frame[9].o));
	}
label_27:;
	INST_ALOAD(8);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1044);
	goto label_28;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(1041);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1042);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to resolve host "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" as hosts file "_j))));
	sp[2].o = (jobject)((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" not found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(1046);
	if ((frame[6].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1047);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[6].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_net_InetAddress, temp0);
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_net_InetAddress, 1), sp[0].o));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(1049);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to resolve host "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" in hosts file "_j))));
	sp[2].o = (jobject)((java_net_InetAddress$HostsFileNameService *) NULL_CHECK((frame[0].o)))->F_hostsFile;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_removeComments_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:removeComments", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1056);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(1059);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	frame[3].i = temp0;
	if (temp0 == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(1060);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[3].i));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1062);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_createAddressByteArray_java_lang_String_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:createAddressByteArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1068);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1069);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV6_java_lang_String_R_Array1_byte(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1072);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_extractHostAddr_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:extractHostAddr", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1078);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1080);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(1082);
	frame[5].i = (jint(1));
	}
label_5:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1083);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))), (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1084);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	}
label_7:;
	{
	LINE_NUMBER(1082);
	INST_IINC(5, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1088);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$HostsFileNameService_extractHost_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$HostsFileNameService:extractHost", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1096);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1097);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1099);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(1100);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1101);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1))));
	}
label_3:;
	{
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress$HostsFileNameService[] {
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
	(void *) M_java_net_InetAddress$HostsFileNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress,
	(void *) M_java_net_InetAddress$HostsFileNameService_getHostByAddr_Array1_byte_R_java_lang_String,
	(void *) M_java_net_InetAddress$HostsFileNameService_addrToString_Array1_byte_R_java_lang_String,
	(void *) M_java_net_InetAddress$HostsFileNameService_removeComments_java_lang_String_R_java_lang_String,
	(void *) M_java_net_InetAddress$HostsFileNameService_createAddressByteArray_java_lang_String_R_Array1_byte,
	(void *) M_java_net_InetAddress$HostsFileNameService_extractHostAddr_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_java_net_InetAddress$HostsFileNameService_extractHost_java_lang_String_java_lang_String_R_java_lang_String,
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
	{ "lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;" },
	{ "getHostByAddr", "([B)Ljava/lang/String;" },
	{ "addrToString", "([B)Ljava/lang/String;" },
	{ "removeComments", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "createAddressByteArray", "(Ljava/lang/String;)[B" },
	{ "extractHostAddr", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "extractHost", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_net_InetAddress$NameService, };

static FieldMetadata fields[] {
	{ "hostsFile", &class_java_lang_String, offsetof(java_net_InetAddress$HostsFileNameService, F_hostsFile), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetAddress$HostsFileNameService_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "addrToString", (intptr_t) M_java_net_InetAddress$HostsFileNameService_addrToString_Array1_byte_R_java_lang_String, VTABLE_java_net_InetAddress$HostsFileNameService_addrToString_Array1_byte_R_java_lang_String, "([B)Ljava/lang/String;", 2 },
	{ "getHostByAddr", (intptr_t) M_java_net_InetAddress$HostsFileNameService_getHostByAddr_Array1_byte_R_java_lang_String, VTABLE_java_net_InetAddress$HostsFileNameService_getHostByAddr_Array1_byte_R_java_lang_String, "([B)Ljava/lang/String;", 1 },
	{ "lookupAllHostAddr", (intptr_t) M_java_net_InetAddress$HostsFileNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, VTABLE_java_net_InetAddress$HostsFileNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, "(Ljava/lang/String;)[Ljava/net/InetAddress;", 1 },
	{ "removeComments", (intptr_t) M_java_net_InetAddress$HostsFileNameService_removeComments_java_lang_String_R_java_lang_String, VTABLE_java_net_InetAddress$HostsFileNameService_removeComments_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "createAddressByteArray", (intptr_t) M_java_net_InetAddress$HostsFileNameService_createAddressByteArray_java_lang_String_R_Array1_byte, VTABLE_java_net_InetAddress$HostsFileNameService_createAddressByteArray_java_lang_String_R_Array1_byte, "(Ljava/lang/String;)[B", 2 },
	{ "extractHostAddr", (intptr_t) M_java_net_InetAddress$HostsFileNameService_extractHostAddr_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_net_InetAddress$HostsFileNameService_extractHostAddr_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "extractHost", (intptr_t) M_java_net_InetAddress$HostsFileNameService_extractHost_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_net_InetAddress$HostsFileNameService_extractHost_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 2 },
};

Class class_java_net_InetAddress$HostsFileNameService{
		.nativeName = (intptr_t) "java/net/InetAddress$HostsFileNameService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress$HostsFileNameService),
		.classVtable = (intptr_t) vtable_java_net_InetAddress$HostsFileNameService,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress$HostsFileNameService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress$HostsFileNameService,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress$HostsFileNameService = registerClass(&class_java_net_InetAddress$HostsFileNameService);

}

