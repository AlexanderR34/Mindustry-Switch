#include "rhino/module/provider/CachingModuleScriptProviderBase.h"
#include "java/lang/Runtime.h"
#include "rhino/module/provider/ModuleSourceProvider.h"
#include "rhino/module/ModuleScript.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/module/ModuleScriptProvider.h"
#include "java/lang/Object.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase.h"
#include "java/lang/String.h"
#include "java/net/URI.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase_CachedModuleScript.h"
#include "rhino/module/provider/ModuleSource.h"
#include "rhino/Script.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_rhino_module_provider_CachingModuleScriptProviderBase_loadConcurrencyLevel;
jint SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockShift;
jint SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockMask;
jint SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockCount;

void mark_rhino_module_provider_CachingModuleScriptProviderBase(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_CachingModuleScriptProviderBase *) object;
	if (self->F_loadLocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadLocks)->clazz)->markFunction)((jobject) self->F_loadLocks, mark, depth + 1);
	if (self->F_moduleSourceProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moduleSourceProvider)->clazz)->markFunction)((jobject) self->F_moduleSourceProvider, mark, depth + 1);
}

void init_rhino_module_provider_CachingModuleScriptProviderBase_rhino_module_provider_ModuleSourceProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx), (jint)SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockCount));
	((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK(sp[0].o))->F_loadLocks = (jref) sp[1].o;
	LINE_NUMBER(40);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK((frame[0].o)))->F_loadLocks;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK((frame[0].o)))->F_loadLocks;
	jint temp0 = frame[2].i;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(40);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(53);
	((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK((frame[0].o)))->F_moduleSourceProvider = (jref) (frame[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_CachingModuleScriptProviderBase_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase:getModuleScript", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[4]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_rhino_module_provider_CachingModuleScriptProviderBase_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_CachingModuleScriptProviderBase_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript])(ctx, (frame[0].o), (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_rhino_module_provider_CachingModuleScriptProviderBase_getValidator_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_R_java_lang_Object(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(61);
	if ((frame[3].o) != nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK((frame[0].o)))->F_moduleSourceProvider;
	sp[1].o = frame[2].o;
	sp[2].o = frame[5].o;
	sp[3].o = frame[7].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSourceProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource) resolveInterfaceMethod(ctx, &class_rhino_module_provider_ModuleSourceProvider, INDEX_rhino_module_provider_ModuleSourceProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	goto label_36;
	}
label_34:;
	{
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK((frame[0].o)))->F_moduleSourceProvider;
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	sp[3].o = frame[7].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSourceProvider_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource) resolveInterfaceMethod(ctx, &class_rhino_module_provider_ModuleSourceProvider, INDEX_rhino_module_provider_ModuleSourceProvider_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
label_36:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = frame[8].o;
	clinit_rhino_module_provider_ModuleSourceProvider(ctx);
	sp[1].o = (jobject)SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED;
	if (sp[0].o != sp[1].o) goto label_39;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript])(ctx, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(67);
	if ((frame[8].o) != nullptr) goto label_41;
	}
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_41:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	frame[10].o = (jobject(nullptr));
	}
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_30; } // goto label_22
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_30; } // goto label_18
	}
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[2].o));
	frame[11].i = temp0;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase *) NULL_CHECK((frame[0].o)))->F_loadLocks;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((bit_cast<jint>(bit_cast<uint32_t>((frame[11].i)) >> (clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx), (jint)SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockShift))) & (clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx), (jint)SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockMask)));
	frame[12].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_rhino_module_provider_CachingModuleScriptProviderBase_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_CachingModuleScriptProviderBase_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript])(ctx, (frame[0].o), (frame[2].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[13].o) == nullptr) { popExceptionFrames(frameRef, 3); goto label_12; }
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_module_provider_CachingModuleScriptProviderBase_getValidator_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_R_java_lang_Object(ctx, (frame[13].o));
	jint temp0 = (jint)SM_rhino_module_provider_CachingModuleScriptProviderBase_equal_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 3); goto label_12; }
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript])(ctx, (frame[13].o));
	frame[14].o = sp[0].o;
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(88);
	if ((frame[9].o) == nullptr) goto label_48;
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_49;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_48;
label_2:;
	{
	sp -= 1;
	frame[15].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[10].o), (frame[15].o));
	goto label_48;
	}
