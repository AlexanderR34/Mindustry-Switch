#include "rhino/Context.h"
#include "rhino/NativeCall.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Error.h"
#include "rhino/WrapFactory.h"
#include "rhino/NativeFunction.h"
#include "rhino/NativeArray.h"
#include "java/io/Writer.h"
#include "rhino/IRFactory.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "rhino/ast/ScriptNode.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/io/StringWriter.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/Thread.h"
#include "rhino/debug/DebuggableScript.h"
#include "rhino/Context.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/util/Map.h"
#include "rhino/ObjArray.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Node.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/ContinuationPending.h"
#include "rhino/Parser.h"
#include "java/util/Enumeration.h"
#include "java/lang/RuntimeException.h"
#include "java/util/jar/Manifest.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "rhino/Scriptable.h"
#include "rhino/classfile/ClassFileWriter_ClassFileFormatException.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/GeneratedClassLoader.h"
#include "java/io/InputStream.h"
#include "rhino/Kit.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/io/PrintWriter.h"
#include "rhino/InterpretedFunction.h"
#include "rhino/ContextFactory.h"
#include "java/io/IOException.h"
#include "rhino/Script.h"
#include "java/util/HashSet.h"
#include "rhino/ErrorReporter.h"
#include "rhino/Evaluator.h"
#include "rhino/VMBridge.h"
#include "rhino/NativeContinuation.h"
#include "java/util/jar/Attributes.h"
#include "rhino/NativeObject.h"
#include "rhino/ContextAction.h"
#include "java/lang/Number.h"
#include "rhino/WrappedException.h"
#include "java/net/URL.h"
#include "rhino/debug/Debugger.h"
#include "rhino/Interpreter.h"
#include "rhino/ast/AstRoot.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/DefaultErrorReporter.h"
#include "rhino/RegExpProxy.h"
#include "rhino/Context_invoke_rhino_ContextAction_0.h"
#include "rhino/RhinoException.h"
#include "rhino/ClassShutter.h"
#include "rhino/CompilerEnvirons.h"
#include "java/lang/Class.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jint SF_rhino_Context_VERSION_UNKNOWN;
jint SF_rhino_Context_VERSION_DEFAULT;
jint SF_rhino_Context_VERSION_1_0;
jint SF_rhino_Context_VERSION_1_1;
jint SF_rhino_Context_VERSION_1_2;
jint SF_rhino_Context_VERSION_1_3;
jint SF_rhino_Context_VERSION_1_4;
jint SF_rhino_Context_VERSION_1_5;
jint SF_rhino_Context_VERSION_1_6;
jint SF_rhino_Context_VERSION_1_7;
jint SF_rhino_Context_VERSION_1_8;
jint SF_rhino_Context_VERSION_ES6;
jint SF_rhino_Context_FEATURE_NON_ECMA_GET_YEAR;
jint SF_rhino_Context_FEATURE_MEMBER_EXPR_AS_FUNCTION_NAME;
jint SF_rhino_Context_FEATURE_RESERVED_KEYWORD_AS_IDENTIFIER;
jint SF_rhino_Context_FEATURE_TO_STRING_AS_SOURCE;
jint SF_rhino_Context_FEATURE_PARENT_PROTO_PROPERTIES;
jint SF_rhino_Context_FEATURE_E4X;
jint SF_rhino_Context_FEATURE_DYNAMIC_SCOPE;
jint SF_rhino_Context_FEATURE_STRICT_VARS;
jint SF_rhino_Context_FEATURE_STRICT_EVAL;
jint SF_rhino_Context_FEATURE_LOCATION_INFORMATION_IN_ERROR;
jint SF_rhino_Context_FEATURE_STRICT_MODE;
jint SF_rhino_Context_FEATURE_WARNING_AS_ERROR;
jint SF_rhino_Context_FEATURE_ENHANCED_JAVA_ACCESS;
jint SF_rhino_Context_FEATURE_V8_EXTENSIONS;
jint SF_rhino_Context_FEATURE_OLD_UNDEF_NULL_THIS;
jint SF_rhino_Context_FEATURE_ENUMERATE_IDS_FIRST;
jint SF_rhino_Context_FEATURE_THREAD_SAFE_OBJECTS;
jint SF_rhino_Context_FEATURE_INTEGER_WITHOUT_DECIMAL_PLACE;
jint SF_rhino_Context_FEATURE_LITTLE_ENDIAN;
jobject SF_rhino_Context_emptyArgs;
jobject SF_rhino_Context_codegenClass;
jobject SF_rhino_Context_interpreterClass;
jobject SF_rhino_Context_implementationVersion;

void mark_rhino_Context(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Context_emptyArgs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Context_emptyArgs)->clazz)->markFunction)((jobject) SF_rhino_Context_emptyArgs, mark, depth + 1);
		if (SF_rhino_Context_codegenClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Context_codegenClass)->clazz)->markFunction)((jobject) SF_rhino_Context_codegenClass, mark, depth + 1);
		if (SF_rhino_Context_interpreterClass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Context_interpreterClass)->clazz)->markFunction)((jobject) SF_rhino_Context_interpreterClass, mark, depth + 1);
		if (SF_rhino_Context_implementationVersion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Context_implementationVersion)->clazz)->markFunction)((jobject) SF_rhino_Context_implementationVersion, mark, depth + 1);
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
	auto self = (rhino_Context *) object;
	if (self->F_factory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_factory)->clazz)->markFunction)((jobject) self->F_factory, mark, depth + 1);
	if (self->F_sealKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sealKey)->clazz)->markFunction)((jobject) self->F_sealKey, mark, depth + 1);
	if (self->F_topCallScope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topCallScope)->clazz)->markFunction)((jobject) self->F_topCallScope, mark, depth + 1);
	if (self->F_currentActivationCall)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentActivationCall)->clazz)->markFunction)((jobject) self->F_currentActivationCall, mark, depth + 1);
	if (self->F_typeErrorThrower)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeErrorThrower)->clazz)->markFunction)((jobject) self->F_typeErrorThrower, mark, depth + 1);
	if (self->F_iterating)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterating)->clazz)->markFunction)((jobject) self->F_iterating, mark, depth + 1);
	if (self->F_classShutter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classShutter)->clazz)->markFunction)((jobject) self->F_classShutter, mark, depth + 1);
	if (self->F_errorReporter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorReporter)->clazz)->markFunction)((jobject) self->F_errorReporter, mark, depth + 1);
	if (self->F_regExpProxy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regExpProxy)->clazz)->markFunction)((jobject) self->F_regExpProxy, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_wrapFactory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapFactory)->clazz)->markFunction)((jobject) self->F_wrapFactory, mark, depth + 1);
	if (self->F_debugger)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debugger)->clazz)->markFunction)((jobject) self->F_debugger, mark, depth + 1);
	if (self->F_debuggerData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debuggerData)->clazz)->markFunction)((jobject) self->F_debuggerData, mark, depth + 1);
	if (self->F_threadLocalMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadLocalMap)->clazz)->markFunction)((jobject) self->F_threadLocalMap, mark, depth + 1);
	if (self->F_applicationClassLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applicationClassLoader)->clazz)->markFunction)((jobject) self->F_applicationClassLoader, mark, depth + 1);
	if (self->F_activationNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activationNames)->clazz)->markFunction)((jobject) self->F_activationNames, mark, depth + 1);
	if (self->F_lastInterpreterFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastInterpreterFrame)->clazz)->markFunction)((jobject) self->F_lastInterpreterFrame, mark, depth + 1);
	if (self->F_previousInterpreterInvocations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previousInterpreterInvocations)->clazz)->markFunction)((jobject) self->F_previousInterpreterInvocations, mark, depth + 1);
	if (self->F_scratchScriptable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scratchScriptable)->clazz)->markFunction)((jobject) self->F_scratchScriptable, mark, depth + 1);
}

