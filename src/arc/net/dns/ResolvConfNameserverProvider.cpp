#include "arc/net/dns/ResolvConfNameserverProvider.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/net/dns/NameserverProvider.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "java/net/InetSocketAddress.h"
#include "arc/files/Fi.h"
#include "java/io/BufferedReader.h"
#include "java/lang/Throwable.h"
#include "java/util/StringTokenizer.h"
#include "arc/net/dns/ResolvConfNameserverProvider.h"

extern "C" {


void mark_arc_net_dns_ResolvConfNameserverProvider(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_dns_ResolvConfNameserverProvider *) object;
}

void clinit_arc_net_dns_ResolvConfNameserverProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_dns_ResolvConfNameserverProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ResolvConfNameserverProvider:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_ResolvConfNameserverProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_dns_ResolvConfNameserverProvider_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ResolvConfNameserverProvider:getNameservers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(23);
	jint temp0 = (jint)M_arc_net_dns_ResolvConfNameserverProvider_tryParseResolveConf_java_lang_String_arc_struct_Seq_R_boolean(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"/etc/resolv.conf"_j))), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(25);
	jint temp0 = (jint)M_arc_net_dns_ResolvConfNameserverProvider_tryParseResolveConf_java_lang_String_arc_struct_Seq_R_boolean(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"sys:/etc/resolv.cfg"_j))), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_net_dns_ResolvConfNameserverProvider_tryParseResolveConf_java_lang_String_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ResolvConfNameserverProvider:tryParseResolveConf", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(31);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_15;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_10
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_files_Fi_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_reader_int_R_java_io_BufferedReader])(ctx, (frame[3].o), (1024));
	frame[4].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(37);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_20;
	}
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_20:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nameserver"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[2].o;
	clinit_java_net_InetSocketAddress(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	sp[2].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[6].o));
	init_java_net_InetSocketAddress_java_lang_String_int(ctx, sp[1].o, sp[2].o, (53));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	LINE_NUMBER(43);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_17:;
	{
	LINE_NUMBER(44);
	frame[6].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(45);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
label_9:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_2:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_10;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	sp -= 1;
	LINE_NUMBER(34);
	frame[5].o = sp[0].o;
	if ((frame[4].o) == nullptr) goto label_23;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_23;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_23:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_10:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(45);
	INST_ASTORE(4);
label_15:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_net_dns_ResolvConfNameserverProvider_isEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/ResolvConfNameserverProvider:isEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) != 0) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i != 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_net_dns_ResolvConfNameserverProvider[] {
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
	(void *) M_arc_net_dns_ResolvConfNameserverProvider_getNameservers_R_arc_struct_Seq,
	(void *) M_arc_net_dns_ResolvConfNameserverProvider_isEnabled_R_boolean,
	(void *) M_arc_net_dns_ResolvConfNameserverProvider_tryParseResolveConf_java_lang_String_arc_struct_Seq_R_boolean,
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
	{ "getNameservers", "()Larc/struct/Seq;" },
	{ "isEnabled", "()Z" },
	{ "tryParseResolveConf", "(Ljava/lang/String;Larc/struct/Seq;)Z" },
};

static jclass interfaces[] { &class_arc_net_dns_NameserverProvider, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_dns_ResolvConfNameserverProvider, 0, "()V", 1 },
	{ "getNameservers", (intptr_t) M_arc_net_dns_ResolvConfNameserverProvider_getNameservers_R_arc_struct_Seq, VTABLE_arc_net_dns_ResolvConfNameserverProvider_getNameservers_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "tryParseResolveConf", (intptr_t) M_arc_net_dns_ResolvConfNameserverProvider_tryParseResolveConf_java_lang_String_arc_struct_Seq_R_boolean, VTABLE_arc_net_dns_ResolvConfNameserverProvider_tryParseResolveConf_java_lang_String_arc_struct_Seq_R_boolean, "(Ljava/lang/String;Larc/struct/Seq;)Z", 2 },
	{ "isEnabled", (intptr_t) M_arc_net_dns_ResolvConfNameserverProvider_isEnabled_R_boolean, VTABLE_arc_net_dns_ResolvConfNameserverProvider_isEnabled_R_boolean, "()Z", 1 },
};

Class class_arc_net_dns_ResolvConfNameserverProvider{
		.nativeName = (intptr_t) "arc/net/dns/ResolvConfNameserverProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_dns_ResolvConfNameserverProvider),
		.classVtable = (intptr_t) vtable_arc_net_dns_ResolvConfNameserverProvider,
		.staticInitializer = (intptr_t) clinit_arc_net_dns_ResolvConfNameserverProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_dns_ResolvConfNameserverProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_dns_ResolvConfNameserverProvider = registerClass(&class_arc_net_dns_ResolvConfNameserverProvider);

}
