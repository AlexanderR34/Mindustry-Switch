#include "rhino/module/Require.h"
#include "java/lang/StringBuilder.h"
#include "rhino/module/ModuleScript.h"
#include "java/util/HashMap.h"
#include "rhino/module/ModuleScope.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/BaseFunction.h"
#include "rhino/JavaScriptException.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "rhino/Script.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "java/lang/Exception.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "java/lang/ThreadLocal.h"
#include "java/net/URISyntaxException.h"
#include "rhino/module/ModuleScriptProvider.h"
#include "java/util/Map.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/IllegalStateException.h"
#include "java/net/URI.h"
#include "rhino/module/Require.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_module_Require_loadingModuleInterfaces;

void mark_rhino_module_Require(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_module_Require_loadingModuleInterfaces)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_module_Require_loadingModuleInterfaces)->clazz)->markFunction)((jobject) SF_rhino_module_Require_loadingModuleInterfaces, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_BaseFunction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_module_Require *) object;
	if (self->F_moduleScriptProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moduleScriptProvider)->clazz)->markFunction)((jobject) self->F_moduleScriptProvider, mark, depth + 1);
	if (self->F_nativeScope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nativeScope)->clazz)->markFunction)((jobject) self->F_nativeScope, mark, depth + 1);
	if (self->F_paths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_paths)->clazz)->markFunction)((jobject) self->F_paths, mark, depth + 1);
	if (self->F_preExec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preExec)->clazz)->markFunction)((jobject) self->F_preExec, mark, depth + 1);
	if (self->F_postExec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_postExec)->clazz)->markFunction)((jobject) self->F_postExec, mark, depth + 1);
	if (self->F_mainModuleId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainModuleId)->clazz)->markFunction)((jobject) self->F_mainModuleId, mark, depth + 1);
	if (self->F_mainExports)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainExports)->clazz)->markFunction)((jobject) self->F_mainExports, mark, depth + 1);
	if (self->F_exportedModuleInterfaces)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_exportedModuleInterfaces)->clazz)->markFunction)((jobject) self->F_exportedModuleInterfaces, mark, depth + 1);
	if (self->F_loadLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadLock)->clazz)->markFunction)((jobject) self->F_loadLock, mark, depth + 1);
}

