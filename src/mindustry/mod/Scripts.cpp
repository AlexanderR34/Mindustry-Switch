#include "mindustry/mod/Scripts.h"
#include "rhino/ImporterTopLevel.h"
#include "rhino/NativeArray.h"
#include "rhino/Scriptable.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "rhino/Undefined.h"
#include "mindustry/mod/Scripts_ScriptModuleProvider.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/Throwable.h"
#include "arc/util/Log_LogLevel.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "rhino/module/provider/ModuleSourceProvider.h"
#include "arc/Files.h"
#include "rhino/Context.h"
#include "arc/util/Time.h"
#include "mindustry/core/Platform.h"
#include "rhino/module/ModuleScriptProvider.h"
#include "rhino/NativeJavaObject.h"
#include "java/lang/Object.h"
#include "rhino/module/RequireBuilder.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/mod/Scripts.h"
#include "rhino/module/Require.h"
#include "rhino/module/provider/SoftCachingModuleScriptProvider.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_mod_Scripts(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Scripts *) object;
	if (self->F_context)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_context)->clazz)->markFunction)((jobject) self->F_context, mark, depth + 1);
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
	if (self->F_currentMod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentMod)->clazz)->markFunction)((jobject) self->F_currentMod, mark, depth + 1);
}

void clinit_mindustry_mod_Scripts(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Scripts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Scripts(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (jobject(nullptr));
	LINE_NUMBER(25);
	SM_arc_util_Time_mark(ctx);
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)((func_mindustry_core_Platform_getScriptContext_R_rhino_Context) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_getScriptContext_R_rhino_Context, sp[1].o))(ctx, sp[1].o);
	((mindustry_mod_Scripts *) NULL_CHECK(sp[0].o))->F_context = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_rhino_ImporterTopLevel(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ImporterTopLevel);
	sp[2].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_context;
	init_rhino_ImporterTopLevel_rhino_Context(ctx, sp[1].o, sp[2].o);
	((mindustry_mod_Scripts *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	LINE_NUMBER(30);
	clinit_rhino_module_RequireBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_RequireBuilder);
	init_rhino_module_RequireBuilder(ctx, sp[0].o);
	clinit_rhino_module_provider_SoftCachingModuleScriptProvider(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_module_provider_SoftCachingModuleScriptProvider);
	clinit_mindustry_mod_Scripts$ScriptModuleProvider(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_mod_Scripts$ScriptModuleProvider);
	init_mindustry_mod_Scripts$ScriptModuleProvider_mindustry_mod_Scripts(ctx, sp[2].o, (frame[0].o));
	init_rhino_module_provider_SoftCachingModuleScriptProvider_rhino_module_provider_ModuleSourceProvider(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(1);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder])(ctx, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_context;
	sp[2].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)((func_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_scope;
	((func_rhino_module_Require_install_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_Require_install_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"scripts/global.js"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"global.js"_j))), (jint(0)));
	if (temp1 != 0) goto label_9;
	}
	{
	LINE_NUMBER(35);
	((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_errored = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(37);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Time to load script engine: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)SM_arc_util_Time_elapsed_R_float(ctx);
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Scripts_hasErrored_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:hasErrored", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return ((jint)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_errored);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:runConsole", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_context;
	sp[1].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)((func_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"console.js"_j))), (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(47);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_NativeJavaObject)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_rhino_NativeJavaObject, (frame[2].o)));
	sp[0].o = (jobject)((func_rhino_NativeJavaObject_unwrap_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeJavaObject_unwrap_R_java_lang_Object])(ctx, (frame[3].o));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(48);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(49);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Undefined)) == 0) goto label_9;
	}
	{
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(50);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_10;
	}
	{
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(51);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_int, 1))) == 0) goto label_12;
	}
	{
	frame[4].o = (checkCast(ctx, getArrayClass(&class_int, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_int_R_java_lang_String(ctx, (frame[4].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(52);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_float, 1))) == 0) goto label_14;
	}
	{
	frame[5].o = (checkCast(ctx, getArrayClass(&class_float, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_float_R_java_lang_String(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_14:;
	{
	LINE_NUMBER(53);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_byte, 1))) == 0) goto label_16;
	}
	{
	frame[6].o = (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String(ctx, (frame[6].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_16:;
	{
	LINE_NUMBER(54);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_double, 1))) == 0) goto label_18;
	}
	{
	frame[7].o = (checkCast(ctx, getArrayClass(&class_double, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_double_R_java_lang_String(ctx, (frame[7].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_18:;
	{
	LINE_NUMBER(55);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_long, 1))) == 0) goto label_20;
	}
	{
	frame[8].o = (checkCast(ctx, getArrayClass(&class_long, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_long_R_java_lang_String(ctx, (frame[8].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_20:;
	{
	LINE_NUMBER(56);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_char, 1))) == 0) goto label_22;
	}
	{
	frame[9].o = (checkCast(ctx, getArrayClass(&class_char, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_char_R_java_lang_String(ctx, (frame[9].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_22:;
	{
	LINE_NUMBER(57);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_boolean, 1))) == 0) goto label_24;
	}
	{
	frame[10].o = (checkCast(ctx, getArrayClass(&class_boolean, 1), (frame[2].o)));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_boolean_R_java_lang_String(ctx, (frame[10].o));
	frame[2].o = sp[0].o;
	goto label_8;
	}
label_24:;
	{
	LINE_NUMBER(58);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_NativeArray)) == 0) goto label_8;
	}
	{
	frame[11].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[2].o)));
	sp[0].o = (jobject)((func_rhino_NativeArray_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_rhino_NativeArray_toArray_R_Array1_java_lang_Object])(ctx, (frame[11].o));
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(61);
	if ((frame[3].o) != nullptr) goto label_28;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_1;
label_28:;
	INST_ALOAD(3);
label_1:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(62);
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:getError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(68);
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	SM_arc_util_Log_err_java_lang_Throwable(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8": \u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_3:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Scripts_log_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:log", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_info;
	((func_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:log", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"[@]: @"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[3].o);
	SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Scripts_newFloats_int_R_Array1_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:newFloats", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:getClass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(89);
	((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (frame[1].o);
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[2].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001"_j.string, 2, sp[2].o, sp[3].o);
	jint temp0 = (jint)((func_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(91);
	((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (jobject(nullptr));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_currentMod;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_4;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_context;
	sp[1].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[2].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[2].o))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"modName = \"\u0001\"\nscriptName = \"\u0001\""_j.string, 2, sp[2].o, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"initscript.js"_j))), (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_context;
	sp[1].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK((frame[0].o)))->F_scope;
	sp += 2;
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"(function(){'use strict';\n\u0001\n})();"_j.string, 1, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(1);
label_7:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o), (jint(0)));
	LINE_NUMBER(101);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(102);
	frame[4].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_err;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	((func_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Scripts_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts:dispose", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Scripts[] {
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
	(void *) M_mindustry_mod_Scripts_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_mod_Scripts_hasErrored_R_boolean,
	(void *) M_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String,
	(void *) M_mindustry_mod_Scripts_log_java_lang_String_java_lang_String,
	(void *) M_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String,
	(void *) M_mindustry_mod_Scripts_newFloats_int_R_Array1_float,
	(void *) M_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class,
	(void *) M_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi,
	(void *) M_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "hasErrored", "()Z" },
	{ "runConsole", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getError", "(Ljava/lang/Throwable;Z)Ljava/lang/String;" },
	{ "log", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "log", "(Larc/util/Log$LogLevel;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "newFloats", "(I)[F" },
	{ "getClass", "(Ljava/lang/Object;)Ljava/lang/Class;" },
	{ "run", "(Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;)V" },
	{ "run", "(Ljava/lang/String;Ljava/lang/String;Z)Z" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_mindustry_mod_Scripts$ScriptModuleProvider,
};

static FieldMetadata fields[] {
	{ "context", &class_rhino_Context, offsetof(mindustry_mod_Scripts, F_context), "Lrhino/Context;", 17 },
	{ "scope", &class_rhino_Scriptable, offsetof(mindustry_mod_Scripts, F_scope), "Lrhino/Scriptable;", 17 },
	{ "errored", &class_boolean, offsetof(mindustry_mod_Scripts, F_errored), "Z", 2 },
	{ "currentMod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_mod_Scripts, F_currentMod), "Lmindustry/mod/Mods$LoadedMod;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Scripts, 0, "()V", 1 },
	{ "hasErrored", (intptr_t) M_mindustry_mod_Scripts_hasErrored_R_boolean, VTABLE_mindustry_mod_Scripts_hasErrored_R_boolean, "()Z", 1 },
	{ "runConsole", (intptr_t) M_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String, VTABLE_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getError", (intptr_t) M_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String, VTABLE_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String, "(Ljava/lang/Throwable;Z)Ljava/lang/String;", 2 },
	{ "log", (intptr_t) M_mindustry_mod_Scripts_log_java_lang_String_java_lang_String, VTABLE_mindustry_mod_Scripts_log_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "log", (intptr_t) M_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String, VTABLE_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String, "(Larc/util/Log$LogLevel;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "newFloats", (intptr_t) M_mindustry_mod_Scripts_newFloats_int_R_Array1_float, VTABLE_mindustry_mod_Scripts_newFloats_int_R_Array1_float, "(I)[F", 1 },
	{ "getClass", (intptr_t) M_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class, VTABLE_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class, "(Ljava/lang/Object;)Ljava/lang/Class;", 1 },
	{ "run", (intptr_t) M_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi, VTABLE_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi, "(Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;)V", 1 },
	{ "run", (intptr_t) M_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean, VTABLE_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Ljava/lang/String;Z)Z", 2 },
	{ "dispose", (intptr_t) M_mindustry_mod_Scripts_dispose, VTABLE_mindustry_mod_Scripts_dispose, "()V", 1 },
};

Class class_mindustry_mod_Scripts{
		.nativeName = (intptr_t) "mindustry/mod/Scripts",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Scripts),
		.classVtable = (intptr_t) vtable_mindustry_mod_Scripts,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Scripts,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Scripts,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Scripts = registerClass(&class_mindustry_mod_Scripts);

}
