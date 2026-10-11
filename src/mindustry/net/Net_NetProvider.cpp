#include "mindustry/net/Net_NetProvider.h"
#include "mindustry/net/Net.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Iterable.h"
#include "arc/util/Nullable.h"
#include "arc/net/Server_ServerConnectFilter.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Net_NetProvider.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_net_Net$NetProvider(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Net$NetProvider *) object;
}

void clinit_mindustry_net_Net$NetProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net$NetProvider:sendAllServer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(420);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[5].o), (frame[1].o), (frame[3].i));
	LINE_NUMBER(421);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net$NetProvider:sendAllServer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(427);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[4].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(428);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net$NetProvider:sendExceptServer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(434);
	if ((frame[5].o) == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(435);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[5].o), (frame[2].o), (frame[3].i));
	}
label_4:;
	LINE_NUMBER(437);
	goto label_1;
label_2:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net$NetProvider_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net$NetProvider:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	((func_mindustry_net_Net$NetProvider_disconnectClient) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_disconnectClient, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(474);
	((func_mindustry_net_Net$NetProvider_closeServer) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_closeServer, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net$NetProvider:setConnectFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net$NetProvider:getConnectFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Net$NetProvider;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getConnectFilter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_net_Net$NetProvider[] {
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
	(void *) M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean,
	(void *) M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean,
	(void *) M_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_net_Net$NetProvider_dispose,
	(void *) M_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter,
	(void *) M_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter,
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

static MethodMetadata methods[] {
	{ "sendAllServer", (intptr_t) M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean, INDEX_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean, "(Ljava/lang/Object;Ljava/lang/Iterable;Z)V", 1 },
	{ "sendAllServer", (intptr_t) M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean, INDEX_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 1 },
	{ "sendExceptServer", (intptr_t) M_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean, INDEX_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean, "(Lmindustry/net/NetConnection;Ljava/lang/Object;Z)V", 1 },
	{ "connectClient", 0, INDEX_mindustry_net_Net$NetProvider_connectClient_java_lang_String_int_java_lang_Runnable, "(Ljava/lang/String;ILjava/lang/Runnable;)V", 1025 },
	{ "sendClient", 0, INDEX_mindustry_net_Net$NetProvider_sendClient_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 1025 },
	{ "disconnectClient", 0, INDEX_mindustry_net_Net$NetProvider_disconnectClient, "()V", 1025 },
	{ "discoverServers", 0, INDEX_mindustry_net_Net$NetProvider_discoverServers_arc_func_Cons_java_lang_Runnable, "(Larc/func/Cons;Ljava/lang/Runnable;)V", 1025 },
	{ "pingHost", 0, INDEX_mindustry_net_Net$NetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons, "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V", 1025 },
	{ "hostServer", 0, INDEX_mindustry_net_Net$NetProvider_hostServer_int, "(I)V", 1025 },
	{ "getConnections", 0, INDEX_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1025 },
	{ "closeServer", 0, INDEX_mindustry_net_Net$NetProvider_closeServer, "()V", 1025 },
	{ "dispose", (intptr_t) M_mindustry_net_Net$NetProvider_dispose, INDEX_mindustry_net_Net$NetProvider_dispose, "()V", 1 },
	{ "setConnectFilter", (intptr_t) M_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter, INDEX_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter, "(Larc/net/Server$ServerConnectFilter;)V", 1 },
	{ "getConnectFilter", (intptr_t) M_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter, INDEX_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter, "()Larc/net/Server$ServerConnectFilter;", 1 },
};

Class class_mindustry_net_Net$NetProvider{
		.nativeName = (intptr_t) "mindustry/net/Net$NetProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Net$NetProvider),
		.classVtable = (intptr_t) vtable_mindustry_net_Net$NetProvider,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Net$NetProvider,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Net$NetProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Net,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Net$NetProvider = registerClass(&class_mindustry_net_Net$NetProvider);

}