void init_rhino_module_Require_rhino_Context_rhino_Scriptable_rhino_module_ModuleScriptProvider_rhino_Script_rhino_Script_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_Require(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(69);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainModuleId = (jref) (jobject(nullptr));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap(ctx, sp[1].o);
	((rhino_module_Require *) NULL_CHECK(sp[0].o))->F_exportedModuleInterfaces = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((rhino_module_Require *) NULL_CHECK(sp[0].o))->F_loadLock = (jref) sp[1].o;
	LINE_NUMBER(70);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_moduleScriptProvider = (jref) (frame[3].o);
	LINE_NUMBER(71);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope = (jref) (frame[2].o);
	LINE_NUMBER(72);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_sandboxed = (frame[6].i);
	LINE_NUMBER(73);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_preExec = (jref) (frame[4].o);
	LINE_NUMBER(74);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_postExec = (jref) (frame[5].o);
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	((func_rhino_module_Require_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_Require_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	if ((frame[6].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	((rhino_module_Require *) NULL_CHECK(sp[0].o))->F_paths = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"paths"_j));
	sp[2].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_paths;
	SM_rhino_module_Require_defineReadOnlyProperty_rhino_ScriptableObject_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(80);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_paths = (jref) (jobject(nullptr));
	}
label_14:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_requireMain_rhino_Context_java_lang_String_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:requireMain", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainModuleId;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainModuleId;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(104);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Main module already set to "_j))));
	sp[2].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainModuleId;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainExports;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_moduleScriptProvider;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = jobject(nullptr);
	sp[4].o = jobject(nullptr);
	sp[5].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_paths;
	sp[0].o = (jobject)((func_rhino_module_ModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript) resolveInterfaceMethod(ctx, &class_rhino_module_ModuleScriptProvider, INDEX_rhino_module_ModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(119);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(115);
	frame[4].o = sp[0].o;
	LINE_NUMBER(116);
	throwException(ctx, (frame[4].o));	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(117);
	frame[4].o = sp[0].o;
	LINE_NUMBER(118);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(121);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (jobject(nullptr)), (jint(1)));
	((rhino_module_Require *) NULL_CHECK(sp[0].o))->F_mainExports = (jref) sp[1].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(124);
	if (((jint)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_sandboxed) != 0) goto label_19;
	}
	{
	LINE_NUMBER(126);
	frame[4].o = (jobject(nullptr));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(130);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	init_java_net_URI_java_lang_String(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(133);
	goto label_21;
label_8:;
	LINE_NUMBER(131);
	INST_ASTORE(5);
label_21:;
	{
	LINE_NUMBER(136);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_net_URI_isAbsolute_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_URI_isAbsolute_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(137);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_io_File_isFile_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_File_isFile_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Module \""_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\" not found."_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_io_File_toURI_R_java_net_URI) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_File_toURI_R_java_net_URI])(ctx, (frame[5].o));
	frame[4].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)M_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[4].o), (jobject(nullptr)), (jint(1)));
	((rhino_module_Require *) NULL_CHECK(sp[0].o))->F_mainExports = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(148);
	((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainModuleId = (jref) (frame[2].o);
	LINE_NUMBER(149);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_mainExports;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_module_Require_install_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:install", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"require"_j))), (frame[0].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:call", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(164);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (jint(1))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, (frame[1].o), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"require() needs one argument"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (((jobject) &class_java_lang_String)));
	frame[5].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(170);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(171);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"./"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"../"_j))));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(173);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_module_ModuleScope)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Can't resolve relative module ID \""_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\" when require() is used outside of a module"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(179);
	frame[8].o = (checkCast(ctx, &class_rhino_module_ModuleScope, (frame[3].o)));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_rhino_module_ModuleScope_getBase_R_java_net_URI) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_module_ModuleScope_getBase_R_java_net_URI])(ctx, (frame[8].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_rhino_module_ModuleScope_getUri_R_java_net_URI) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_module_ModuleScope_getUri_R_java_net_URI])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_java_net_URI_resolve_java_lang_String_R_java_net_URI) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI])(ctx, (frame[9].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(184);
	if ((frame[7].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, (frame[6].o));
	frame[5].o = sp[0].o;
	goto label_7;
	}
label_14:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_java_net_URI_relativize_java_net_URI_R_java_net_URI) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_net_URI_relativize_java_net_URI_R_java_net_URI])(ctx, (frame[7].o), (frame[9].o));
	sp[0].o = (jobject)((func_java_net_URI_resolve_java_lang_String_R_java_net_URI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[5].o), (jint(0)));
	if (temp0 != (46)) goto label_7;
	}
	{
	LINE_NUMBER(194);
	if (((jint)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_sandboxed) == 0) goto label_18;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Module \""_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\" is not contained in sandbox."_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, (frame[6].o));
	frame[5].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)M_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[5].o), (frame[6].o), (frame[7].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:construct", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, (frame[1].o), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"require() can not be invoked as a constructor"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:getExportedModuleInterface", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_exportedModuleInterfaces;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	frame[6].o = (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	LINE_NUMBER(215);
	if ((frame[6].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(216);
	if ((frame[5].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(217);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Attempt to set main module after it was loaded"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_19:;
	{
	LINE_NUMBER(224);
	clinit_rhino_module_Require(ctx);
	sp[0].o = (jobject)SF_rhino_module_Require_loadingModuleInterfaces;
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[7].o = (checkCast(ctx, &class_java_util_Map, sp[0].o));
	LINE_NUMBER(226);
	if ((frame[7].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[2].o));
	frame[6].o = (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	LINE_NUMBER(228);
	if ((frame[6].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_25:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_loadLock;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_exportedModuleInterfaces;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	frame[6].o = (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	LINE_NUMBER(244);
	if ((frame[6].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(245);
	sp[0].o = frame[6].o;
	monitorExit(ctx, (frame[8].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)M_rhino_module_Require_getModule_rhino_Context_java_lang_String_java_net_URI_java_net_URI_R_rhino_module_ModuleScript(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(249);
	if (((jint)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_sandboxed) == 0) goto label_32;
	}
	{
	jint temp0 = (jint)((func_rhino_module_ModuleScript_isSandboxed_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_module_ModuleScript_isSandboxed_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_32;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Module \""_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\" is not contained in sandbox."_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(255);
	if ((frame[7].o) != nullptr) goto label_35;
	}
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(256);
	if ((frame[10].i) == 0) goto label_38;
	}
	{
	LINE_NUMBER(257);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(258);
	clinit_rhino_module_Require(ctx);
	sp[0].o = (jobject)SF_rhino_module_Require_loadingModuleInterfaces;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_38:;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[2].o), (frame[6].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)M_rhino_module_Require_executeModuleScript_rhino_Context_java_lang_String_rhino_Scriptable_rhino_module_ModuleScript_boolean_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[6].o), (frame[9].o), (frame[5].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(274);
	if ((frame[6].o) == (frame[11].o)) goto label_1;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[2].o), (frame[11].o));
	LINE_NUMBER(276);
	frame[6].o = (frame[11].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(283);
	if ((frame[10].i) == 0) goto label_44;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_exportedModuleInterfaces;
	((func_java_util_Map_putAll_java_util_Map) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_putAll_java_util_Map, sp[0].o))(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(291);
	clinit_rhino_module_Require(ctx);
	sp[0].o = (jobject)SF_rhino_module_Require_loadingModuleInterfaces;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	goto label_44;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(278);
	frame[11].o = sp[0].o;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[2].o));
	LINE_NUMBER(281);
	throwException(ctx, (frame[11].o));	}
label_4:;
	LINE_NUMBER(283);
	INST_ASTORE(12);
	popExceptionFrame(frameRef);
	INST_ILOAD(10);
	if ((--sp)->i == 0) goto label_49;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_exportedModuleInterfaces;
	((func_java_util_Map_putAll_java_util_Map) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_putAll_java_util_Map, sp[0].o))(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(291);
	clinit_rhino_module_Require(ctx);
	sp[0].o = (jobject)SF_rhino_module_Require_loadingModuleInterfaces;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_49:;
	{
	LINE_NUMBER(293);
	throwException(ctx, (frame[12].o));	}
label_44:;
	{
	LINE_NUMBER(294);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_52;
label_10:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(13);
	INST_ATHROW();
	label_52:;
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_executeModuleScript_rhino_Context_java_lang_String_rhino_Scriptable_rhino_module_ModuleScript_boolean_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:executeModuleScript", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_rhino_module_ModuleScript_getUri_R_java_net_URI) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_module_ModuleScript_getUri_R_java_net_URI])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_rhino_module_ModuleScript_getBase_R_java_net_URI) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_module_ModuleScript_getBase_R_java_net_URI])(ctx, (frame[4].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(304);
	SM_rhino_module_Require_defineReadOnlyProperty_rhino_ScriptableObject_java_lang_String_java_lang_Object(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"id"_j))), (frame[2].o));
	LINE_NUMBER(305);
	if (((jint)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_sandboxed) != 0) goto label_5;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[6].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uri"_j));
	sp[2].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, (frame[7].o));
	SM_rhino_module_Require_defineReadOnlyProperty_rhino_ScriptableObject_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(308);
	clinit_rhino_module_ModuleScope(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_ModuleScope);
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	init_rhino_module_ModuleScope_rhino_Scriptable_java_net_URI_java_net_URI(ctx, sp[0].o, sp[1].o, (frame[7].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(313);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"exports"_j))), (frame[9].o), (frame[3].o));
	LINE_NUMBER(314);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"module"_j))), (frame[9].o), (frame[6].o));
	LINE_NUMBER(315);
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"exports"_j))), (frame[6].o), (frame[3].o));
	LINE_NUMBER(316);
	((func_rhino_module_Require_install_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_Require_install_rhino_Scriptable])(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(317);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(318);
	SM_rhino_module_Require_defineReadOnlyProperty_rhino_ScriptableObject_java_lang_String_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"main"_j))), (frame[6].o));
	}
