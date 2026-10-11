#include "rhino/module/provider/UrlModuleSourceProvider.h"
#include "rhino/module/provider/UrlModuleSourceProvider_URLValidator.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/net/URL.h"
#include "rhino/module/provider/ModuleSourceProviderBase.h"
#include "java/lang/Iterable.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FileNotFoundException.h"
#include "rhino/module/provider/UrlConnectionExpiryCalculator.h"
#include "java/io/InputStreamReader.h"
#include "rhino/module/provider/UrlModuleSourceProvider.h"
#include "java/net/URI.h"
#include "java/net/URLConnection.h"
#include "java/io/IOException.h"
#include "rhino/module/provider/DefaultUrlConnectionExpiryCalculator.h"
#include "rhino/module/provider/ParsedContentType.h"
#include "rhino/module/provider/ModuleSource.h"
#include "java/lang/RuntimeException.h"
#include "java/io/Reader.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_module_provider_UrlModuleSourceProvider(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_module_provider_ModuleSourceProviderBase(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_module_provider_UrlModuleSourceProvider *) object;
	if (self->F_privilegedUris)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_privilegedUris)->clazz)->markFunction)((jobject) self->F_privilegedUris, mark, depth + 1);
	if (self->F_fallbackUris)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallbackUris)->clazz)->markFunction)((jobject) self->F_fallbackUris, mark, depth + 1);
	if (self->F_urlConnectionExpiryCalculator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_urlConnectionExpiryCalculator)->clazz)->markFunction)((jobject) self->F_urlConnectionExpiryCalculator, mark, depth + 1);
}

void clinit_rhino_module_provider_UrlModuleSourceProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_module_provider_ModuleSourceProviderBase(ctx);
}

void init_rhino_module_provider_UrlModuleSourceProvider_java_lang_Iterable_java_lang_Iterable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_UrlModuleSourceProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(ctx);
	sp[3].o = gcAlloc(ctx, &class_rhino_module_provider_DefaultUrlConnectionExpiryCalculator);
	init_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(ctx, sp[3].o);
	init_rhino_module_provider_UrlModuleSourceProvider_java_lang_Iterable_java_lang_Iterable_rhino_module_provider_UrlConnectionExpiryCalculator(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_module_provider_UrlModuleSourceProvider_java_lang_Iterable_java_lang_Iterable_rhino_module_provider_UrlConnectionExpiryCalculator(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_UrlModuleSourceProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(56);
	init_rhino_module_provider_ModuleSourceProviderBase(ctx, (frame[0].o));
	LINE_NUMBER(57);
	((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_privilegedUris = (jref) (frame[1].o);
	LINE_NUMBER(58);
	((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_fallbackUris = (jref) (frame[2].o);
	LINE_NUMBER(59);
	((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_urlConnectionExpiryCalculator = (jref) (frame[3].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:loadFromPrivilegedLocations", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_privilegedUris;
	sp[0].o = (jobject)M_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:loadFromFallbackLocations", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_fallbackUris;
	sp[0].o = (jobject)M_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:loadFromPathList", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(73);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_net_URI, sp[0].o));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = frame[1].o;
	LINE_NUMBER(78);
	sp[1].o = (jobject)((func_java_net_URI_resolve_java_lang_String_R_java_net_URI) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[5].o;
	sp[3].o = frame[2].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_9:;
	LINE_NUMBER(82);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:loadFromUri", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(90);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".js"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_URI_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, (frame[0].o), (frame[4].o), (frame[2].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(94);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	INST_ALOAD(5);
	goto label_4;
label_3:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
label_4:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:loadFromActualUri", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(100);
	clinit_java_net_URL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URL);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_13;
	}
	INST_ACONST_NULL();
	goto label_14;
label_13:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_net_URI_toURL_R_java_net_URL) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_toURL_R_java_net_URL])(ctx, sp[0].o);
	sp++;
label_14:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, (frame[1].o));
	init_java_net_URL_java_net_URL_java_lang_String(ctx, sp[0].o, sp[2].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(101);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection])(ctx, (frame[0].o), (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(104);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_module_provider_UrlModuleSourceProvider$URLValidator)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(105);
	frame[9].o = (checkCast(ctx, &class_rhino_module_provider_UrlModuleSourceProvider$URLValidator, (frame[3].o)));
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_rhino_module_provider_UrlModuleSourceProvider$URLValidator_appliesTo_java_net_URI_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_appliesTo_java_net_URI_R_boolean])(ctx, (frame[9].o), (frame[1].o));
	if (temp0 == 0) goto label_21;
	}
	INST_ALOAD(9);
	goto label_22;
label_21:;
	INST_ACONST_NULL();
label_22:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(108);
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(109);
	frame[8].o = (jobject(nullptr));
	}