void init_rhino_Context_rhino_ContextFactory(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2208);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingSource = (jint(1));
	LINE_NUMBER(2243);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generateObserverCount = (jint(0));
	LINE_NUMBER(333);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(334);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"factory == null"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(336);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_factory = (jref) (frame[1].o);
	LINE_NUMBER(337);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_version = (200);
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	clinit_rhino_Context(ctx);
	sp[1].o = (jobject)SF_rhino_Context_codegenClass;
	sp += 1;
	if (sp[0].o == nullptr) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 2;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_optimizationLevel = sp[1].i;
	LINE_NUMBER(339);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_maximumInterpreterStackDepth = (jint(2147483647));
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_getCurrentContext_R_rhino_Context(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getCurrentContext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)SM_rhino_VMBridge_getThreadContextHelper_R_java_lang_Object(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(355);
	sp[0].o = (jobject)SM_rhino_VMBridge_getContext_java_lang_Object_R_rhino_Context(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_enter_R_rhino_Context(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:enter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(366);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(ctx);
	sp[0].o = (jobject)SM_rhino_Context_enter_rhino_Context_rhino_ContextFactory_R_rhino_Context(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_enter_rhino_Context_rhino_ContextFactory_R_rhino_Context(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:enter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)SM_rhino_VMBridge_getThreadContextHelper_R_java_lang_Object(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(371);
	sp[0].o = (jobject)SM_rhino_VMBridge_getContext_java_lang_Object_R_rhino_Context(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(373);
	frame[0].o = (frame[3].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(375);
	if ((frame[0].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_rhino_ContextFactory_makeContext_R_rhino_Context) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ContextFactory_makeContext_R_rhino_Context])(ctx, (frame[1].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(377);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_enterCount) == 0) goto label_9;
	}
	{
	LINE_NUMBER(378);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"factory.makeContext() returned Context instance already associated with some thread"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(380);
	((func_rhino_ContextFactory_onContextCreated_rhino_Context) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ContextFactory_onContextCreated_rhino_Context])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_rhino_ContextFactory_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ContextFactory_isSealed_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(382);
	((func_rhino_Context_seal_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_seal_java_lang_Object])(ctx, (frame[0].o), (jobject(nullptr)));
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(385);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_enterCount) == 0) goto label_12;
	}
	{
	LINE_NUMBER(386);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"can not use Context instance already associated with some thread"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(389);
	SM_rhino_VMBridge_setContext_java_lang_Object_rhino_Context(ctx, (frame[2].o), (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_enterCount = (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_enterCount) + (jint(1)));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_exit(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:exit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)SM_rhino_VMBridge_getThreadContextHelper_R_java_lang_Object(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)SM_rhino_VMBridge_getContext_java_lang_Object_R_rhino_Context(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(409);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(410);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Calling Context.exit without previous Context.enter"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(413);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_enterCount) >= (jint(1))) goto label_5;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_5:;
	{
	LINE_NUMBER(414);
	sp[0].o = frame[1].o;
	jint temp0 = ((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_enterCount) - (jint(1));
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_enterCount = temp0;
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(415);
	SM_rhino_VMBridge_setContext_java_lang_Object_rhino_Context(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_factory;
	((func_rhino_ContextFactory_onContextReleased_rhino_Context) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ContextFactory_onContextReleased_rhino_Context])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_Context_call_rhino_ContextFactory_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:call", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(438);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(ctx);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_rhino_Context_invoke_rhino_ContextAction_0(ctx);
		auto proxy = (rhino_Context_invoke_rhino_ContextAction_0 *) gcAlloc(ctx, &class_rhino_Context_invoke_rhino_ContextAction_0);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_rhino_Context_call_rhino_ContextFactory_rhino_ContextAction_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_call_rhino_ContextFactory_rhino_ContextAction_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:call", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)SM_rhino_Context_enter_rhino_Context_rhino_ContextFactory_R_rhino_Context(ctx, (jobject(nullptr)), (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_rhino_ContextAction_run_rhino_Context_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_ContextAction, INDEX_rhino_ContextAction_run_rhino_Context_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(452);
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(452);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(453);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getFactory_R_rhino_ContextFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getFactory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_factory;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_isSealed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isSealed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_seal_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:seal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(485);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(486);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed = (jint(1));
	LINE_NUMBER(487);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealKey = (jref) (frame[1].o);
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_unseal_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:unseal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(499);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealKey;
	if (sp[0].o == (frame[1].o)) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(501);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) != 0) goto label_3;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(502);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed = (jint(0));
	LINE_NUMBER(503);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealKey = (jref) (jobject(nullptr));
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_onSealedMutation(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:onSealedMutation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(507);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_Context_getLanguageVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getLanguageVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_version);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setLanguageVersion_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setLanguageVersion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(531);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(532);
	SM_rhino_Context_checkLanguageVersion_int(ctx, (frame[1].i));
	LINE_NUMBER(533);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_version = (frame[1].i);
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Context_isValidLanguageVersion_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isValidLanguageVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(537);
	switch((frame[0].i)) {
		case 100: goto label_1;
		case 110: goto label_1;
		case 120: goto label_1;
		case 130: goto label_1;
		case 140: goto label_1;
		case 150: goto label_1;
		case 160: goto label_1;
		case 170: goto label_1;
		case 180: goto label_1;
		case 200: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_checkLanguageVersion_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:checkLanguageVersion", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)SM_rhino_Context_isValidLanguageVersion_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(555);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(557);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad language version: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getImplementationVersion_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getImplementationVersion", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(576);
	clinit_rhino_Context(ctx);
	sp[0].o = (jobject)SF_rhino_Context_implementationVersion;
	if (sp[0].o != nullptr) goto label_28;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (((jobject) &class_rhino_Context)))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, (((jobject) &class_rhino_Context)));
	sp[0].o = (jobject)((func_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"META-INF/MANIFEST.MF"_j))));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(582);
	goto label_29;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(580);
	frame[2].o = sp[0].o;
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(585);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_net_URL, sp[0].o));
	LINE_NUMBER(587);
	frame[3].o = (jobject(nullptr));
	}
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((func_java_net_URL_openStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URL_openStream_R_java_io_InputStream])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(590);
	clinit_java_util_jar_Manifest(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Manifest);
	init_java_util_jar_Manifest_java_io_InputStream(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(592);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Mozilla Rhino"_j));
	sp[1].o = (jobject)((func_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"Implementation-Title"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 2); goto label_8; }
	}
	{
	LINE_NUMBER(593);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Rhino "_j))));
	sp[1].o = frame[5].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Implementation-Version"_j));
	LINE_NUMBER(594);
	sp[1].o = (jobject)((func_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"Built-Date"_j))));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_rhino_Context(ctx);
	SF_rhino_Context_implementationVersion = sp[0].o;
	LINE_NUMBER(595);
	clinit_rhino_Context(ctx);
	sp[0].o = (jobject)SF_rhino_Context_implementationVersion;
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(601);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(604);
	goto label_39;
label_6:;
	LINE_NUMBER(602);
	INST_ASTORE(7);
label_39:;
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(601);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(604);
	goto label_40;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(602);
	frame[4].o = sp[0].o;
	LINE_NUMBER(605);
	goto label_40;
	}
label_13:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	LINE_NUMBER(597);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(601);
	if ((frame[3].o) == nullptr) goto label_16;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_16:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(604);
	goto label_40;
label_17:;
	{
	sp -= 1;
	LINE_NUMBER(602);
	frame[4].o = sp[0].o;
	LINE_NUMBER(605);
	goto label_40;
	}
label_19:;
label_26: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	LINE_NUMBER(600);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_24; }
	}
	{
	LINE_NUMBER(601);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_23:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(604);
	goto label_43;
label_24:;
	LINE_NUMBER(602);
	INST_ASTORE(9);
label_43:;
	{
	LINE_NUMBER(605);
	throwException(ctx, (frame[8].o));	}
label_40:;
	LINE_NUMBER(606);
	goto label_29;
label_28:;
	{
	LINE_NUMBER(609);
	clinit_rhino_Context(ctx);
	sp[0].o = (jobject)SF_rhino_Context_implementationVersion;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getErrorReporter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(618);
	clinit_rhino_DefaultErrorReporter(ctx);
	sp[0].o = (jobject)SF_rhino_DefaultErrorReporter_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_errorReporter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setErrorReporter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(629);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(630);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(632);
	if ((frame[1].o) != (frame[2].o)) goto label_4;
	}
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(635);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_errorReporter = (jref) (frame[1].o);
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getLocale_R_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getLocale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_locale;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_locale = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_locale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setLocale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(656);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_locale;
	frame[2].o = sp[0].o;
	LINE_NUMBER(658);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (frame[1].o);
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_reportWarning_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportWarning", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(675);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[5].o), (12));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(676);
	SM_rhino_Context_reportError_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[5].o));
	((func_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	}
label_4:;
	LINE_NUMBER(680);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_Context_reportWarning_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportWarning", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[1].o = sp[0].o;
	LINE_NUMBER(689);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(690);
	SM_rhino_Context_reportWarning_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, (frame[0].o), (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_reportWarning_java_lang_String_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportWarning", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[2].o = sp[0].o;
	LINE_NUMBER(695);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(696);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(697);
	clinit_java_io_PrintWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_PrintWriter);
	init_java_io_PrintWriter_java_io_Writer(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(698);
	((func_java_io_PrintWriter_println_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_PrintWriter_println_java_lang_String])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(699);
	((func_java_lang_Throwable_printStackTrace_java_io_PrintWriter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintWriter])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(700);
	((func_java_io_PrintWriter_flush) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_PrintWriter_flush])(ctx, (frame[5].o));
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[4].o));
	SM_rhino_Context_reportWarning_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, sp[0].o, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_reportError_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportError", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(717);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[5].o));
	((func_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(721);
	clinit_rhino_EvaluatorException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_EvaluatorException);
	init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(724);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_Context_reportError_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportError", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[1].o = sp[0].o;
	LINE_NUMBER(733);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(734);
	SM_rhino_Context_reportError_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, (frame[0].o), (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(735);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(753);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(754);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[5].o));
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[3].o = frame[3].o;
	jint temp1 = frame[4].i;
	LINE_NUMBER(756);
	sp[0].o = (jobject)((func_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, temp1);
	LINE_NUMBER(755);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(759);
	clinit_rhino_EvaluatorException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_EvaluatorException);
	init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(764);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(770);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage2_java_lang_String_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(776);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(782);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(783);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError4", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(789);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = frame[4].o;
	LINE_NUMBER(790);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(791);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:reportRuntimeError", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[1].o = sp[0].o;
	LINE_NUMBER(801);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(802);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(ctx, (frame[0].o), (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_initStandardObjects_R_rhino_ScriptableObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:initStandardObjects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)((func_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:initSafeStandardObjects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:initStandardObjects", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(865);
	sp[0].o = (jobject)((func_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:initSafeStandardObjects", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:initStandardObjects", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(925);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_initStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:initSafeStandardObjects", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_initSafeStandardObjects_rhino_Context_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_getUndefinedValue_R_java_lang_Object(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getUndefinedValue", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(971);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:evaluateString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((func_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(988);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)((func_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Script, INDEX_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(991);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:evaluateReader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((func_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1007);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((func_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Script, INDEX_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1010);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:executeScriptWithContinuations", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1028);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_InterpretedFunction)) == 0) goto label_1;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_InterpretedFunction, (frame[1].o));
	LINE_NUMBER(1029);
	jint temp0 = (jint)((func_rhino_InterpretedFunction_isScript_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpretedFunction_isScript_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1031);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Script argument was not a script or was not created by interpreted mode "_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1034);
	sp[0].o = frame[0].o;
	sp[1].o = checkCast(ctx, &class_rhino_InterpretedFunction, (frame[1].o));
	sp[2].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:callFunctionWithContinuations", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1054);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_InterpretedFunction)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1056);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Function argument was not created by interpreted mode "_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1059);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1060);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot have any pending top calls when executing a script with continuations"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1065);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_isContinuationsTopCall = (jint(1));
	LINE_NUMBER(1066);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object(ctx, (frame[1].o), (frame[0].o), (frame[2].o), (frame[2].o), (frame[3].o), ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_isTopLevelStrict));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_captureContinuation_R_rhino_ContinuationPending(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:captureContinuation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1083);
	clinit_rhino_ContinuationPending(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ContinuationPending);
	sp[1].o = frame[0].o;
	LINE_NUMBER(1084);
	sp[1].o = (jobject)SM_rhino_Interpreter_captureContinuation_rhino_Context_R_rhino_NativeContinuation(ctx, sp[1].o);
	init_rhino_ContinuationPending_rhino_NativeContinuation(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:resumeContinuation", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1106);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[3].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1107);
	sp[0].o = (jobject)SM_rhino_Interpreter_restartContinuation_rhino_NativeContinuation_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (checkCast(ctx, &class_rhino_NativeContinuation, (frame[1].o))), (frame[0].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:stringIsCompilableUnit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1128);
	frame[2].i = (jint(0));
	LINE_NUMBER(1129);
	clinit_rhino_CompilerEnvirons(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_CompilerEnvirons);
	init_rhino_CompilerEnvirons(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1130);
	((func_rhino_CompilerEnvirons_initFromContext_rhino_Context) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_CompilerEnvirons_initFromContext_rhino_Context])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(1133);
	((func_rhino_CompilerEnvirons_setGeneratingSource_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_CompilerEnvirons_setGeneratingSource_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(1134);
	clinit_rhino_Parser(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser);
	sp[1].o = frame[3].o;
	clinit_rhino_DefaultErrorReporter(ctx);
	sp[2].o = (jobject)SF_rhino_DefaultErrorReporter_instance;
	init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_EvaluatorException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((func_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot])(ctx, (frame[4].o), (frame[1].o), (jobject(nullptr)), (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1139);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1137);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1138);
	frame[2].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(1143);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_rhino_Parser_eof_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Parser_eof_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_12;
	}
label_11:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:compileReader", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1161);
	if ((frame[3].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1163);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1166);
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)SM_rhino_Kit_readReader_java_io_Reader_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o), (frame[3].i), (jint(0)), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Script, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:compileString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1182);
	if ((frame[3].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1184);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((func_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:compileString", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[4].o), (frame[5].i), (jint(0)), (frame[2].o), (frame[3].o));
	sp[0].o = checkCast(ctx, &class_rhino_Script, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1198);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1200);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:compileFunction", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1218);
	sp[0].o = (jobject)((func_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (jobject(nullptr)), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:compileFunction", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1226);
	sp[0].o = (jobject)M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[5].o), (frame[6].i), (jint(1)), (frame[3].o), (frame[4].o));
	sp[0].o = checkCast(ctx, &class_rhino_Function, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1229);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1232);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:decompileScript", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1245);
	frame[3].o = (checkCast(ctx, &class_rhino_NativeFunction, (frame[1].o)));
	LINE_NUMBER(1246);
	sp[0].o = (jobject)((func_rhino_NativeFunction_decompile_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeFunction_decompile_int_int_R_java_lang_String])(ctx, (frame[3].o), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:decompileFunction", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1262);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_BaseFunction)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1263);
	sp[0].o = (jobject)((func_rhino_BaseFunction_decompile_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[1].o))))->vtable)[VTABLE_rhino_BaseFunction_decompile_int_int_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_BaseFunction, (frame[1].o))), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1265);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"function "_j))));
	sp[1].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"() {\n\t[native code]\n}\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:decompileFunctionBody", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1281);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_BaseFunction)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1282);
	frame[3].o = (checkCast(ctx, &class_rhino_BaseFunction, (frame[1].o)));
	LINE_NUMBER(1283);
	sp[0].o = (jobject)((func_rhino_BaseFunction_decompile_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_BaseFunction_decompile_int_int_R_java_lang_String])(ctx, (frame[3].o), (frame[2].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1286);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[native code]\n"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:newObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1298);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1299);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1301);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:newObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1314);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:newObject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1337);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newObject_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:newArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1349);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_long(ctx, sp[0].o, (jlong((frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1350);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Array;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:newArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1365);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(1366);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1367);
	clinit_rhino_NativeArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeArray);
	init_rhino_NativeArray_Array1_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1368);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Array;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1370);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getElements", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1391);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getArrayElements_rhino_Scriptable_R_Array1_java_lang_Object(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Context_toBoolean_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:toBoolean", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1403);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_Context_toNumber_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:toNumber", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1417);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1430);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_toObject_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:toObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1450);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_javaToJS_java_lang_Object_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:javaToJS", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1481);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1483);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(1484);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Character)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1485);
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[0].o))))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[0].o))));
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1487);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1488);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o), (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:jsToJava", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1505);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceTypeImpl_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:throwAsScriptRuntimeEx", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(1524);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_InvocationTargetException)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1525);
	sp[0].o = (jobject)((func_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_reflect_InvocationTargetException, (frame[0].o))))->vtable)[VTABLE_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable])(ctx, (checkCast(ctx, &class_java_lang_reflect_InvocationTargetException, (frame[0].o))));
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(1528);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Error)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1529);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1530);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = 13;
	LINE_NUMBER(1531);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(1532);
	throwException(ctx, (checkCast(ctx, &class_java_lang_Error, (frame[0].o))));	}