label_12:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_preExec;
	SM_rhino_module_Require_executeOptionalScript_rhino_Script_rhino_Context_rhino_Scriptable(ctx, sp[0].o, (frame[1].o), (frame[9].o));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_rhino_module_ModuleScript_getScript_R_rhino_Script) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_module_ModuleScript_getScript_R_rhino_Script])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Script, INDEX_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[9].o));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_postExec;
	SM_rhino_module_Require_executeOptionalScript_rhino_Script_rhino_Context_rhino_Scriptable(ctx, sp[0].o, (frame[1].o), (frame[9].o));
	LINE_NUMBER(323);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	sp[2].o = frame[6].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"exports"_j));
	LINE_NUMBER(324);
	sp[2].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_module_Require_executeOptionalScript_rhino_Script_rhino_Context_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:executeOptionalScript", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_Require(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(329);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Script, INDEX_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_module_Require_defineReadOnlyProperty_rhino_ScriptableObject_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:defineReadOnlyProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_Require(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(336);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(337);
	((func_rhino_ScriptableObject_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_setAttributes_java_lang_String_int])(ctx, (frame[0].o), (frame[1].o), (jint(5)));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_getModule_rhino_Context_java_lang_String_java_net_URI_java_net_URI_R_rhino_module_ModuleScript(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:getModule", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_moduleScriptProvider;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = frame[4].o;
	sp[5].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_paths;
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_rhino_module_ModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript) resolveInterfaceMethod(ctx, &class_rhino_module_ModuleScriptProvider, INDEX_rhino_module_ModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(345);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_module_Require *) NULL_CHECK((frame[0].o)))->F_nativeScope;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Module \""_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\" not found."_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_throwError_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_JavaScriptException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(349);
	INST_ALOAD(5);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(350);
	frame[5].o = sp[0].o;
	LINE_NUMBER(351);
	throwException(ctx, (frame[5].o));	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(352);
	frame[5].o = sp[0].o;
	LINE_NUMBER(353);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[5].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_module_Require_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"require"_j)));
	}

	popStackFrame(ctx);
}