label_24:;
	{
	LINE_NUMBER(111);
	if ((frame[8].o) == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(112);
	((func_rhino_module_provider_UrlModuleSourceProvider$URLValidator_applyConditionals_java_net_URLConnection) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_applyConditionals_java_net_URLConnection])(ctx, (frame[8].o), (frame[7].o));
	}
label_0:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_7; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_FileNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(115);
	((func_java_net_URLConnection_connect) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_net_URLConnection_connect])(ctx, (frame[7].o));
	LINE_NUMBER(116);
	if ((frame[8].o) == nullptr) { popExceptionFrames(frameRef, 3); goto label_4; }
	}
	{
	sp[0].o = frame[8].o;
	sp[1].o = frame[7].o;
	jlong temp0 = frame[5].l;
	sp[2].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_urlConnectionExpiryCalculator;
	LINE_NUMBER(117);
	jint temp1 = (jint)((func_rhino_module_provider_UrlModuleSourceProvider$URLValidator_updateValidator_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_updateValidator_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 != 0) { popExceptionFrames(frameRef, 3); goto label_4; }
	}
	{
	LINE_NUMBER(119);
	M_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(120);
	clinit_rhino_module_provider_UrlModuleSourceProvider(ctx);
	sp[0].o = (jobject)SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_7; }
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_FileNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(123);
	clinit_rhino_module_provider_ModuleSource(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_provider_ModuleSource);
	sp[1].o = (jobject)SM_rhino_module_provider_UrlModuleSourceProvider_getReader_java_net_URLConnection_R_java_io_Reader(ctx, (frame[7].o));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	clinit_rhino_module_provider_UrlModuleSourceProvider$URLValidator(ctx);
	sp[4].o = gcAlloc(ctx, &class_rhino_module_provider_UrlModuleSourceProvider$URLValidator);
	sp[5].o = frame[1].o;
	sp[6].o = frame[7].o;
	jlong temp0 = frame[5].l;
	sp[7].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider *) NULL_CHECK((frame[0].o)))->F_urlConnectionExpiryCalculator;
	init_rhino_module_provider_UrlModuleSourceProvider$URLValidator_java_net_URI_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator(ctx, sp[4].o, sp[5].o, sp[6].o, temp0, sp[7].o);
	init_rhino_module_provider_ModuleSource_java_io_Reader_java_net_URI_java_net_URI_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[9].o = sp[0].o;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	sp -= 1;
	LINE_NUMBER(129);
	frame[9].o = sp[0].o;
	LINE_NUMBER(130);
	M_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(131);
	throwException(ctx, (frame[9].o));	}

	popStackFrame(ctx);
}

jobject SM_rhino_module_provider_UrlModuleSourceProvider_getReader_java_net_URLConnection_R_java_io_Reader(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:getReader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_UrlModuleSourceProvider(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[1].o = (jobject)((func_java_net_URLConnection_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getInputStream_R_java_io_InputStream])(ctx, (frame[0].o));
	sp[2].o = frame[0].o;
	LINE_NUMBER(138);
	sp[2].o = (jobject)SM_rhino_module_provider_UrlModuleSourceProvider_getCharacterEncoding_java_net_URLConnection_R_java_lang_String(ctx, sp[2].o);
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_module_provider_UrlModuleSourceProvider_getCharacterEncoding_java_net_URLConnection_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:getCharacterEncoding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_UrlModuleSourceProvider(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(142);
	clinit_rhino_module_provider_ParsedContentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_provider_ParsedContentType);
	sp[1].o = frame[0].o;
	LINE_NUMBER(143);
	sp[1].o = (jobject)((func_java_net_URLConnection_getContentType_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_URLConnection_getContentType_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_module_provider_ParsedContentType_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(145);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(149);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"text/"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"8859_1"_j)));
	}
