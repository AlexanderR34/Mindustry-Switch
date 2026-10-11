#include "rhino/module/provider/UrlModuleSourceProvider_URLValidator.h"
#include "java/lang/Math.h"
#include "rhino/module/provider/UrlModuleSourceProvider_URLValidator.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/net/HttpURLConnection.h"
#include "java/util/Map.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "rhino/module/provider/UrlConnectionExpiryCalculator.h"
#include "rhino/module/provider/UrlModuleSourceProvider.h"
#include "java/net/URI.h"
#include "java/net/URLConnection.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_module_provider_UrlModuleSourceProvider$URLValidator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_UrlModuleSourceProvider$URLValidator *) object;
	if (self->F_uri)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uri)->clazz)->markFunction)((jobject) self->F_uri, mark, depth + 1);
	if (self->F_entityTags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entityTags)->clazz)->markFunction)((jobject) self->F_entityTags, mark, depth + 1);
}

void clinit_rhino_module_provider_UrlModuleSourceProvider$URLValidator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_provider_UrlModuleSourceProvider$URLValidator_java_net_URI_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_UrlModuleSourceProvider$URLValidator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	{
	LINE_NUMBER(196);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(197);
	((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_uri = (jref) (frame[1].o);
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_net_URLConnection_getLastModified_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URLConnection_getLastModified_R_long])(ctx, (frame[2].o));
	((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK(sp[0].o))->F_lastModified = temp0;
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getEntityTags_java_net_URLConnection_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK(sp[0].o))->F_entityTags = (jref) sp[1].o;
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_calculateExpiry_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_long(ctx, (frame[0].o), (frame[2].o), (frame[3].l), (frame[5].o));
	((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK(sp[0].o))->F_expiry = temp1;
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_updateValidator_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_boolean(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:updateValidator", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_isResourceChanged_java_net_URLConnection_R_boolean(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(207);
	if ((frame[5].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_calculateExpiry_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_long(ctx, (frame[0].o), (frame[1].o), (frame[2].l), (frame[4].o));
	((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK(sp[0].o))->F_expiry = temp0;
	}
label_2:;
	{
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_isResourceChanged_java_net_URLConnection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:isResourceChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	if ((isInstance(ctx, (frame[1].o), &class_java_net_HttpURLConnection)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_java_net_HttpURLConnection_getResponseCode_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_net_HttpURLConnection, (frame[1].o))))->vtable)[VTABLE_java_net_HttpURLConnection_getResponseCode_R_int])(ctx, (checkCast(ctx, &class_java_net_HttpURLConnection, (frame[1].o))));
	if (temp0 != (304)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(220);
	jlong temp0 = (jlong)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_lastModified;
	jlong temp1 = (jlong)((func_java_net_URLConnection_getLastModified_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_getLastModified_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_calculateExpiry_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_long(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:calculateExpiry", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(226);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"no-cache"_j));
	sp[1].o = (jobject)((func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Pragma"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_1:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Cache-Control"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(231);
	if ((frame[5].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"no-cache"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_6:;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getMaxAge_java_lang_String_R_int(ctx, (frame[0].o), (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(236);
	if ((jint(-1)) == (frame[6].i)) goto label_4;
	}
	{
	LINE_NUMBER(237);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[7].l = temp0;
	LINE_NUMBER(238);
	jlong temp1 = jlong(0);
	jlong temp2 = frame[7].l;
	sp[0].o = frame[1].o;
	LINE_NUMBER(239);
	jlong temp3 = (jlong)((func_java_net_URLConnection_getDate_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URLConnection_getDate_R_long])(ctx, sp[0].o);
	jlong temp4 = temp2 - temp3;
	LINE_NUMBER(238);
	jlong temp5 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp1, temp4);
	frame[9].l = temp5;
	LINE_NUMBER(240);
	jlong temp6 = frame[9].l;
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Age"_j));
	jint temp7 = jint(0);
	LINE_NUMBER(241);
	jint temp8 = (jint)((func_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp7);
	jlong temp9 = (jlong(temp8)) * (jlong(1000ll));
	LINE_NUMBER(240);
	jlong temp10 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp6, temp9);
	frame[11].l = temp10;
	LINE_NUMBER(242);
	frame[13].l = ((frame[7].l) - (frame[2].l));
	LINE_NUMBER(243);
	frame[15].l = ((frame[11].l) + (frame[13].l));
	LINE_NUMBER(245);
	frame[17].l = ((frame[7].l) - (frame[15].l));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (((jlong((frame[6].i))) * (jlong(1000ll))) + (frame[17].l));
	}
label_4:;
	{
	LINE_NUMBER(250);
	jlong temp0 = (jlong)((func_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Expires"_j))), (jlong(-1ll)));
	frame[6].l = temp0;
	LINE_NUMBER(252);
	if ((longCompare((frame[6].l), (jlong(-1ll)))) == 0) goto label_21;
	}
	{
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[6].l);
	}
label_21:;
	{
	LINE_NUMBER(255);
	if ((frame[4].o) != nullptr) goto label_23;
	}
	INST_LCONST(0);
	goto label_24;
label_23:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(256);
	jlong temp0 = (jlong)((func_rhino_module_provider_UrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long) resolveInterfaceMethod(ctx, &class_rhino_module_provider_UrlConnectionExpiryCalculator, INDEX_rhino_module_provider_UrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].l = temp0;
	sp += 1;
	}
label_24:;
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jint M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getMaxAge_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:getMaxAge", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"max-age"_j))));
	frame[2].i = temp0;
	LINE_NUMBER(261);
	if ((frame[2].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (61), ((frame[2].i) + (7)));
	frame[3].i = temp0;
	LINE_NUMBER(265);
	if ((frame[3].i) != (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[3].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(270);
	if ((frame[4].i) != (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	frame[5].o = sp[0].o;
	goto label_0;
	}
label_12:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))), (frame[4].i));
	frame[5].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[5].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(277);
	frame[6].o = sp[0].o;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getEntityTags_java_net_URLConnection_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:getEntityTags", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_java_net_URLConnection_getHeaderFields_R_java_util_Map) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderFields_R_java_util_Map])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ETag"_j))));
	frame[2].o = (checkCast(ctx, &class_java_util_List, sp[0].o));
	LINE_NUMBER(284);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(287);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	}
label_6:;
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_appliesTo_java_net_URI_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:appliesTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_uri;
	jint temp0 = (jint)((func_java_net_URI_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_applyConditionals_java_net_URLConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:applyConditionals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	if ((longCompare(((jlong)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_lastModified), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
	((func_java_net_URLConnection_setIfModifiedSince_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLConnection_setIfModifiedSince_long])(ctx, (frame[1].o), ((jlong)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_lastModified));
	}
label_1:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_entityTags;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_entityTags;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"If-None-Match"_j));
	sp[2].o = (jobject)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_entityTags;
	((func_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_entityNeedsRevalidation_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/UrlModuleSourceProvider$URLValidator:entityNeedsRevalidation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, ((jlong)((rhino_module_provider_UrlModuleSourceProvider$URLValidator *) NULL_CHECK((frame[0].o)))->F_expiry))) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_UrlModuleSourceProvider$URLValidator[] {
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
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_updateValidator_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_boolean,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_isResourceChanged_java_net_URLConnection_R_boolean,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_calculateExpiry_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_long,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getMaxAge_java_lang_String_R_int,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getEntityTags_java_net_URLConnection_R_java_lang_String,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_appliesTo_java_net_URI_R_boolean,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_applyConditionals_java_net_URLConnection,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_entityNeedsRevalidation_R_boolean,
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
	{ "updateValidator", "(Ljava/net/URLConnection;JLrhino/module/provider/UrlConnectionExpiryCalculator;)Z" },
	{ "isResourceChanged", "(Ljava/net/URLConnection;)Z" },
	{ "calculateExpiry", "(Ljava/net/URLConnection;JLrhino/module/provider/UrlConnectionExpiryCalculator;)J" },
	{ "getMaxAge", "(Ljava/lang/String;)I" },
	{ "getEntityTags", "(Ljava/net/URLConnection;)Ljava/lang/String;" },
	{ "appliesTo", "(Ljava/net/URI;)Z" },
	{ "applyConditionals", "(Ljava/net/URLConnection;)V" },
	{ "entityNeedsRevalidation", "()Z" },
};

static FieldMetadata fields[] {
	{ "uri", &class_java_net_URI, offsetof(rhino_module_provider_UrlModuleSourceProvider$URLValidator, F_uri), "Ljava/net/URI;", 18 },
	{ "lastModified", &class_long, offsetof(rhino_module_provider_UrlModuleSourceProvider$URLValidator, F_lastModified), "J", 18 },
	{ "entityTags", &class_java_lang_String, offsetof(rhino_module_provider_UrlModuleSourceProvider$URLValidator, F_entityTags), "Ljava/lang/String;", 18 },
	{ "expiry", &class_long, offsetof(rhino_module_provider_UrlModuleSourceProvider$URLValidator, F_expiry), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_UrlModuleSourceProvider$URLValidator_java_net_URI_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator, 0, "(Ljava/net/URI;Ljava/net/URLConnection;JLrhino/module/provider/UrlConnectionExpiryCalculator;)V", 1 },
	{ "updateValidator", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_updateValidator_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_boolean, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_updateValidator_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_boolean, "(Ljava/net/URLConnection;JLrhino/module/provider/UrlConnectionExpiryCalculator;)Z", 0 },
	{ "isResourceChanged", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_isResourceChanged_java_net_URLConnection_R_boolean, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_isResourceChanged_java_net_URLConnection_R_boolean, "(Ljava/net/URLConnection;)Z", 2 },
	{ "calculateExpiry", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_calculateExpiry_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_long, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_calculateExpiry_java_net_URLConnection_long_rhino_module_provider_UrlConnectionExpiryCalculator_R_long, "(Ljava/net/URLConnection;JLrhino/module/provider/UrlConnectionExpiryCalculator;)J", 2 },
	{ "getMaxAge", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getMaxAge_java_lang_String_R_int, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getMaxAge_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "getEntityTags", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getEntityTags_java_net_URLConnection_R_java_lang_String, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_getEntityTags_java_net_URLConnection_R_java_lang_String, "(Ljava/net/URLConnection;)Ljava/lang/String;", 2 },
	{ "appliesTo", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_appliesTo_java_net_URI_R_boolean, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_appliesTo_java_net_URI_R_boolean, "(Ljava/net/URI;)Z", 0 },
	{ "applyConditionals", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_applyConditionals_java_net_URLConnection, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_applyConditionals_java_net_URLConnection, "(Ljava/net/URLConnection;)V", 0 },
	{ "entityNeedsRevalidation", (intptr_t) M_rhino_module_provider_UrlModuleSourceProvider$URLValidator_entityNeedsRevalidation_R_boolean, VTABLE_rhino_module_provider_UrlModuleSourceProvider$URLValidator_entityNeedsRevalidation_R_boolean, "()Z", 0 },
};

Class class_rhino_module_provider_UrlModuleSourceProvider$URLValidator{
		.nativeName = (intptr_t) "rhino/module/provider/UrlModuleSourceProvider$URLValidator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_UrlModuleSourceProvider$URLValidator),
		.classVtable = (intptr_t) vtable_rhino_module_provider_UrlModuleSourceProvider$URLValidator,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_UrlModuleSourceProvider$URLValidator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_UrlModuleSourceProvider$URLValidator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_module_provider_UrlModuleSourceProvider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_UrlModuleSourceProvider$URLValidator = registerClass(&class_rhino_module_provider_UrlModuleSourceProvider$URLValidator);

}