label_3:;
	{
	LINE_NUMBER(1535);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_RhinoException)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1536);
	throwException(ctx, (checkCast(ctx, &class_rhino_RhinoException, (frame[0].o))));	}
label_8:;
	{
	LINE_NUMBER(1538);
	clinit_rhino_WrappedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_WrappedException);
	init_rhino_WrappedException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_isGeneratingDebug_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isGeneratingDebug", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingDebug);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setGeneratingDebug_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setGeneratingDebug", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1557);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1558);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingDebugChanged = (jint(1));
	LINE_NUMBER(1559);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_getOptimizationLevel_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getOptimizationLevel_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1560);
	((func_rhino_Context_setOptimizationLevel_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_setOptimizationLevel_int])(ctx, (frame[0].o), (jint(0)));
	}
label_3:;
	{
	LINE_NUMBER(1561);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingDebug = (frame[1].i);
	LINE_NUMBER(1562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_isGeneratingSource_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isGeneratingSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1569);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingSource);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setGeneratingSource_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setGeneratingSource", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1583);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1584);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingSource = (frame[1].i);
	LINE_NUMBER(1585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_Context_getOptimizationLevel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getOptimizationLevel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1595);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_optimizationLevel);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setOptimizationLevel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setOptimizationLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1615);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1616);
	if ((frame[1].i) != (-2)) goto label_2;
	}
	{
	LINE_NUMBER(1618);
	frame[1].i = (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(1620);
	SM_rhino_Context_checkOptimizationLevel_int(ctx, (frame[1].i));
	LINE_NUMBER(1621);
	clinit_rhino_Context(ctx);
	sp[0].o = (jobject)SF_rhino_Context_codegenClass;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1622);
	frame[1].i = (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(1623);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_optimizationLevel = (frame[1].i);
	LINE_NUMBER(1624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Context_isValidOptimizationLevel_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isValidOptimizationLevel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1627);
	if ((jint(-1)) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (9)) goto label_1;
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

void SM_rhino_Context_checkOptimizationLevel_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:checkOptimizationLevel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1631);
	jint temp0 = (jint)SM_rhino_Context_isValidOptimizationLevel_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(1632);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1634);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Optimization level outside [-1..9]: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_Context_getMaximumInterpreterStackDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getMaximumInterpreterStackDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1651);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_maximumInterpreterStackDepth);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setMaximumInterpreterStackDepth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setMaximumInterpreterStackDepth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1671);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1672);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_optimizationLevel) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1673);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot set maximumInterpreterStackDepth when optimizationLevel != -1"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1675);
	if ((frame[1].i) >= (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(1676);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot set maximumInterpreterStackDepth to less than 1"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1678);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_maximumInterpreterStackDepth = (frame[1].i);
	LINE_NUMBER(1679);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setClassShutter_rhino_ClassShutter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setClassShutter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1689);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1690);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1691);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_hasClassShutter) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1692);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot overwrite existing ClassShutter object"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1694);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_classShutter = (jref) (frame[1].o);
	LINE_NUMBER(1695);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_hasClassShutter = (jint(1));
	LINE_NUMBER(1696);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getClassShutter_R_rhino_ClassShutter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getClassShutter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(1699);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_classShutter;
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getThreadLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1718);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_threadLocalMap;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1719);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1720);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_threadLocalMap;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:putThreadLocal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1730);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1731);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_threadLocalMap;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1732);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_threadLocalMap = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(1733);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_threadLocalMap;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1734);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_removeThreadLocal_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:removeThreadLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1742);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1743);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_threadLocalMap;
	if (sp[0].o != nullptr) goto label_2;
	}
	LINE_NUMBER(1744);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1745);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_threadLocalMap;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1746);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setWrapFactory_rhino_WrapFactory(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setWrapFactory", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1757);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1758);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1759);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_wrapFactory = (jref) (frame[1].o);
	LINE_NUMBER(1760);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getWrapFactory_R_rhino_WrapFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getWrapFactory", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1768);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_wrapFactory;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1769);
	sp[0].o = frame[0].o;
	clinit_rhino_WrapFactory(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_WrapFactory);
	init_rhino_WrapFactory(ctx, sp[1].o);
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_wrapFactory = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1771);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_wrapFactory;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getDebugger_R_rhino_debug_Debugger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getDebugger", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1779);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_debugger;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getDebuggerContextData_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getDebuggerContextData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1787);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_debuggerData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setDebugger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1798);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1799);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_debugger = (jref) (frame[1].o);
	LINE_NUMBER(1800);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_debuggerData = (jref) (frame[2].o);
	LINE_NUMBER(1801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_getDebuggableView_rhino_Script_R_rhino_debug_DebuggableScript(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getDebuggableView", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1809);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeFunction)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getDebuggableView_R_rhino_debug_DebuggableScript) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeFunction, (frame[0].o))))->vtable)[VTABLE_rhino_NativeFunction_getDebuggableView_R_rhino_debug_DebuggableScript])(ctx, (checkCast(ctx, &class_rhino_NativeFunction, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1812);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_hasFeature_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:hasFeature", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1840);
	sp[0].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1841);
	jint temp0 = (jint)((func_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean])(ctx, (frame[2].o), (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_Context_getInstructionObserverThreshold_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getInstructionObserverThreshold", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1853);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionThreshold);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setInstructionObserverThreshold_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setInstructionObserverThreshold", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1872);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1873);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1874);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionThreshold = (frame[1].i);
	LINE_NUMBER(1875);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) <= 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((func_rhino_Context_setGenerateObserverCount_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_setGenerateObserverCount_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1876);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setGenerateObserverCount_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setGenerateObserverCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1890);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generateObserverCount = (frame[1].i);
	LINE_NUMBER(1891);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_observeInstructionCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:observeInstructionCount", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1912);
	sp[0].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1913);
	((func_rhino_ContextFactory_observeInstructionCount_rhino_Context_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ContextFactory_observeInstructionCount_rhino_Context_int])(ctx, (frame[2].o), (frame[0].o), (frame[1].i));
	LINE_NUMBER(1914);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:createClassLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1922);
	sp[0].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1923);
	sp[0].o = (jobject)((func_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader])(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getApplicationClassLoader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1927);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1928);
	sp[0].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1929);
	sp[0].o = (jobject)((func_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1930);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1932);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1933);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(1934);
	jint temp0 = (jint)SM_rhino_Kit_testIfCanLoadRhinoClasses_java_lang_ClassLoader_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1939);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_8:;
	{
	LINE_NUMBER(1944);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1945);
	sp[0].o = frame[4].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ContextFactoryClass;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(1946);
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, (frame[4].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(1948);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1951);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader = (jref) (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(1953);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:setApplicationClassLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1957);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(1958);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1960);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader = (jref) (jobject(nullptr));
	LINE_NUMBER(1961);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1963);
	jint temp0 = (jint)SM_rhino_Kit_testIfCanLoadRhinoClasses_java_lang_ClassLoader_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1964);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Loader can not resolve Rhino classes"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1967);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader = (jref) (frame[1].o);
	LINE_NUMBER(1968);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_getContext_R_rhino_Context(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getContext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(1975);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1976);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1977);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No Context associated with current Thread"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1980);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jbool param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:compileImpl", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(1989);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1990);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"unnamed script"_j)));
	}