label_7:;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"utf-8"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:close", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_net_URLConnection_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_getInputStream_R_java_io_InputStream])(ctx, (frame[1].o));
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(160);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(158);
	frame[2].o = sp[0].o;
	LINE_NUMBER(159);
	((func_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(161);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:onFailedClosingUrlConnection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:openUrlConnection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_java_net_URL_openConnection_R_java_net_URLConnection) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URL_openConnection_R_java_net_URLConnection])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_module_provider_UrlModuleSourceProvider_entityNeedsRevalidation_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider:entityNeedsRevalidation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_module_provider_UrlModuleSourceProvider$URLValidator)) == 0) goto label_1;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_module_provider_UrlModuleSourceProvider$URLValidator, (frame[1].o));
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_rhino_module_provider_UrlModuleSourceProvider$URLValidator_entityNeedsRevalidation_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_entityNeedsRevalidation_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_UrlModuleSourceProvider[] {
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
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_entityNeedsRevalidation_java_lang_Object_R_boolean,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection,
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
	{ "loadSource", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadSource", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPathArray", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "entityNeedsRevalidation", "(Ljava/lang/Object;)Z" },
	{ "loadFromUri", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPrivilegedLocations", "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromFallbackLocations", "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPathList", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Iterable;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromActualUri", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "close", "(Ljava/net/URLConnection;)V" },
	{ "onFailedClosingUrlConnection", "(Ljava/net/URLConnection;Ljava/io/IOException;)V" },
	{ "openUrlConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;" },
};

static jclass innerClasses[] {
	&class_rhino_module_provider_UrlModuleSourceProvider$URLValidator,
};

static FieldMetadata fields[] {
	{ "privilegedUris", &class_java_lang_Iterable, offsetof(rhino_module_provider_UrlModuleSourceProvider, F_privilegedUris), "Ljava/lang/Iterable;", 18 },
	{ "fallbackUris", &class_java_lang_Iterable, offsetof(rhino_module_provider_UrlModuleSourceProvider, F_fallbackUris), "Ljava/lang/Iterable;", 18 },
	{ "urlConnectionExpiryCalculator", &class_rhino_module_provider_UrlConnectionExpiryCalculator, offsetof(rhino_module_provider_UrlModuleSourceProvider, F_urlConnectionExpiryCalculator), "Lrhino/module/provider/UrlConnectionExpiryCalculator;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_UrlModuleSourceProvider_java_lang_Iterable_java_lang_Iterable, 0, "(Ljava/lang/Iterable;Ljava/lang/Iterable;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_module_provider_UrlModuleSourceProvider_java_lang_Iterable_java_lang_Iterable_rhino_module_provider_UrlConnectionExpiryCalculator, 0, "(Ljava/lang/Iterable;Ljava/lang/Iterable;Lrhino/module/provider/UrlConnectionExpiryCalculator;)V", 1 },
	{ "loadFromPrivilegedLocations", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 4 },
	{ "loadFromFallbackLocations", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 4 },
	{ "loadFromPathList", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Iterable;)Lrhino/module/provider/ModuleSource;", 2 },
	{ "loadFromUri", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 4 },
	{ "loadFromActualUri", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 4 },
	{ "getReader", (intptr_t) SM_rhino_module_provider_UrlModuleSourceProvider_getReader_java_net_URLConnection_R_java_io_Reader, 0, "(Ljava/net/URLConnection;)Ljava/io/Reader;", 10 },
	{ "getCharacterEncoding", (intptr_t) SM_rhino_module_provider_UrlModuleSourceProvider_getCharacterEncoding_java_net_URLConnection_R_java_lang_String, 0, "(Ljava/net/URLConnection;)Ljava/lang/String;", 10 },
	{ "close", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection, VTABLE_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection, "(Ljava/net/URLConnection;)V", 2 },
	{ "onFailedClosingUrlConnection", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException, VTABLE_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException, "(Ljava/net/URLConnection;Ljava/io/IOException;)V", 4 },
	{ "openUrlConnection", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection, VTABLE_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection, "(Ljava/net/URL;)Ljava/net/URLConnection;", 4 },
	{ "entityNeedsRevalidation", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider_entityNeedsRevalidation_java_lang_Object_R_boolean, VTABLE_rhino_module_provider_UrlModuleSourceProvider_entityNeedsRevalidation_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4 },
};

Class class_rhino_module_provider_UrlModuleSourceProvider{
		.nativeName = (intptr_t) "rhino/module/provider/UrlModuleSourceProvider",
		.parentClass = (intptr_t) &class_rhino_module_provider_ModuleSourceProviderBase,
		.size = sizeof(rhino_module_provider_UrlModuleSourceProvider),
		.classVtable = (intptr_t) vtable_rhino_module_provider_UrlModuleSourceProvider,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_UrlModuleSourceProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_UrlModuleSourceProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_UrlModuleSourceProvider = registerClass(&class_rhino_module_provider_UrlModuleSourceProvider);

}
