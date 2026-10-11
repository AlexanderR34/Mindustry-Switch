#include "rhino/ImporterTopLevel.h"
#include "rhino/ImporterTopLevel.h"
#include "rhino/NativeJavaClass.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Undefined.h"
#include "rhino/ObjArray.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/TopLevel.h"
#include "rhino/NativeJavaPackage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_rhino_ImporterTopLevel_IMPORTER_TAG;
jint SF_rhino_ImporterTopLevel_Id_constructor;
jint SF_rhino_ImporterTopLevel_Id_importClass;
jint SF_rhino_ImporterTopLevel_Id_importPackage;
jint SF_rhino_ImporterTopLevel_MAX_PROTOTYPE_ID;

void mark_rhino_ImporterTopLevel(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ImporterTopLevel_IMPORTER_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ImporterTopLevel_IMPORTER_TAG)->clazz)->markFunction)((jobject) SF_rhino_ImporterTopLevel_IMPORTER_TAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_TopLevel(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ImporterTopLevel *) object;
	if (self->F_importedPackages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_importedPackages)->clazz)->markFunction)((jobject) self->F_importedPackages, mark, depth + 1);
}

void init_rhino_ImporterTopLevel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ImporterTopLevel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_rhino_TopLevel(ctx, (frame[0].o));
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_ImporterTopLevel *) NULL_CHECK(sp[0].o))->F_importedPackages = (jref) sp[1].o;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ImporterTopLevel_rhino_Context(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ImporterTopLevel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_rhino_ImporterTopLevel_rhino_Context_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ImporterTopLevel_rhino_Context_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ImporterTopLevel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	init_rhino_TopLevel(ctx, (frame[0].o));
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_ImporterTopLevel *) NULL_CHECK(sp[0].o))->F_importedPackages = (jref) sp[1].o;
	LINE_NUMBER(46);
	((func_rhino_ImporterTopLevel_initStandardObjects_rhino_Context_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_initStandardObjects_rhino_Context_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	if (((jint)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_topScopeFlag) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"global"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"JavaImporter"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_rhino_ImporterTopLevel_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:init", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ImporterTopLevel(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(55);
	clinit_rhino_ImporterTopLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ImporterTopLevel);
	init_rhino_ImporterTopLevel(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_rhino_ImporterTopLevel_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ImporterTopLevel_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[3].o), (jint(3)), (frame[1].o), (frame[2].i));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ImporterTopLevel_initStandardObjects_rhino_Context_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:initStandardObjects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject])(ctx, (frame[1].o), (frame[0].o), (frame[2].i));
	LINE_NUMBER(63);
	((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_topScopeFlag = (jint(1));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_rhino_ImporterTopLevel_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[0].o), (jint(3)), (frame[0].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(68);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(69);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[3].o));
	}
label_4:;
	{
	LINE_NUMBER(74);
	((func_rhino_ImporterTopLevel_delete_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_delete_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ImporterTopLevel_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_getPackageProperty_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = frame[3].o;
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_getPackageProperty_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_getPackageProperty_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:getPackageProperty", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(93);
	clinit_rhino_ImporterTopLevel(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	frame[3].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_importedPackages;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_importedPackages;
	sp[0].o = (jobject)((func_rhino_ObjArray_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_toArray_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(97);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(98);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(99);
	frame[6].o = (checkCast(ctx, &class_rhino_NativeJavaPackage, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object])(ctx, (frame[6].o), (frame[1].o), (frame[2].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[7].o) == nullptr) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_rhino_NativeJavaPackage)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[3].o;
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(103);
	frame[3].o = (frame[7].o);
	goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(105);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.ambig.import"_j));
	sp[1].o = frame[3].o;
	LINE_NUMBER(106);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[7].o));
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(98);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_js_construct_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:js_construct", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	clinit_rhino_ImporterTopLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ImporterTopLevel);
	init_rhino_ImporterTopLevel(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(115);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(116);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(117);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeJavaClass)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(118);
	((func_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass])(ctx, (frame[3].o), (checkCast(ctx, &class_rhino_NativeJavaClass, (frame[5].o))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(119);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeJavaPackage)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(120);
	((func_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage])(ctx, (frame[3].o), (checkCast(ctx, &class_rhino_NativeJavaPackage, (frame[5].o))));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(122);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.class.not.pkg"_j));
	sp[1].o = frame[5].o;
	LINE_NUMBER(123);
	sp[1].o = (jobject)SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(115);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(131);
	((func_rhino_ImporterTopLevel_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ImporterTopLevel_setParentScope_rhino_Scriptable])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(132);
	((func_rhino_ImporterTopLevel_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ImporterTopLevel_setPrototype_rhino_Scriptable])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_js_importClass_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:js_importClass", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(138);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(139);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeJavaClass)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.class"_j));
	sp[1].o = frame[3].o;
	LINE_NUMBER(141);
	sp[1].o = (jobject)SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(143);
	((func_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_NativeJavaClass, (frame[3].o))));
	LINE_NUMBER(137);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(145);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_js_importPackage_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:js_importPackage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(150);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(151);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeJavaPackage)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.pkg"_j));
	sp[1].o = frame[3].o;
	LINE_NUMBER(153);
	sp[1].o = (jobject)SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(155);
	((func_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_NativeJavaPackage, (frame[3].o))));
	LINE_NUMBER(149);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(157);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:importPackage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_importedPackages;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_12; }
	{
	LINE_NUMBER(165);
	frame[3].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_importedPackages;
	jint temp1 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_13
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_importedPackages;
	sp[1].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	jint temp0 = (jint)((func_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(167);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_13; }
	{
	LINE_NUMBER(165);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_12
	}
label_13:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_importedPackages;
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(171);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_17:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:importClass", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(176);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[2].o), (46));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_rhino_ImporterTopLevel_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].o), (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(178);
	sp[0].o = frame[4].o;
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	if ((frame[4].o) == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.prop.defined"_j))), (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(182);
	((func_rhino_ImporterTopLevel_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ImporterTopLevel_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[0].o), (frame[3].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ImporterTopLevel_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(189);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(191);
	frame[3].i = (jint(0));
	LINE_NUMBER(192);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(193);
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(195);
	frame[3].i = (jint(1));
	LINE_NUMBER(196);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"importClass"_j)));
	LINE_NUMBER(197);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(199);
	frame[3].i = (jint(1));
	LINE_NUMBER(200);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"importPackage"_j)));
	LINE_NUMBER(201);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(203);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = (jobject)SF_rhino_ImporterTopLevel_IMPORTER_TAG;
	sp[0].o = (jobject)((func_rhino_ImporterTopLevel_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ImporterTopLevel_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:execIdCall", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[1].o;
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = (jobject)SF_rhino_ImporterTopLevel_IMPORTER_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(215);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		default: goto label_7;
	}
	}