label_5:;
	{
	LINE_NUMBER(1994);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	INST_ILOAD(5);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_9;
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_9:;
	{
	LINE_NUMBER(1996);
	clinit_rhino_CompilerEnvirons(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_CompilerEnvirons);
	init_rhino_CompilerEnvirons(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1997);
	((func_rhino_CompilerEnvirons_initFromContext_rhino_Context) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_CompilerEnvirons_initFromContext_rhino_Context])(ctx, (frame[8].o), (frame[0].o));
	LINE_NUMBER(1998);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1999);
	sp[0].o = (jobject)((func_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_CompilerEnvirons_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[8].o));
	frame[7].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(2002);
	sp[0].o = (jobject)M_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i), (frame[8].o), (frame[7].o), (frame[5].i));
	frame[9].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_classfile_ClassFileWriter$ClassFileFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2007);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(2008);
	sp[0].o = (jobject)M_rhino_Context_createCompiler_R_rhino_Evaluator(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(2011);
	sp[0].o = frame[6].o;
	sp[1].o = frame[8].o;
	sp[2].o = frame[9].o;
	sp[3].o = (jobject)((func_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[5].i));
	frame[10].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2020);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2012);
	frame[11].o = sp[0].o;
	LINE_NUMBER(2016);
	sp[0].o = (jobject)M_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i), (frame[8].o), (frame[7].o), (frame[5].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2018);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2019);
	sp[0].o = frame[6].o;
	sp[1].o = frame[8].o;
	sp[2].o = frame[9].o;
	sp[3].o = (jobject)((func_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[5].i));
	frame[10].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(2022);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_debugger;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(2023);
	if ((frame[2].o) != nullptr) goto label_22;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_22:;
	{
	LINE_NUMBER(2024);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_debug_DebuggableScript)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2025);
	frame[11].o = (checkCast(ctx, &class_rhino_debug_DebuggableScript, (frame[10].o)));
	LINE_NUMBER(2026);
	SM_rhino_Context_notifyDebugger_r_rhino_Context_rhino_debug_DebuggableScript_java_lang_String(ctx, (frame[0].o), (frame[11].o), (frame[2].o));
	LINE_NUMBER(2027);
	goto label_20;
	}
label_23:;
	{
	LINE_NUMBER(2028);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NOT SUPPORTED"_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(2033);
	if ((frame[5].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(2034);
	sp[0].o = (jobject)((func_rhino_Evaluator_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function, (frame[6].o)))(ctx, (frame[6].o), (frame[0].o), (frame[1].o), (frame[10].o));
	frame[11].o = sp[0].o;
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(2036);
	sp[0].o = (jobject)((func_rhino_Evaluator_createScriptObject_java_lang_Object_R_rhino_Script) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_createScriptObject_java_lang_Object_R_rhino_Script, (frame[6].o)))(ctx, (frame[6].o), (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(2039);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:parse", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(2045);
	clinit_rhino_Parser(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Parser);
	init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter(ctx, sp[0].o, (frame[4].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2046);
	if ((frame[6].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2047);
	((rhino_Parser *) NULL_CHECK((frame[7].o)))->F_calledByCompileFunction = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2049);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2050);
	((func_rhino_Parser_setDefaultUseStrictDirective_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Parser_setDefaultUseStrictDirective_boolean])(ctx, (frame[7].o), (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(2053);
	sp[0].o = (jobject)((func_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot])(ctx, (frame[7].o), (frame[1].o), (frame[2].o), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2054);
	if ((frame[6].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2056);
	sp[0].o = (jobject)((func_rhino_ast_AstRoot_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ast_AstRoot_getFirstChild_R_rhino_Node])(ctx, (frame[8].o));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[8].o;
	LINE_NUMBER(2057);
	sp[0].o = (jobject)((func_rhino_ast_AstRoot_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstRoot_getFirstChild_R_rhino_Node])(ctx, sp[0].o);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, sp[0].o);
	if (temp0 == (110)) goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(2061);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"compileFunction only accepts source with single JS function: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2066);
	clinit_rhino_IRFactory(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IRFactory);
	init_rhino_IRFactory_rhino_CompilerEnvirons_rhino_ErrorReporter(ctx, sp[0].o, (frame[4].o), (frame[5].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2067);
	sp[0].o = (jobject)((func_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode])(ctx, (frame[9].o), (frame[8].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2068);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_Context_notifyDebugger_r_rhino_Context_rhino_debug_DebuggableScript_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:notifyDebugger_r", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2073);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_debugger;
	((func_rhino_debug_Debugger_handleCompilationDone_rhino_Context_rhino_debug_DebuggableScript_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_debug_Debugger, INDEX_rhino_debug_Debugger_handleCompilationDone_rhino_Context_rhino_debug_DebuggableScript_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(2074);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_rhino_debug_DebuggableScript_getFunctionCount_R_int) resolveInterfaceMethod(ctx, &class_rhino_debug_DebuggableScript, INDEX_rhino_debug_DebuggableScript_getFunctionCount_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_3;
	}
	{
	LINE_NUMBER(2075);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_debug_DebuggableScript_getFunction_int_R_rhino_debug_DebuggableScript) resolveInterfaceMethod(ctx, &class_rhino_debug_DebuggableScript, INDEX_rhino_debug_DebuggableScript_getFunction_int_R_rhino_debug_DebuggableScript, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	SM_rhino_Context_notifyDebugger_r_rhino_Context_rhino_debug_DebuggableScript_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(2074);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(2077);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Context_createCompiler_R_rhino_Evaluator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:createCompiler", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2085);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(2086);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_optimizationLevel) < 0) goto label_2;
	}
	clinit_rhino_Context(ctx);
	(sp++)->o = SF_rhino_Context_codegenClass;
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(2087);
	clinit_rhino_Context(ctx);
	sp[0].o = (jobject)SF_rhino_Context_codegenClass;
	sp[0].o = (jobject)SM_rhino_Kit_newInstanceOrNull_java_lang_Class_R_java_lang_Object(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_rhino_Evaluator, sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2089);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2090);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2092);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_createInterpreter_R_rhino_Evaluator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:createInterpreter", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(2096);
	clinit_rhino_Context(ctx);
	sp[0].o = (jobject)SF_rhino_Context_interpreterClass;
	sp[0].o = (jobject)SM_rhino_Kit_newInstanceOrNull_java_lang_Class_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Evaluator, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getSourcePositionFromStack", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2100);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2101);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2102);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2103);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_lastInterpreterFrame;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2104);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2105);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2106);
	sp[0].o = (jobject)((func_rhino_Evaluator_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Evaluator, INDEX_rhino_Evaluator_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2112);
	clinit_java_lang_Throwable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Throwable);
	init_java_lang_Throwable(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2113);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_10;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2114);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2115);
	if ((frame[7].o) == nullptr) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8".java"_j))));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(2116);
	jint temp0 = (jint)((func_java_lang_StackTraceElement_getLineNumber_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StackTraceElement_getLineNumber_R_int])(ctx, (frame[6].o));
	frame[8].i = temp0;
	LINE_NUMBER(2117);
	if ((frame[8].i) < 0) goto label_13;
	}
	{
	LINE_NUMBER(2118);
	ARRAY_ACCESS(jint, (frame[0].o), (jint(0))) = (frame[8].i);
	LINE_NUMBER(2119);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_13:;
	{
	LINE_NUMBER(2113);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(2124);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:getRegExpProxy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_regExpProxy;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2129);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"rhino.regexp.RegExpImpl"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2131);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_Kit_newInstanceOrNull_java_lang_Class_R_java_lang_Object(ctx, (frame[1].o));
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_regExpProxy = (jref) (checkCast(ctx, &class_rhino_RegExpProxy, sp[1].o));
	}
label_1:;
	{
	LINE_NUMBER(2135);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_regExpProxy;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_isVersionECMA1_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isVersionECMA1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2139);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_version) == (200)) goto label_1;
	}
	{
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_version) < (130)) goto label_2;
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

jbool M_rhino_Context_isGeneratingDebugChanged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isGeneratingDebugChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2143);
	popStackFrame(ctx);
	return ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_generatingDebugChanged);
	}

	popStackFrame(ctx);
}

void M_rhino_Context_addActivationName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:addActivationName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2152);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(2153);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_activationNames;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2154);
	sp[0].o = frame[0].o;
	clinit_java_util_HashSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[1].o);
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_activationNames = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(2155);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_activationNames;
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Context_isActivationNeeded_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isActivationNeeded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2165);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_activationNames;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_activationNames;
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
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