label_49:;
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
label_48:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[14].o);
	}
label_12:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_30; } // goto label_22
	}
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[3] = true; goto label_30; } // goto label_18
	}
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSource_getUri_R_java_net_URI) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_module_provider_ModuleSource_getUri_R_java_net_URI])(ctx, (frame[8].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(80);
	clinit_rhino_module_ModuleScript(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_ModuleScript);
	sp[1].o = frame[1].o;
	sp[2].o = frame[9].o;
	sp[3].o = frame[14].o;
	LINE_NUMBER(81);
	sp[3].o = (jobject)((func_java_net_URI_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_net_URI_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[1].o = (jobject)((func_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script])(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(1)));
	sp[2].o = frame[14].o;
	sp[3].o = frame[8].o;
	LINE_NUMBER(83);
	sp[3].o = (jobject)((func_rhino_module_provider_ModuleSource_getBase_R_java_net_URI) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_module_provider_ModuleSource_getBase_R_java_net_URI])(ctx, sp[3].o);
	init_rhino_module_ModuleScript_rhino_Script_java_net_URI_java_net_URI(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[15].o;
	sp[3].o = frame[8].o;
	LINE_NUMBER(85);
	sp[3].o = (jobject)((func_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object])(ctx, sp[3].o);
	LINE_NUMBER(84);
	((func_rhino_module_provider_CachingModuleScriptProviderBase_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_CachingModuleScriptProviderBase_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(86);
	frame[16].o = (frame[15].o);
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(88);
	if ((frame[9].o) == nullptr) goto label_57;
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_58;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_57;
label_6:;
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[10].o), (frame[17].o));
	goto label_57;
	}
label_58:;
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
label_57:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[16].o);
	}
label_10:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_22;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_22; }
	if (bypasses[1]) { goto label_21; }
	if (bypasses[2]) { bypasses[2] = false; goto label_22; }
	if (bypasses[3]) { goto label_21; }
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_18;
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_18; }
	if (bypasses[3]) { bypasses[3] = false; goto label_18; }
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	sp -= 1;
	LINE_NUMBER(87);
	frame[18].o = sp[0].o;
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(18);
	INST_ATHROW();
	label_18:;
	popExceptionFrame(frameRef);
	{
	sp -= 1;
	LINE_NUMBER(70);
	frame[11].o = sp[0].o;
	frame[10].o = (frame[11].o);
	throwException(ctx, (frame[11].o));	}
label_22:;
	LINE_NUMBER(88);
	INST_ASTORE(19);
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_59;
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_60;
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_27; }
	}
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_59;
label_27:;
	{
	sp -= 1;
	frame[20].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[10].o), (frame[20].o));
	goto label_59;
	}
label_60:;
	INST_ALOAD(9);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
label_59:;
	INST_ALOAD(19);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_rhino_module_provider_CachingModuleScriptProviderBase_getValidator_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase:getValidator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(147);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getValidator_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getValidator_R_java_lang_Object])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_module_provider_CachingModuleScriptProviderBase_equal_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase:equal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
	goto label_3;
label_1:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_module_provider_CachingModuleScriptProviderBase_getConcurrencyLevel_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase:getConcurrencyLevel", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx), (jint)SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockCount);
	}

	popStackFrame(ctx);
}