label_4:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_js_construct_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_ImporterTopLevel(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_js_importClass_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_ImporterTopLevel(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_ImporterTopLevel_js_importPackage_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(225);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ImporterTopLevel_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_ImporterTopLevel(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:realThis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(229);
	if (((jint)((rhino_ImporterTopLevel *) NULL_CHECK((frame[0].o)))->F_topScopeFlag) == 0) goto label_1;
	}
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(234);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ImporterTopLevel)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ImporterTopLevel, (frame[1].o)));
	}

	popStackFrame(ctx);
}

jint M_rhino_ImporterTopLevel_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:findPrototypeId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	frame[2].i = (jint(0));
	LINE_NUMBER(248);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(251);
	if ((frame[5].i) != (11)) goto label_4;
	}
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(253);
	if ((frame[4].i) != (99)) goto label_7;
	}
	{
	LINE_NUMBER(254);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(255);
	frame[2].i = (jint(1));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(256);
	if ((frame[4].i) != (105)) goto label_10;
	}
	{
	LINE_NUMBER(257);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"importClass"_j)));
	LINE_NUMBER(258);
	frame[2].i = (jint(2));
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(260);
	if ((frame[5].i) != (13)) goto label_10;
	}
	{
	LINE_NUMBER(261);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"importPackage"_j)));
	LINE_NUMBER(262);
	frame[2].i = (jint(3));
	}