jint M_rhino_module_Require_getArity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:getArity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_rhino_module_Require_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_rhino_module_Require(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_BaseFunction(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/Require:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_Require(ctx);
	{
	LINE_NUMBER(47);
	clinit_java_lang_ThreadLocal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ThreadLocal);
	init_java_lang_ThreadLocal(ctx, sp[0].o);
	clinit_rhino_module_Require(ctx);
	SF_rhino_module_Require_loadingModuleInterfaces = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_Require[] {
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
	(void *) M_rhino_BaseFunction_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
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
	(void *) M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_BaseFunction_getTypeOf_R_java_lang_String,
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
	(void *) M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_BaseFunction_getMaxInstanceId_R_int,
	(void *) M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_BaseFunction_initPrototypeId_int,
	(void *) M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_module_Require_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_module_Require_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_module_Require_getArity_R_int,
	(void *) M_rhino_module_Require_getLength_R_int,
	(void *) M_rhino_module_Require_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_module_Require_requireMain_rhino_Context_java_lang_String_R_rhino_Scriptable,
	(void *) M_rhino_module_Require_install_rhino_Scriptable,
	(void *) M_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable,
	(void *) M_rhino_module_Require_executeModuleScript_rhino_Context_java_lang_String_rhino_Scriptable_rhino_module_ModuleScript_boolean_R_rhino_Scriptable,
	(void *) M_rhino_module_Require_getModule_rhino_Context_java_lang_String_java_net_URI_java_net_URI_R_rhino_module_ModuleScript,
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
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "isGeneratorFunction", "()Z" },
	{ "realFunction", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/BaseFunction;" },
	{ "setImmunePrototypeProperty", "(Ljava/lang/Object;)V" },
	{ "getClassPrototype", "()Lrhino/Scriptable;" },
	{ "createObject", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;" },
	{ "decompile", "(II)Ljava/lang/String;" },
	{ "getArity", "()I" },
	{ "getLength", "()I" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "hasPrototypeProperty", "()Z" },
	{ "getPrototypeProperty", "()Ljava/lang/Object;" },
	{ "setupDefaultPrototype", "()Ljava/lang/Object;" },
	{ "getArguments", "()Ljava/lang/Object;" },
	{ "jsConstructor", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "requireMain", "(Lrhino/Context;Ljava/lang/String;)Lrhino/Scriptable;" },
	{ "install", "(Lrhino/Scriptable;)V" },
	{ "getExportedModuleInterface", "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Z)Lrhino/Scriptable;" },
	{ "executeModuleScript", "(Lrhino/Context;Ljava/lang/String;Lrhino/Scriptable;Lrhino/module/ModuleScript;Z)Lrhino/Scriptable;" },
	{ "getModule", "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;)Lrhino/module/ModuleScript;" },
};

static FieldMetadata fields[] {
	{ "moduleScriptProvider", &class_rhino_module_ModuleScriptProvider, offsetof(rhino_module_Require, F_moduleScriptProvider), "Lrhino/module/ModuleScriptProvider;", 18 },
	{ "nativeScope", &class_rhino_Scriptable, offsetof(rhino_module_Require, F_nativeScope), "Lrhino/Scriptable;", 18 },
	{ "paths", &class_rhino_Scriptable, offsetof(rhino_module_Require, F_paths), "Lrhino/Scriptable;", 18 },
	{ "sandboxed", &class_boolean, offsetof(rhino_module_Require, F_sandboxed), "Z", 18 },
	{ "preExec", &class_rhino_Script, offsetof(rhino_module_Require, F_preExec), "Lrhino/Script;", 18 },
	{ "postExec", &class_rhino_Script, offsetof(rhino_module_Require, F_postExec), "Lrhino/Script;", 18 },
	{ "mainModuleId", &class_java_lang_String, offsetof(rhino_module_Require, F_mainModuleId), "Ljava/lang/String;", 2 },
	{ "mainExports", &class_rhino_Scriptable, offsetof(rhino_module_Require, F_mainExports), "Lrhino/Scriptable;", 2 },
	{ "exportedModuleInterfaces", &class_java_util_Map, offsetof(rhino_module_Require, F_exportedModuleInterfaces), "Ljava/util/Map;", 18 },
	{ "loadLock", &class_java_lang_Object, offsetof(rhino_module_Require, F_loadLock), "Ljava/lang/Object;", 18 },
	{ "loadingModuleInterfaces", &class_java_lang_ThreadLocal, (intptr_t) &SF_rhino_module_Require_loadingModuleInterfaces, "Ljava/lang/ThreadLocal;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_Require_rhino_Context_rhino_Scriptable_rhino_module_ModuleScriptProvider_rhino_Script_rhino_Script_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/module/ModuleScriptProvider;Lrhino/Script;Lrhino/Script;Z)V", 1 },
	{ "requireMain", (intptr_t) M_rhino_module_Require_requireMain_rhino_Context_java_lang_String_R_rhino_Scriptable, VTABLE_rhino_module_Require_requireMain_rhino_Context_java_lang_String_R_rhino_Scriptable, "(Lrhino/Context;Ljava/lang/String;)Lrhino/Scriptable;", 1 },
	{ "install", (intptr_t) M_rhino_module_Require_install_rhino_Scriptable, VTABLE_rhino_module_Require_install_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "call", (intptr_t) M_rhino_module_Require_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_module_Require_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_module_Require_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_module_Require_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "getExportedModuleInterface", (intptr_t) M_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable, VTABLE_rhino_module_Require_getExportedModuleInterface_rhino_Context_java_lang_String_java_net_URI_java_net_URI_boolean_R_rhino_Scriptable, "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Z)Lrhino/Scriptable;", 2 },
	{ "executeModuleScript", (intptr_t) M_rhino_module_Require_executeModuleScript_rhino_Context_java_lang_String_rhino_Scriptable_rhino_module_ModuleScript_boolean_R_rhino_Scriptable, VTABLE_rhino_module_Require_executeModuleScript_rhino_Context_java_lang_String_rhino_Scriptable_rhino_module_ModuleScript_boolean_R_rhino_Scriptable, "(Lrhino/Context;Ljava/lang/String;Lrhino/Scriptable;Lrhino/module/ModuleScript;Z)Lrhino/Scriptable;", 2 },
	{ "executeOptionalScript", (intptr_t) SM_rhino_module_Require_executeOptionalScript_rhino_Script_rhino_Context_rhino_Scriptable, 0, "(Lrhino/Script;Lrhino/Context;Lrhino/Scriptable;)V", 10 },
	{ "defineReadOnlyProperty", (intptr_t) SM_rhino_module_Require_defineReadOnlyProperty_rhino_ScriptableObject_java_lang_String_java_lang_Object, 0, "(Lrhino/ScriptableObject;Ljava/lang/String;Ljava/lang/Object;)V", 10 },
	{ "getModule", (intptr_t) M_rhino_module_Require_getModule_rhino_Context_java_lang_String_java_net_URI_java_net_URI_R_rhino_module_ModuleScript, VTABLE_rhino_module_Require_getModule_rhino_Context_java_lang_String_java_net_URI_java_net_URI_R_rhino_module_ModuleScript, "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;)Lrhino/module/ModuleScript;", 2 },
	{ "getFunctionName", (intptr_t) M_rhino_module_Require_getFunctionName_R_java_lang_String, VTABLE_rhino_module_Require_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getArity", (intptr_t) M_rhino_module_Require_getArity_R_int, VTABLE_rhino_module_Require_getArity_R_int, "()I", 1 },
	{ "getLength", (intptr_t) M_rhino_module_Require_getLength_R_int, VTABLE_rhino_module_Require_getLength_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_module_Require, 0, "()V", 8 },
};

Class class_rhino_module_Require{
		.nativeName = (intptr_t) "rhino/module/Require",
		.parentClass = (intptr_t) &class_rhino_BaseFunction,
		.size = sizeof(rhino_module_Require),
		.classVtable = (intptr_t) vtable_rhino_module_Require,
		.staticInitializer = (intptr_t) clinit_rhino_module_Require,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_Require,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 134,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_Require = registerClass(&class_rhino_module_Require);

}