void clinit_rhino_module_provider_CachingModuleScriptProviderBase(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp0 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[0].o);
	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	SF_rhino_module_provider_CachingModuleScriptProviderBase_loadConcurrencyLevel = (temp0 * (8));
	LINE_NUMBER(26);
	frame[0].i = (jint(0));
	LINE_NUMBER(27);
	frame[1].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(28);
	if ((frame[1].i) >= (clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx), (jint)SF_rhino_module_provider_CachingModuleScriptProviderBase_loadConcurrencyLevel)) goto label_4;
	}
	{
	LINE_NUMBER(29);
	INST_IINC(0, 1);
	LINE_NUMBER(30);
	frame[1].i = ((frame[1].i) << (jint(1)));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(32);
	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockShift = ((32) - (frame[0].i));
	LINE_NUMBER(33);
	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockMask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(34);
	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
	SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockCount = (frame[1].i);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_CachingModuleScriptProviderBase[] {
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
	(void *) M_rhino_module_provider_CachingModuleScriptProviderBase_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "getModuleScript", "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Lrhino/Scriptable;)Lrhino/module/ModuleScript;" },
	{ "putLoadedModule", "(Ljava/lang/String;Lrhino/module/ModuleScript;Ljava/lang/Object;)V" },
	{ "getLoadedModule", "(Ljava/lang/String;)Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;" },
};

static jclass interfaces[] { &class_rhino_module_ModuleScriptProvider, };

static jclass innerClasses[] {
	&class_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript,
};

static FieldMetadata fields[] {
	{ "loadConcurrencyLevel", &class_int, (intptr_t) &SF_rhino_module_provider_CachingModuleScriptProviderBase_loadConcurrencyLevel, "I", 26 },
	{ "loadLockShift", &class_int, (intptr_t) &SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockShift, "I", 26 },
	{ "loadLockMask", &class_int, (intptr_t) &SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockMask, "I", 26 },
	{ "loadLockCount", &class_int, (intptr_t) &SF_rhino_module_provider_CachingModuleScriptProviderBase_loadLockCount, "I", 26 },
	{ "loadLocks", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_module_provider_CachingModuleScriptProviderBase, F_loadLocks), "[Ljava/lang/Object;", 18 },
	{ "moduleSourceProvider", &class_rhino_module_provider_ModuleSourceProvider, offsetof(rhino_module_provider_CachingModuleScriptProviderBase, F_moduleSourceProvider), "Lrhino/module/provider/ModuleSourceProvider;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_CachingModuleScriptProviderBase_rhino_module_provider_ModuleSourceProvider, 0, "(Lrhino/module/provider/ModuleSourceProvider;)V", 4 },
	{ "getModuleScript", (intptr_t) M_rhino_module_provider_CachingModuleScriptProviderBase_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript, VTABLE_rhino_module_provider_CachingModuleScriptProviderBase_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript, "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Lrhino/Scriptable;)Lrhino/module/ModuleScript;", 1 },
	{ "putLoadedModule", 0, VTABLE_rhino_module_provider_CachingModuleScriptProviderBase_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object, "(Ljava/lang/String;Lrhino/module/ModuleScript;Ljava/lang/Object;)V", 1028 },
	{ "getLoadedModule", 0, VTABLE_rhino_module_provider_CachingModuleScriptProviderBase_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, "(Ljava/lang/String;)Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;", 1028 },
	{ "getValidator", (intptr_t) SM_rhino_module_provider_CachingModuleScriptProviderBase_getValidator_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_R_java_lang_Object, 0, "(Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;)Ljava/lang/Object;", 10 },
	{ "equal", (intptr_t) SM_rhino_module_provider_CachingModuleScriptProviderBase_equal_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 10 },
	{ "getConcurrencyLevel", (intptr_t) SM_rhino_module_provider_CachingModuleScriptProviderBase_getConcurrencyLevel_R_int, 0, "()I", 12 },
	{ "<clinit>", (intptr_t) clinit_rhino_module_provider_CachingModuleScriptProviderBase, 0, "()V", 8 },
};

Class class_rhino_module_provider_CachingModuleScriptProviderBase{
		.nativeName = (intptr_t) "rhino/module/provider/CachingModuleScriptProviderBase",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_CachingModuleScriptProviderBase),
		.classVtable = (intptr_t) vtable_rhino_module_provider_CachingModuleScriptProviderBase,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_CachingModuleScriptProviderBase,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_CachingModuleScriptProviderBase,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_CachingModuleScriptProviderBase = registerClass(&class_rhino_module_provider_CachingModuleScriptProviderBase);

}