label_10:;
	{
	LINE_NUMBER(264);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_15:;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_ImporterTopLevel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_TopLevel(ctx);
	SF_rhino_ImporterTopLevel_Id_constructor = jint(1);
	SF_rhino_ImporterTopLevel_Id_importClass = jint(2);
	SF_rhino_ImporterTopLevel_Id_importPackage = jint(3);
	SF_rhino_ImporterTopLevel_MAX_PROTOTYPE_ID = jint(3);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ImporterTopLevel:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ImporterTopLevel(ctx);
	{
	LINE_NUMBER(36);
	clinit_rhino_ImporterTopLevel(ctx);
	SF_rhino_ImporterTopLevel_IMPORTER_TAG = (((jobject) createStringLiteral(ctx, u8"Importer"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ImporterTopLevel[] {
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
	(void *) M_rhino_ImporterTopLevel_getClassName_R_java_lang_String,
	(void *) M_rhino_ImporterTopLevel_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ImporterTopLevel_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ImporterTopLevel_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getMaxInstanceId_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ImporterTopLevel_initPrototypeId_int,
	(void *) M_rhino_ImporterTopLevel_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean,
	(void *) M_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction,
	(void *) M_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction,
	(void *) M_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable,
	(void *) M_rhino_ImporterTopLevel_initStandardObjects_rhino_Context_boolean,
	(void *) M_rhino_ImporterTopLevel_getPackageProperty_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ImporterTopLevel_js_construct_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ImporterTopLevel_js_importClass_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ImporterTopLevel_js_importPackage_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage,
	(void *) M_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass,
	(void *) M_rhino_ImporterTopLevel_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_ImporterTopLevel,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
	{ "cacheBuiltins", "(Lrhino/Scriptable;Z)V" },
	{ "getBuiltinCtor", "(Lrhino/TopLevel$Builtins;)Lrhino/BaseFunction;" },
	{ "getNativeErrorCtor", "(Lrhino/TopLevel$NativeErrors;)Lrhino/BaseFunction;" },
	{ "getBuiltinPrototype", "(Lrhino/TopLevel$Builtins;)Lrhino/Scriptable;" },
	{ "initStandardObjects", "(Lrhino/Context;Z)V" },
	{ "getPackageProperty", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "js_construct", "(Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_importClass", "([Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_importPackage", "([Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "importPackage", "(Lrhino/NativeJavaPackage;)V" },
	{ "importClass", "(Lrhino/NativeJavaClass;)V" },
	{ "realThis", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/ImporterTopLevel;" },
};

static FieldMetadata fields[] {
	{ "IMPORTER_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_ImporterTopLevel_IMPORTER_TAG, "Ljava/lang/Object;", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_ImporterTopLevel_Id_constructor, "I", 26 },
	{ "Id_importClass", &class_int, (intptr_t) &SF_rhino_ImporterTopLevel_Id_importClass, "I", 26 },
	{ "Id_importPackage", &class_int, (intptr_t) &SF_rhino_ImporterTopLevel_Id_importPackage, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_ImporterTopLevel_MAX_PROTOTYPE_ID, "I", 26 },
	{ "importedPackages", &class_rhino_ObjArray, offsetof(rhino_ImporterTopLevel, F_importedPackages), "Lrhino/ObjArray;", 18 },
	{ "topScopeFlag", &class_boolean, offsetof(rhino_ImporterTopLevel, F_topScopeFlag), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ImporterTopLevel, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ImporterTopLevel_rhino_Context, 0, "(Lrhino/Context;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ImporterTopLevel_rhino_Context_boolean, 0, "(Lrhino/Context;Z)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_ImporterTopLevel_getClassName_R_java_lang_String, VTABLE_rhino_ImporterTopLevel_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "init", (intptr_t) SM_rhino_ImporterTopLevel_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "initStandardObjects", (intptr_t) M_rhino_ImporterTopLevel_initStandardObjects_rhino_Context_boolean, VTABLE_rhino_ImporterTopLevel_initStandardObjects_rhino_Context_boolean, "(Lrhino/Context;Z)V", 1 },
	{ "has", (intptr_t) M_rhino_ImporterTopLevel_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_ImporterTopLevel_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_ImporterTopLevel_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ImporterTopLevel_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "getPackageProperty", (intptr_t) M_rhino_ImporterTopLevel_getPackageProperty_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ImporterTopLevel_getPackageProperty_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 2 },
	{ "js_construct", (intptr_t) M_rhino_ImporterTopLevel_js_construct_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ImporterTopLevel_js_construct_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_importClass", (intptr_t) M_rhino_ImporterTopLevel_js_importClass_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ImporterTopLevel_js_importClass_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_importPackage", (intptr_t) M_rhino_ImporterTopLevel_js_importPackage_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ImporterTopLevel_js_importPackage_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "importPackage", (intptr_t) M_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage, VTABLE_rhino_ImporterTopLevel_importPackage_rhino_NativeJavaPackage, "(Lrhino/NativeJavaPackage;)V", 1 },
	{ "importClass", (intptr_t) M_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass, VTABLE_rhino_ImporterTopLevel_importClass_rhino_NativeJavaClass, "(Lrhino/NativeJavaClass;)V", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_ImporterTopLevel_initPrototypeId_int, VTABLE_rhino_ImporterTopLevel_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_ImporterTopLevel_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ImporterTopLevel_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "realThis", (intptr_t) M_rhino_ImporterTopLevel_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_ImporterTopLevel, VTABLE_rhino_ImporterTopLevel_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_ImporterTopLevel, "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/ImporterTopLevel;", 2 },
	{ "findPrototypeId", (intptr_t) M_rhino_ImporterTopLevel_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_ImporterTopLevel_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_ImporterTopLevel, 0, "()V", 8 },
};

Class class_rhino_ImporterTopLevel{
		.nativeName = (intptr_t) "rhino/ImporterTopLevel",
		.parentClass = (intptr_t) &class_rhino_TopLevel,
		.size = sizeof(rhino_ImporterTopLevel),
		.classVtable = (intptr_t) vtable_rhino_ImporterTopLevel,
		.staticInitializer = (intptr_t) clinit_rhino_ImporterTopLevel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ImporterTopLevel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 125,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ImporterTopLevel = registerClass(&class_rhino_ImporterTopLevel);

}
