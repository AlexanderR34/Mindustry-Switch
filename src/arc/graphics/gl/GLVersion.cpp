#include "arc/graphics/gl/GLVersion.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "arc/Application_ApplicationType.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/NumberFormatException.h"
#include "arc/util/Log.h"
#include "arc/graphics/gl/GLVersion_GlType.h"
#include "arc/graphics/gl/GLVersion.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_arc_graphics_gl_GLVersion(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_GLVersion *) object;
	if (self->F_vendorString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vendorString)->clazz)->markFunction)((jobject) self->F_vendorString, mark, depth + 1);
	if (self->F_rendererString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rendererString)->clazz)->markFunction)((jobject) self->F_rendererString, mark, depth + 1);
	if (self->F_versionString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_versionString)->clazz)->markFunction)((jobject) self->F_versionString, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_arc_graphics_gl_GLVersion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_GLVersion_arc_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLVersion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[1].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_android;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_GLES;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[1].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_iOS;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_GLES;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[1].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_desktop;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_OpenGL;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(22);
	sp[0].o = frame[1].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_web;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_WebGL;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_NONE;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_GLES;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(27);
	M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"OpenGL ES (\\d(\\.\\d){0,2})"_j))), (frame[2].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_WebGL;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(30);
	M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"WebGL (\\d(\\.\\d){0,2})"_j))), (frame[2].o));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_OpenGL;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(33);
	M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"(\\d(\\.\\d){0,2})"_j))), (frame[2].o));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(35);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion = (jint(-1));
	LINE_NUMBER(36);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion = (jint(-1));
	LINE_NUMBER(37);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion = (jint(-1));
	LINE_NUMBER(38);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(39);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_9:;
	{
	LINE_NUMBER(42);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_versionString = (jref) (frame[2].o);
	LINE_NUMBER(43);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_vendorString = (jref) (frame[3].o);
	LINE_NUMBER(44);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_rendererString = (jref) (frame[4].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion:extractVersion", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, (frame[3].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(51);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[4].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))), (jint(2)));
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_majorVersion = temp0;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) >= (jint(2))) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	{
	jint temp0 = (jint)M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 2;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_minorVersion = sp[1].i;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) >= (jint(3))) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	{
	jint temp0 = (jint)M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 2;
	((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_releaseVersion = sp[1].i;
	LINE_NUMBER(57);
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(58);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Arc GL] Invalid version string: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion = (jint(2));
	LINE_NUMBER(60);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion = (jint(0));
	LINE_NUMBER(61);
	((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion = (jint(0));
	}
label_15:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion:parseInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(69);
	frame[3].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Arc GL] Error parsing number: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", assuming: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion:atLeast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(82);
	if (((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion) > (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion) != (frame[1].i)) goto label_2;
	}
	{
	if (((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion) < (frame[2].i)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion:getDebugVersionString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Type: "_j))));
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nVersion: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nVendor: "_j))));
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_vendorString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nRenderer: "_j))));
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_rendererString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLVersion_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" / "_j))));
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_vendorString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" / "_j))));
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_rendererString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" / "_j))));
	sp[1].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK((frame[0].o)))->F_versionString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLVersion[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_gl_GLVersion_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String,
	(void *) M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int,
	(void *) M_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean,
	(void *) M_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String,
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
	{ "extractVersion", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "parseInt", "(Ljava/lang/String;I)I" },
	{ "atLeast", "(II)Z" },
	{ "getDebugVersionString", "()Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_arc_graphics_gl_GLVersion$GlType,
};

static FieldMetadata fields[] {
	{ "vendorString", &class_java_lang_String, offsetof(arc_graphics_gl_GLVersion, F_vendorString), "Ljava/lang/String;", 17 },
	{ "rendererString", &class_java_lang_String, offsetof(arc_graphics_gl_GLVersion, F_rendererString), "Ljava/lang/String;", 17 },
	{ "versionString", &class_java_lang_String, offsetof(arc_graphics_gl_GLVersion, F_versionString), "Ljava/lang/String;", 17 },
	{ "type", &class_arc_graphics_gl_GLVersion$GlType, offsetof(arc_graphics_gl_GLVersion, F_type), "Larc/graphics/gl/GLVersion$GlType;", 17 },
	{ "majorVersion", &class_int, offsetof(arc_graphics_gl_GLVersion, F_majorVersion), "I", 1 },
	{ "minorVersion", &class_int, offsetof(arc_graphics_gl_GLVersion, F_minorVersion), "I", 1 },
	{ "releaseVersion", &class_int, offsetof(arc_graphics_gl_GLVersion, F_releaseVersion), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLVersion_arc_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String, 0, "(Larc/Application$ApplicationType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "extractVersion", (intptr_t) M_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String, VTABLE_arc_graphics_gl_GLVersion_extractVersion_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "parseInt", (intptr_t) M_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int, VTABLE_arc_graphics_gl_GLVersion_parseInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 2 },
	{ "atLeast", (intptr_t) M_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean, VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean, "(II)Z", 1 },
	{ "getDebugVersionString", (intptr_t) M_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String, VTABLE_arc_graphics_gl_GLVersion_getDebugVersionString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_graphics_gl_GLVersion_toString_R_java_lang_String, VTABLE_arc_graphics_gl_GLVersion_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_gl_GLVersion{
		.nativeName = (intptr_t) "arc/graphics/gl/GLVersion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_GLVersion),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLVersion,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLVersion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLVersion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLVersion = registerClass(&class_arc_graphics_gl_GLVersion);

}