void M_rhino_Context_removeActivationName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:removeActivationName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2174);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	SM_rhino_Context_onSealedMutation(ctx);
label_1:;
	{
	LINE_NUMBER(2175);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_activationNames;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_activationNames;
	jint temp0 = (jint)((func_java_util_Set_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(2177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_Context_isStrictMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:isStrictMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2180);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_isTopLevelStrict) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_currentActivationCall;
	if (((jint)((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_isStrict) == 0) goto label_2;
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

jobject SM_rhino_Context_lambda$call$0_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:lambda$call$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_Context(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Context_VERSION_UNKNOWN = jint(-1);
	SF_rhino_Context_VERSION_DEFAULT = jint(200);
	SF_rhino_Context_VERSION_1_0 = jint(100);
	SF_rhino_Context_VERSION_1_1 = jint(110);
	SF_rhino_Context_VERSION_1_2 = jint(120);
	SF_rhino_Context_VERSION_1_3 = jint(130);
	SF_rhino_Context_VERSION_1_4 = jint(140);
	SF_rhino_Context_VERSION_1_5 = jint(150);
	SF_rhino_Context_VERSION_1_6 = jint(160);
	SF_rhino_Context_VERSION_1_7 = jint(170);
	SF_rhino_Context_VERSION_1_8 = jint(180);
	SF_rhino_Context_VERSION_ES6 = jint(200);
	SF_rhino_Context_FEATURE_NON_ECMA_GET_YEAR = jint(1);
	SF_rhino_Context_FEATURE_MEMBER_EXPR_AS_FUNCTION_NAME = jint(2);
	SF_rhino_Context_FEATURE_RESERVED_KEYWORD_AS_IDENTIFIER = jint(3);
	SF_rhino_Context_FEATURE_TO_STRING_AS_SOURCE = jint(4);
	SF_rhino_Context_FEATURE_PARENT_PROTO_PROPERTIES = jint(5);
	SF_rhino_Context_FEATURE_E4X = jint(6);
	SF_rhino_Context_FEATURE_DYNAMIC_SCOPE = jint(7);
	SF_rhino_Context_FEATURE_STRICT_VARS = jint(8);
	SF_rhino_Context_FEATURE_STRICT_EVAL = jint(9);
	SF_rhino_Context_FEATURE_LOCATION_INFORMATION_IN_ERROR = jint(10);
	SF_rhino_Context_FEATURE_STRICT_MODE = jint(11);
	SF_rhino_Context_FEATURE_WARNING_AS_ERROR = jint(12);
	SF_rhino_Context_FEATURE_ENHANCED_JAVA_ACCESS = jint(13);
	SF_rhino_Context_FEATURE_V8_EXTENSIONS = jint(14);
	SF_rhino_Context_FEATURE_OLD_UNDEF_NULL_THIS = jint(15);
	SF_rhino_Context_FEATURE_ENUMERATE_IDS_FIRST = jint(16);
	SF_rhino_Context_FEATURE_THREAD_SAFE_OBJECTS = jint(17);
	SF_rhino_Context_FEATURE_INTEGER_WITHOUT_DECIMAL_PLACE = jint(18);
	SF_rhino_Context_FEATURE_LITTLE_ENDIAN = jint(19);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Context:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Context(ctx);
	{
	LINE_NUMBER(321);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	clinit_rhino_Context(ctx);
	SF_rhino_Context_emptyArgs = sp[0].o;
	LINE_NUMBER(2079);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"rhino.optimizer.Codegen"_j))));
	clinit_rhino_Context(ctx);
	SF_rhino_Context_codegenClass = sp[0].o;
	LINE_NUMBER(2081);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"rhino.Interpreter"_j))));
	clinit_rhino_Context(ctx);
	SF_rhino_Context_interpreterClass = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Context[] {
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
	(void *) M_rhino_Context_getFactory_R_rhino_ContextFactory,
	(void *) M_rhino_Context_isSealed_R_boolean,
	(void *) M_rhino_Context_seal_java_lang_Object,
	(void *) M_rhino_Context_unseal_java_lang_Object,
	(void *) M_rhino_Context_getLanguageVersion_R_int,
	(void *) M_rhino_Context_setLanguageVersion_int,
	(void *) M_rhino_Context_getImplementationVersion_R_java_lang_String,
	(void *) M_rhino_Context_getErrorReporter_R_rhino_ErrorReporter,
	(void *) M_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter,
	(void *) M_rhino_Context_getLocale_R_java_util_Locale,
	(void *) M_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale,
	(void *) M_rhino_Context_initStandardObjects_R_rhino_ScriptableObject,
	(void *) M_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject,
	(void *) M_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable,
	(void *) M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable,
	(void *) M_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject,
	(void *) M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject,
	(void *) M_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object,
	(void *) M_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object,
	(void *) M_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_Context_captureContinuation_R_rhino_ContinuationPending,
	(void *) M_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean,
	(void *) M_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script,
	(void *) M_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script,
	(void *) M_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script,
	(void *) M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function,
	(void *) M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function,
	(void *) M_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String,
	(void *) M_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String,
	(void *) M_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String,
	(void *) M_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable,
	(void *) M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable,
	(void *) M_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object,
	(void *) M_rhino_Context_isGeneratingDebug_R_boolean,
	(void *) M_rhino_Context_setGeneratingDebug_boolean,
	(void *) M_rhino_Context_isGeneratingSource_R_boolean,
	(void *) M_rhino_Context_setGeneratingSource_boolean,
	(void *) M_rhino_Context_getOptimizationLevel_R_int,
	(void *) M_rhino_Context_setOptimizationLevel_int,
	(void *) M_rhino_Context_getMaximumInterpreterStackDepth_R_int,
	(void *) M_rhino_Context_setMaximumInterpreterStackDepth_int,
	(void *) M_rhino_Context_setClassShutter_rhino_ClassShutter,
	(void *) M_rhino_Context_getClassShutter_R_rhino_ClassShutter,
	(void *) M_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object,
	(void *) M_rhino_Context_removeThreadLocal_java_lang_Object,
	(void *) M_rhino_Context_setWrapFactory_rhino_WrapFactory,
	(void *) M_rhino_Context_getWrapFactory_R_rhino_WrapFactory,
	(void *) M_rhino_Context_getDebugger_R_rhino_debug_Debugger,
	(void *) M_rhino_Context_getDebuggerContextData_R_java_lang_Object,
	(void *) M_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object,
	(void *) M_rhino_Context_hasFeature_int_R_boolean,
	(void *) M_rhino_Context_getInstructionObserverThreshold_R_int,
	(void *) M_rhino_Context_setInstructionObserverThreshold_int,
	(void *) M_rhino_Context_setGenerateObserverCount_boolean,
	(void *) M_rhino_Context_observeInstructionCount_int,
	(void *) M_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader,
	(void *) M_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader,
	(void *) M_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader,
	(void *) M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object,
	(void *) M_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode,
	(void *) M_rhino_Context_createCompiler_R_rhino_Evaluator,
	(void *) M_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy,
	(void *) M_rhino_Context_isVersionECMA1_R_boolean,
	(void *) M_rhino_Context_isGeneratingDebugChanged_R_boolean,
	(void *) M_rhino_Context_addActivationName_java_lang_String,
	(void *) M_rhino_Context_isActivationNeeded_java_lang_String_R_boolean,
	(void *) M_rhino_Context_removeActivationName_java_lang_String,
	(void *) M_rhino_Context_isStrictMode_R_boolean,
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
	{ "getFactory", "()Lrhino/ContextFactory;" },
	{ "isSealed", "()Z" },
	{ "seal", "(Ljava/lang/Object;)V" },
	{ "unseal", "(Ljava/lang/Object;)V" },
	{ "getLanguageVersion", "()I" },
	{ "setLanguageVersion", "(I)V" },
	{ "getImplementationVersion", "()Ljava/lang/String;" },
	{ "getErrorReporter", "()Lrhino/ErrorReporter;" },
	{ "setErrorReporter", "(Lrhino/ErrorReporter;)Lrhino/ErrorReporter;" },
	{ "getLocale", "()Ljava/util/Locale;" },
	{ "setLocale", "(Ljava/util/Locale;)Ljava/util/Locale;" },
	{ "initStandardObjects", "()Lrhino/ScriptableObject;" },
	{ "initSafeStandardObjects", "()Lrhino/ScriptableObject;" },
	{ "initStandardObjects", "(Lrhino/ScriptableObject;)Lrhino/Scriptable;" },
	{ "initSafeStandardObjects", "(Lrhino/ScriptableObject;)Lrhino/Scriptable;" },
	{ "initStandardObjects", "(Lrhino/ScriptableObject;Z)Lrhino/ScriptableObject;" },
	{ "initSafeStandardObjects", "(Lrhino/ScriptableObject;Z)Lrhino/ScriptableObject;" },
	{ "evaluateString", "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/Object;" },
	{ "evaluateReader", "(Lrhino/Scriptable;Ljava/io/Reader;Ljava/lang/String;I)Ljava/lang/Object;" },
	{ "executeScriptWithContinuations", "(Lrhino/Script;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "callFunctionWithContinuations", "(Lrhino/Callable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "captureContinuation", "()Lrhino/ContinuationPending;" },
	{ "resumeContinuation", "(Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "stringIsCompilableUnit", "(Ljava/lang/String;)Z" },
	{ "compileReader", "(Ljava/io/Reader;Ljava/lang/String;I)Lrhino/Script;" },
	{ "compileString", "(Ljava/lang/String;Ljava/lang/String;I)Lrhino/Script;" },
	{ "compileString", "(Ljava/lang/String;Lrhino/Evaluator;Lrhino/ErrorReporter;Ljava/lang/String;I)Lrhino/Script;" },
	{ "compileFunction", "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;I)Lrhino/Function;" },
	{ "compileFunction", "(Lrhino/Scriptable;Ljava/lang/String;Lrhino/Evaluator;Lrhino/ErrorReporter;Ljava/lang/String;I)Lrhino/Function;" },
	{ "decompileScript", "(Lrhino/Script;I)Ljava/lang/String;" },
	{ "decompileFunction", "(Lrhino/Function;I)Ljava/lang/String;" },
	{ "decompileFunctionBody", "(Lrhino/Function;I)Ljava/lang/String;" },
	{ "newObject", "(Lrhino/Scriptable;)Lrhino/Scriptable;" },
	{ "newObject", "(Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Scriptable;" },
	{ "newObject", "(Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "newArray", "(Lrhino/Scriptable;I)Lrhino/Scriptable;" },
	{ "newArray", "(Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "getElements", "(Lrhino/Scriptable;)[Ljava/lang/Object;" },
	{ "isGeneratingDebug", "()Z" },
	{ "setGeneratingDebug", "(Z)V" },
	{ "isGeneratingSource", "()Z" },
	{ "setGeneratingSource", "(Z)V" },
	{ "getOptimizationLevel", "()I" },
	{ "setOptimizationLevel", "(I)V" },
	{ "getMaximumInterpreterStackDepth", "()I" },
	{ "setMaximumInterpreterStackDepth", "(I)V" },
	{ "setClassShutter", "(Lrhino/ClassShutter;)V" },
	{ "getClassShutter", "()Lrhino/ClassShutter;" },
	{ "getThreadLocal", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putThreadLocal", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "removeThreadLocal", "(Ljava/lang/Object;)V" },
	{ "setWrapFactory", "(Lrhino/WrapFactory;)V" },
	{ "getWrapFactory", "()Lrhino/WrapFactory;" },
	{ "getDebugger", "()Lrhino/debug/Debugger;" },
	{ "getDebuggerContextData", "()Ljava/lang/Object;" },
	{ "setDebugger", "(Lrhino/debug/Debugger;Ljava/lang/Object;)V" },
	{ "hasFeature", "(I)Z" },
	{ "getInstructionObserverThreshold", "()I" },
	{ "setInstructionObserverThreshold", "(I)V" },
	{ "setGenerateObserverCount", "(Z)V" },
	{ "observeInstructionCount", "(I)V" },
	{ "createClassLoader", "(Ljava/lang/ClassLoader;)Lrhino/GeneratedClassLoader;" },
	{ "getApplicationClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "setApplicationClassLoader", "(Ljava/lang/ClassLoader;)V" },
	{ "compileImpl", "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;IZLrhino/Evaluator;Lrhino/ErrorReporter;)Ljava/lang/Object;" },
	{ "parse", "(Ljava/lang/String;Ljava/lang/String;ILrhino/CompilerEnvirons;Lrhino/ErrorReporter;Z)Lrhino/ast/ScriptNode;" },
	{ "createCompiler", "()Lrhino/Evaluator;" },
	{ "getRegExpProxy", "()Lrhino/RegExpProxy;" },
	{ "isVersionECMA1", "()Z" },
	{ "isGeneratingDebugChanged", "()Z" },
	{ "addActivationName", "(Ljava/lang/String;)V" },
	{ "isActivationNeeded", "(Ljava/lang/String;)Z" },
	{ "removeActivationName", "(Ljava/lang/String;)V" },
	{ "isStrictMode", "()Z" },
};

static FieldMetadata fields[] {
	{ "VERSION_UNKNOWN", &class_int, (intptr_t) &SF_rhino_Context_VERSION_UNKNOWN, "I", 25 },
	{ "VERSION_DEFAULT", &class_int, (intptr_t) &SF_rhino_Context_VERSION_DEFAULT, "I", 25 },
	{ "VERSION_1_0", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_0, "I", 25 },
	{ "VERSION_1_1", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_1, "I", 25 },
	{ "VERSION_1_2", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_2, "I", 25 },
	{ "VERSION_1_3", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_3, "I", 25 },
	{ "VERSION_1_4", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_4, "I", 25 },
	{ "VERSION_1_5", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_5, "I", 25 },
	{ "VERSION_1_6", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_6, "I", 25 },
	{ "VERSION_1_7", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_7, "I", 25 },
	{ "VERSION_1_8", &class_int, (intptr_t) &SF_rhino_Context_VERSION_1_8, "I", 25 },
	{ "VERSION_ES6", &class_int, (intptr_t) &SF_rhino_Context_VERSION_ES6, "I", 25 },
	{ "FEATURE_NON_ECMA_GET_YEAR", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_NON_ECMA_GET_YEAR, "I", 25 },
	{ "FEATURE_MEMBER_EXPR_AS_FUNCTION_NAME", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_MEMBER_EXPR_AS_FUNCTION_NAME, "I", 25 },
	{ "FEATURE_RESERVED_KEYWORD_AS_IDENTIFIER", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_RESERVED_KEYWORD_AS_IDENTIFIER, "I", 25 },
	{ "FEATURE_TO_STRING_AS_SOURCE", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_TO_STRING_AS_SOURCE, "I", 25 },
	{ "FEATURE_PARENT_PROTO_PROPERTIES", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_PARENT_PROTO_PROPERTIES, "I", 25 },
	{ "FEATURE_E4X", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_E4X, "I", 25 },
	{ "FEATURE_DYNAMIC_SCOPE", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_DYNAMIC_SCOPE, "I", 25 },
	{ "FEATURE_STRICT_VARS", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_STRICT_VARS, "I", 25 },
	{ "FEATURE_STRICT_EVAL", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_STRICT_EVAL, "I", 25 },
	{ "FEATURE_LOCATION_INFORMATION_IN_ERROR", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_LOCATION_INFORMATION_IN_ERROR, "I", 25 },
	{ "FEATURE_STRICT_MODE", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_STRICT_MODE, "I", 25 },
	{ "FEATURE_WARNING_AS_ERROR", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_WARNING_AS_ERROR, "I", 25 },
	{ "FEATURE_ENHANCED_JAVA_ACCESS", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_ENHANCED_JAVA_ACCESS, "I", 25 },
	{ "FEATURE_V8_EXTENSIONS", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_V8_EXTENSIONS, "I", 25 },
	{ "FEATURE_OLD_UNDEF_NULL_THIS", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_OLD_UNDEF_NULL_THIS, "I", 25 },
	{ "FEATURE_ENUMERATE_IDS_FIRST", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_ENUMERATE_IDS_FIRST, "I", 25 },
	{ "FEATURE_THREAD_SAFE_OBJECTS", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_THREAD_SAFE_OBJECTS, "I", 25 },
	{ "FEATURE_INTEGER_WITHOUT_DECIMAL_PLACE", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_INTEGER_WITHOUT_DECIMAL_PLACE, "I", 25 },
	{ "FEATURE_LITTLE_ENDIAN", &class_int, (intptr_t) &SF_rhino_Context_FEATURE_LITTLE_ENDIAN, "I", 25 },
	{ "emptyArgs", getArrayClass(&class_java_lang_Object, 1), (intptr_t) &SF_rhino_Context_emptyArgs, "[Ljava/lang/Object;", 25 },
	{ "codegenClass", &class_java_lang_Class, (intptr_t) &SF_rhino_Context_codegenClass, "Ljava/lang/Class;", 26 },
	{ "interpreterClass", &class_java_lang_Class, (intptr_t) &SF_rhino_Context_interpreterClass, "Ljava/lang/Class;", 26 },
	{ "implementationVersion", &class_java_lang_String, (intptr_t) &SF_rhino_Context_implementationVersion, "Ljava/lang/String;", 10 },
	{ "factory", &class_rhino_ContextFactory, offsetof(rhino_Context, F_factory), "Lrhino/ContextFactory;", 18 },
	{ "sealed", &class_boolean, offsetof(rhino_Context, F_sealed), "Z", 2 },
	{ "sealKey", &class_java_lang_Object, offsetof(rhino_Context, F_sealKey), "Ljava/lang/Object;", 2 },
	{ "topCallScope", &class_rhino_Scriptable, offsetof(rhino_Context, F_topCallScope), "Lrhino/Scriptable;", 0 },
	{ "isContinuationsTopCall", &class_boolean, offsetof(rhino_Context, F_isContinuationsTopCall), "Z", 0 },
	{ "currentActivationCall", &class_rhino_NativeCall, offsetof(rhino_Context, F_currentActivationCall), "Lrhino/NativeCall;", 0 },
	{ "typeErrorThrower", &class_rhino_BaseFunction, offsetof(rhino_Context, F_typeErrorThrower), "Lrhino/BaseFunction;", 0 },
	{ "iterating", &class_rhino_ObjToIntMap, offsetof(rhino_Context, F_iterating), "Lrhino/ObjToIntMap;", 0 },
	{ "version", &class_int, offsetof(rhino_Context, F_version), "I", 0 },
	{ "hasClassShutter", &class_boolean, offsetof(rhino_Context, F_hasClassShutter), "Z", 2 },
	{ "classShutter", &class_rhino_ClassShutter, offsetof(rhino_Context, F_classShutter), "Lrhino/ClassShutter;", 2 },
	{ "errorReporter", &class_rhino_ErrorReporter, offsetof(rhino_Context, F_errorReporter), "Lrhino/ErrorReporter;", 2 },
	{ "regExpProxy", &class_rhino_RegExpProxy, offsetof(rhino_Context, F_regExpProxy), "Lrhino/RegExpProxy;", 0 },
	{ "locale", &class_java_util_Locale, offsetof(rhino_Context, F_locale), "Ljava/util/Locale;", 2 },
	{ "generatingDebug", &class_boolean, offsetof(rhino_Context, F_generatingDebug), "Z", 2 },
	{ "generatingDebugChanged", &class_boolean, offsetof(rhino_Context, F_generatingDebugChanged), "Z", 2 },
	{ "generatingSource", &class_boolean, offsetof(rhino_Context, F_generatingSource), "Z", 2 },
	{ "useDynamicScope", &class_boolean, offsetof(rhino_Context, F_useDynamicScope), "Z", 0 },
	{ "optimizationLevel", &class_int, offsetof(rhino_Context, F_optimizationLevel), "I", 2 },
	{ "maximumInterpreterStackDepth", &class_int, offsetof(rhino_Context, F_maximumInterpreterStackDepth), "I", 2 },
	{ "wrapFactory", &class_rhino_WrapFactory, offsetof(rhino_Context, F_wrapFactory), "Lrhino/WrapFactory;", 2 },
	{ "debugger", &class_rhino_debug_Debugger, offsetof(rhino_Context, F_debugger), "Lrhino/debug/Debugger;", 0 },
	{ "debuggerData", &class_java_lang_Object, offsetof(rhino_Context, F_debuggerData), "Ljava/lang/Object;", 2 },
	{ "enterCount", &class_int, offsetof(rhino_Context, F_enterCount), "I", 2 },
	{ "threadLocalMap", &class_java_util_Map, offsetof(rhino_Context, F_threadLocalMap), "Ljava/util/Map;", 2 },
	{ "applicationClassLoader", &class_java_lang_ClassLoader, offsetof(rhino_Context, F_applicationClassLoader), "Ljava/lang/ClassLoader;", 2 },
	{ "activationNames", &class_java_util_Set, offsetof(rhino_Context, F_activationNames), "Ljava/util/Set;", 0 },
	{ "lastInterpreterFrame", &class_java_lang_Object, offsetof(rhino_Context, F_lastInterpreterFrame), "Ljava/lang/Object;", 0 },
	{ "previousInterpreterInvocations", &class_rhino_ObjArray, offsetof(rhino_Context, F_previousInterpreterInvocations), "Lrhino/ObjArray;", 0 },
	{ "instructionCount", &class_int, offsetof(rhino_Context, F_instructionCount), "I", 0 },
	{ "instructionThreshold", &class_int, offsetof(rhino_Context, F_instructionThreshold), "I", 0 },
	{ "scratchUint32", &class_long, offsetof(rhino_Context, F_scratchUint32), "J", 0 },
	{ "scratchScriptable", &class_rhino_Scriptable, offsetof(rhino_Context, F_scratchScriptable), "Lrhino/Scriptable;", 0 },
	{ "generateObserverCount", &class_boolean, offsetof(rhino_Context, F_generateObserverCount), "Z", 1 },
	{ "isTopLevelStrict", &class_boolean, offsetof(rhino_Context, F_isTopLevelStrict), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Context_rhino_ContextFactory, 0, "(Lrhino/ContextFactory;)V", 4 },
	{ "getCurrentContext", (intptr_t) SM_rhino_Context_getCurrentContext_R_rhino_Context, 0, "()Lrhino/Context;", 9 },
	{ "enter", (intptr_t) SM_rhino_Context_enter_R_rhino_Context, 0, "()Lrhino/Context;", 9 },
	{ "enter", (intptr_t) SM_rhino_Context_enter_rhino_Context_rhino_ContextFactory_R_rhino_Context, 0, "(Lrhino/Context;Lrhino/ContextFactory;)Lrhino/Context;", 8 },
	{ "exit", (intptr_t) SM_rhino_Context_exit, 0, "()V", 9 },
	{ "call", (intptr_t) SM_rhino_Context_call_rhino_ContextFactory_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/ContextFactory;Lrhino/Callable;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "call", (intptr_t) SM_rhino_Context_call_rhino_ContextFactory_rhino_ContextAction_R_java_lang_Object, 0, "(Lrhino/ContextFactory;Lrhino/ContextAction;)Ljava/lang/Object;", 8 },
	{ "getFactory", (intptr_t) M_rhino_Context_getFactory_R_rhino_ContextFactory, VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory, "()Lrhino/ContextFactory;", 17 },
	{ "isSealed", (intptr_t) M_rhino_Context_isSealed_R_boolean, VTABLE_rhino_Context_isSealed_R_boolean, "()Z", 17 },
	{ "seal", (intptr_t) M_rhino_Context_seal_java_lang_Object, VTABLE_rhino_Context_seal_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "unseal", (intptr_t) M_rhino_Context_unseal_java_lang_Object, VTABLE_rhino_Context_unseal_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "onSealedMutation", (intptr_t) SM_rhino_Context_onSealedMutation, 0, "()V", 8 },
	{ "getLanguageVersion", (intptr_t) M_rhino_Context_getLanguageVersion_R_int, VTABLE_rhino_Context_getLanguageVersion_R_int, "()I", 17 },
	{ "setLanguageVersion", (intptr_t) M_rhino_Context_setLanguageVersion_int, VTABLE_rhino_Context_setLanguageVersion_int, "(I)V", 1 },
	{ "isValidLanguageVersion", (intptr_t) SM_rhino_Context_isValidLanguageVersion_int_R_boolean, 0, "(I)Z", 9 },
	{ "checkLanguageVersion", (intptr_t) SM_rhino_Context_checkLanguageVersion_int, 0, "(I)V", 9 },
	{ "getImplementationVersion", (intptr_t) M_rhino_Context_getImplementationVersion_R_java_lang_String, VTABLE_rhino_Context_getImplementationVersion_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "getErrorReporter", (intptr_t) M_rhino_Context_getErrorReporter_R_rhino_ErrorReporter, VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter, "()Lrhino/ErrorReporter;", 17 },
	{ "setErrorReporter", (intptr_t) M_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter, VTABLE_rhino_Context_setErrorReporter_rhino_ErrorReporter_R_rhino_ErrorReporter, "(Lrhino/ErrorReporter;)Lrhino/ErrorReporter;", 17 },
	{ "getLocale", (intptr_t) M_rhino_Context_getLocale_R_java_util_Locale, VTABLE_rhino_Context_getLocale_R_java_util_Locale, "()Ljava/util/Locale;", 17 },
	{ "setLocale", (intptr_t) M_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale, VTABLE_rhino_Context_setLocale_java_util_Locale_R_java_util_Locale, "(Ljava/util/Locale;)Ljava/util/Locale;", 17 },
	{ "reportWarning", (intptr_t) SM_rhino_Context_reportWarning_java_lang_String_java_lang_String_int_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 9 },
	{ "reportWarning", (intptr_t) SM_rhino_Context_reportWarning_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "reportWarning", (intptr_t) SM_rhino_Context_reportWarning_java_lang_String_java_lang_Throwable, 0, "(Ljava/lang/String;Ljava/lang/Throwable;)V", 9 },
	{ "reportError", (intptr_t) SM_rhino_Context_reportError_java_lang_String_java_lang_String_int_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 9 },
	{ "reportError", (intptr_t) SM_rhino_Context_reportError_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "reportRuntimeError", (intptr_t) SM_rhino_Context_reportRuntimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EvaluatorException;", 9 },
	{ "reportRuntimeError0", (intptr_t) SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;)Lrhino/EvaluatorException;", 8 },
	{ "reportRuntimeError1", (intptr_t) SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/EvaluatorException;", 8 },
	{ "reportRuntimeError2", (intptr_t) SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lrhino/EvaluatorException;", 8 },
	{ "reportRuntimeError3", (intptr_t) SM_rhino_Context_reportRuntimeError3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lrhino/EvaluatorException;", 8 },
	{ "reportRuntimeError4", (intptr_t) SM_rhino_Context_reportRuntimeError4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lrhino/EvaluatorException;", 8 },
	{ "reportRuntimeError", (intptr_t) SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException, 0, "(Ljava/lang/String;)Lrhino/EvaluatorException;", 9 },
	{ "initStandardObjects", (intptr_t) M_rhino_Context_initStandardObjects_R_rhino_ScriptableObject, VTABLE_rhino_Context_initStandardObjects_R_rhino_ScriptableObject, "()Lrhino/ScriptableObject;", 17 },
	{ "initSafeStandardObjects", (intptr_t) M_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject, VTABLE_rhino_Context_initSafeStandardObjects_R_rhino_ScriptableObject, "()Lrhino/ScriptableObject;", 17 },
	{ "initStandardObjects", (intptr_t) M_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable, VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable, "(Lrhino/ScriptableObject;)Lrhino/Scriptable;", 17 },
	{ "initSafeStandardObjects", (intptr_t) M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable, VTABLE_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_R_rhino_Scriptable, "(Lrhino/ScriptableObject;)Lrhino/Scriptable;", 17 },
	{ "initStandardObjects", (intptr_t) M_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject, VTABLE_rhino_Context_initStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject, "(Lrhino/ScriptableObject;Z)Lrhino/ScriptableObject;", 1 },
	{ "initSafeStandardObjects", (intptr_t) M_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject, VTABLE_rhino_Context_initSafeStandardObjects_rhino_ScriptableObject_boolean_R_rhino_ScriptableObject, "(Lrhino/ScriptableObject;Z)Lrhino/ScriptableObject;", 1 },
	{ "getUndefinedValue", (intptr_t) SM_rhino_Context_getUndefinedValue_R_java_lang_Object, 0, "()Ljava/lang/Object;", 9 },
	{ "evaluateString", (intptr_t) M_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object, VTABLE_rhino_Context_evaluateString_rhino_Scriptable_java_lang_String_java_lang_String_int_R_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/Object;", 17 },
	{ "evaluateReader", (intptr_t) M_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object, VTABLE_rhino_Context_evaluateReader_rhino_Scriptable_java_io_Reader_java_lang_String_int_R_java_lang_Object, "(Lrhino/Scriptable;Ljava/io/Reader;Ljava/lang/String;I)Ljava/lang/Object;", 17 },
	{ "executeScriptWithContinuations", (intptr_t) M_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_Context_executeScriptWithContinuations_rhino_Script_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Script;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "callFunctionWithContinuations", (intptr_t) M_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Context_callFunctionWithContinuations_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Callable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "captureContinuation", (intptr_t) M_rhino_Context_captureContinuation_R_rhino_ContinuationPending, VTABLE_rhino_Context_captureContinuation_R_rhino_ContinuationPending, "()Lrhino/ContinuationPending;", 1 },
	{ "resumeContinuation", (intptr_t) M_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Context_resumeContinuation_java_lang_Object_rhino_Scriptable_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "stringIsCompilableUnit", (intptr_t) M_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean, VTABLE_rhino_Context_stringIsCompilableUnit_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 17 },
	{ "compileReader", (intptr_t) M_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script, VTABLE_rhino_Context_compileReader_java_io_Reader_java_lang_String_int_R_rhino_Script, "(Ljava/io/Reader;Ljava/lang/String;I)Lrhino/Script;", 17 },
	{ "compileString", (intptr_t) M_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script, VTABLE_rhino_Context_compileString_java_lang_String_java_lang_String_int_R_rhino_Script, "(Ljava/lang/String;Ljava/lang/String;I)Lrhino/Script;", 17 },
	{ "compileString", (intptr_t) M_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script, VTABLE_rhino_Context_compileString_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Script, "(Ljava/lang/String;Lrhino/Evaluator;Lrhino/ErrorReporter;Ljava/lang/String;I)Lrhino/Script;", 16 },
	{ "compileFunction", (intptr_t) M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function, VTABLE_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_java_lang_String_int_R_rhino_Function, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;I)Lrhino/Function;", 17 },
	{ "compileFunction", (intptr_t) M_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function, VTABLE_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function, "(Lrhino/Scriptable;Ljava/lang/String;Lrhino/Evaluator;Lrhino/ErrorReporter;Ljava/lang/String;I)Lrhino/Function;", 16 },
	{ "decompileScript", (intptr_t) M_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String, VTABLE_rhino_Context_decompileScript_rhino_Script_int_R_java_lang_String, "(Lrhino/Script;I)Ljava/lang/String;", 17 },
	{ "decompileFunction", (intptr_t) M_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String, VTABLE_rhino_Context_decompileFunction_rhino_Function_int_R_java_lang_String, "(Lrhino/Function;I)Ljava/lang/String;", 17 },
	{ "decompileFunctionBody", (intptr_t) M_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String, VTABLE_rhino_Context_decompileFunctionBody_rhino_Function_int_R_java_lang_String, "(Lrhino/Function;I)Ljava/lang/String;", 17 },
	{ "newObject", (intptr_t) M_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable, VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable, "(Lrhino/Scriptable;)Lrhino/Scriptable;", 1 },
	{ "newObject", (intptr_t) M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable, VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable, "(Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Scriptable;", 1 },
	{ "newObject", (intptr_t) M_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "newArray", (intptr_t) M_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable, VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable, "(Lrhino/Scriptable;I)Lrhino/Scriptable;", 1 },
	{ "newArray", (intptr_t) M_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "getElements", (intptr_t) M_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object, VTABLE_rhino_Context_getElements_rhino_Scriptable_R_Array1_java_lang_Object, "(Lrhino/Scriptable;)[Ljava/lang/Object;", 17 },
	{ "toBoolean", (intptr_t) SM_rhino_Context_toBoolean_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "toNumber", (intptr_t) SM_rhino_Context_toNumber_java_lang_Object_R_double, 0, "(Ljava/lang/Object;)D", 9 },
	{ "toString", (intptr_t) SM_rhino_Context_toString_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "toObject", (intptr_t) SM_rhino_Context_toObject_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable, 0, "(Ljava/lang/Object;Lrhino/Scriptable;)Lrhino/Scriptable;", 9 },
	{ "javaToJS", (intptr_t) SM_rhino_Context_javaToJS_java_lang_Object_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "jsToJava", (intptr_t) SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "throwAsScriptRuntimeEx", (intptr_t) SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException, 0, "(Ljava/lang/Throwable;)Ljava/lang/RuntimeException;", 9 },
	{ "isGeneratingDebug", (intptr_t) M_rhino_Context_isGeneratingDebug_R_boolean, VTABLE_rhino_Context_isGeneratingDebug_R_boolean, "()Z", 17 },
	{ "setGeneratingDebug", (intptr_t) M_rhino_Context_setGeneratingDebug_boolean, VTABLE_rhino_Context_setGeneratingDebug_boolean, "(Z)V", 17 },
	{ "isGeneratingSource", (intptr_t) M_rhino_Context_isGeneratingSource_R_boolean, VTABLE_rhino_Context_isGeneratingSource_R_boolean, "()Z", 17 },
	{ "setGeneratingSource", (intptr_t) M_rhino_Context_setGeneratingSource_boolean, VTABLE_rhino_Context_setGeneratingSource_boolean, "(Z)V", 17 },
	{ "getOptimizationLevel", (intptr_t) M_rhino_Context_getOptimizationLevel_R_int, VTABLE_rhino_Context_getOptimizationLevel_R_int, "()I", 17 },
	{ "setOptimizationLevel", (intptr_t) M_rhino_Context_setOptimizationLevel_int, VTABLE_rhino_Context_setOptimizationLevel_int, "(I)V", 17 },
	{ "isValidOptimizationLevel", (intptr_t) SM_rhino_Context_isValidOptimizationLevel_int_R_boolean, 0, "(I)Z", 9 },
	{ "checkOptimizationLevel", (intptr_t) SM_rhino_Context_checkOptimizationLevel_int, 0, "(I)V", 9 },
	{ "getMaximumInterpreterStackDepth", (intptr_t) M_rhino_Context_getMaximumInterpreterStackDepth_R_int, VTABLE_rhino_Context_getMaximumInterpreterStackDepth_R_int, "()I", 17 },
	{ "setMaximumInterpreterStackDepth", (intptr_t) M_rhino_Context_setMaximumInterpreterStackDepth_int, VTABLE_rhino_Context_setMaximumInterpreterStackDepth_int, "(I)V", 17 },
	{ "setClassShutter", (intptr_t) M_rhino_Context_setClassShutter_rhino_ClassShutter, VTABLE_rhino_Context_setClassShutter_rhino_ClassShutter, "(Lrhino/ClassShutter;)V", 49 },
	{ "getClassShutter", (intptr_t) M_rhino_Context_getClassShutter_R_rhino_ClassShutter, VTABLE_rhino_Context_getClassShutter_R_rhino_ClassShutter, "()Lrhino/ClassShutter;", 48 },
	{ "getThreadLocal", (intptr_t) M_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Context_getThreadLocal_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 17 },
	{ "putThreadLocal", (intptr_t) M_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object, VTABLE_rhino_Context_putThreadLocal_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 49 },
	{ "removeThreadLocal", (intptr_t) M_rhino_Context_removeThreadLocal_java_lang_Object, VTABLE_rhino_Context_removeThreadLocal_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "setWrapFactory", (intptr_t) M_rhino_Context_setWrapFactory_rhino_WrapFactory, VTABLE_rhino_Context_setWrapFactory_rhino_WrapFactory, "(Lrhino/WrapFactory;)V", 17 },
	{ "getWrapFactory", (intptr_t) M_rhino_Context_getWrapFactory_R_rhino_WrapFactory, VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory, "()Lrhino/WrapFactory;", 17 },
	{ "getDebugger", (intptr_t) M_rhino_Context_getDebugger_R_rhino_debug_Debugger, VTABLE_rhino_Context_getDebugger_R_rhino_debug_Debugger, "()Lrhino/debug/Debugger;", 17 },
	{ "getDebuggerContextData", (intptr_t) M_rhino_Context_getDebuggerContextData_R_java_lang_Object, VTABLE_rhino_Context_getDebuggerContextData_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "setDebugger", (intptr_t) M_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object, VTABLE_rhino_Context_setDebugger_rhino_debug_Debugger_java_lang_Object, "(Lrhino/debug/Debugger;Ljava/lang/Object;)V", 17 },
	{ "getDebuggableView", (intptr_t) SM_rhino_Context_getDebuggableView_rhino_Script_R_rhino_debug_DebuggableScript, 0, "(Lrhino/Script;)Lrhino/debug/DebuggableScript;", 9 },
	{ "hasFeature", (intptr_t) M_rhino_Context_hasFeature_int_R_boolean, VTABLE_rhino_Context_hasFeature_int_R_boolean, "(I)Z", 1 },
	{ "getInstructionObserverThreshold", (intptr_t) M_rhino_Context_getInstructionObserverThreshold_R_int, VTABLE_rhino_Context_getInstructionObserverThreshold_R_int, "()I", 17 },
	{ "setInstructionObserverThreshold", (intptr_t) M_rhino_Context_setInstructionObserverThreshold_int, VTABLE_rhino_Context_setInstructionObserverThreshold_int, "(I)V", 17 },
	{ "setGenerateObserverCount", (intptr_t) M_rhino_Context_setGenerateObserverCount_boolean, VTABLE_rhino_Context_setGenerateObserverCount_boolean, "(Z)V", 1 },
	{ "observeInstructionCount", (intptr_t) M_rhino_Context_observeInstructionCount_int, VTABLE_rhino_Context_observeInstructionCount_int, "(I)V", 4 },
	{ "createClassLoader", (intptr_t) M_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader, VTABLE_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader, "(Ljava/lang/ClassLoader;)Lrhino/GeneratedClassLoader;", 1 },
	{ "getApplicationClassLoader", (intptr_t) M_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader, VTABLE_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader, "()Ljava/lang/ClassLoader;", 17 },
	{ "setApplicationClassLoader", (intptr_t) M_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader, VTABLE_rhino_Context_setApplicationClassLoader_java_lang_ClassLoader, "(Ljava/lang/ClassLoader;)V", 17 },
	{ "getContext", (intptr_t) SM_rhino_Context_getContext_R_rhino_Context, 0, "()Lrhino/Context;", 9 },
	{ "compileImpl", (intptr_t) M_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object, VTABLE_rhino_Context_compileImpl_rhino_Scriptable_java_lang_String_java_lang_String_int_boolean_rhino_Evaluator_rhino_ErrorReporter_R_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;IZLrhino/Evaluator;Lrhino/ErrorReporter;)Ljava/lang/Object;", 2 },
	{ "parse", (intptr_t) M_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode, VTABLE_rhino_Context_parse_java_lang_String_java_lang_String_int_rhino_CompilerEnvirons_rhino_ErrorReporter_boolean_R_rhino_ast_ScriptNode, "(Ljava/lang/String;Ljava/lang/String;ILrhino/CompilerEnvirons;Lrhino/ErrorReporter;Z)Lrhino/ast/ScriptNode;", 2 },
	{ "notifyDebugger_r", (intptr_t) SM_rhino_Context_notifyDebugger_r_rhino_Context_rhino_debug_DebuggableScript_java_lang_String, 0, "(Lrhino/Context;Lrhino/debug/DebuggableScript;Ljava/lang/String;)V", 10 },
	{ "createCompiler", (intptr_t) M_rhino_Context_createCompiler_R_rhino_Evaluator, VTABLE_rhino_Context_createCompiler_R_rhino_Evaluator, "()Lrhino/Evaluator;", 2 },
	{ "createInterpreter", (intptr_t) SM_rhino_Context_createInterpreter_R_rhino_Evaluator, 0, "()Lrhino/Evaluator;", 8 },
	{ "getSourcePositionFromStack", (intptr_t) SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String, 0, "([I)Ljava/lang/String;", 8 },
	{ "getRegExpProxy", (intptr_t) M_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy, VTABLE_rhino_Context_getRegExpProxy_R_rhino_RegExpProxy, "()Lrhino/RegExpProxy;", 0 },
	{ "isVersionECMA1", (intptr_t) M_rhino_Context_isVersionECMA1_R_boolean, VTABLE_rhino_Context_isVersionECMA1_R_boolean, "()Z", 16 },
	{ "isGeneratingDebugChanged", (intptr_t) M_rhino_Context_isGeneratingDebugChanged_R_boolean, VTABLE_rhino_Context_isGeneratingDebugChanged_R_boolean, "()Z", 17 },
	{ "addActivationName", (intptr_t) M_rhino_Context_addActivationName_java_lang_String, VTABLE_rhino_Context_addActivationName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "isActivationNeeded", (intptr_t) M_rhino_Context_isActivationNeeded_java_lang_String_R_boolean, VTABLE_rhino_Context_isActivationNeeded_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 17 },
	{ "removeActivationName", (intptr_t) M_rhino_Context_removeActivationName_java_lang_String, VTABLE_rhino_Context_removeActivationName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "isStrictMode", (intptr_t) M_rhino_Context_isStrictMode_R_boolean, VTABLE_rhino_Context_isStrictMode_R_boolean, "()Z", 17 },
	{ "lambda$call$0", (intptr_t) SM_rhino_Context_lambda$call$0_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Callable;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;Lrhino/Context;)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_rhino_Context, 0, "()V", 8 },
};

Class class_rhino_Context{
		.nativeName = (intptr_t) "rhino/Context",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Context),
		.classVtable = (intptr_t) vtable_rhino_Context,
		.staticInitializer = (intptr_t) clinit_rhino_Context,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Context,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 70,
		.nativeFields = (intptr_t) fields,
		.methodCount = 113,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 85,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Context = registerClass(&class_rhino_Context);

}
