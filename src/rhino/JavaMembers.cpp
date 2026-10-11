#include "rhino/JavaMembers.h"
#include "java/lang/StringBuilder.h"
#include "rhino/NativeJavaConstructor.h"
#include "rhino/WrapFactory.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/HashMap.h"
#include "rhino/FieldAndMethods.h"
#include "rhino/Scriptable.h"
#include "java/util/ArrayList.h"
#include "rhino/BaseFunction.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/reflect/Constructor.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/ClassCache.h"
#include "rhino/ContextFactory.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Member.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Modifier.h"
#include "java/util/Iterator.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Void.h"
#include "java/util/Map.h"
#include "rhino/ObjArray.h"
#include "rhino/JavaMembers.h"
#include "rhino/MemberBox.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ClassShutter.h"
#include "rhino/NativeJavaMethod.h"
#include "rhino/BeanProperty.h"
#include "rhino/JavaMembers_MethodSignature.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/reflect/AccessibleObject.h"
#include "java/lang/Class.h"
#include "java/util/List.h"

extern "C" {


void mark_rhino_JavaMembers(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_JavaMembers *) object;
	if (self->F_cl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cl)->clazz)->markFunction)((jobject) self->F_cl, mark, depth + 1);
	if (self->F_members)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_members)->clazz)->markFunction)((jobject) self->F_members, mark, depth + 1);
	if (self->F_fieldAndMethods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fieldAndMethods)->clazz)->markFunction)((jobject) self->F_fieldAndMethods, mark, depth + 1);
	if (self->F_staticMembers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticMembers)->clazz)->markFunction)((jobject) self->F_staticMembers, mark, depth + 1);
	if (self->F_staticFieldAndMethods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticFieldAndMethods)->clazz)->markFunction)((jobject) self->F_staticFieldAndMethods, mark, depth + 1);
	if (self->F_ctors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ctors)->clazz)->markFunction)((jobject) self->F_ctors, mark, depth + 1);
}

void clinit_rhino_JavaMembers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(16);
	init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(ctx);
	sp[0].o = (jobject)((func_rhino_ContextFactory_enterContext_R_rhino_Context) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ContextFactory_enterContext_R_rhino_Context])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_rhino_Context_getClassShutter_R_rhino_ClassShutter) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Context_getClassShutter_R_rhino_ClassShutter])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(23);
	if ((frame[5].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ClassShutter, INDEX_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.access.prohibited"_j));
	sp[1].o = frame[2].o;
	LINE_NUMBER(25);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((rhino_JavaMembers *) NULL_CHECK(sp[0].o))->F_members = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((rhino_JavaMembers *) NULL_CHECK(sp[0].o))->F_staticMembers = (jref) sp[1].o;
	LINE_NUMBER(29);
	((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl = (jref) (frame[2].o);
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[4].o), (13));
	frame[6].i = temp0;
	LINE_NUMBER(32);
	M_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (frame[6].i));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(34);
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(35);
	goto label_18;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(34);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(35);
	throwException(ctx, (frame[7].o));	}
label_18:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:has", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(39);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(41);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)M_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	if (sp[0].o == nullptr) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:get", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(49);
	if ((frame[4].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_9:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(51);
	if ((frame[4].i) != 0) goto label_12;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_12;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(55);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)M_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(58);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(59);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(61);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Scriptable)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_18:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_BeanProperty)) == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_20
	}
	{
	LINE_NUMBER(69);
	frame[10].o = (checkCast(ctx, &class_rhino_BeanProperty, (frame[6].o)));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[10].o)))->F_getter;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(71);
	clinit_rhino_Scriptable(ctx);
	(sp++)->o = SF_rhino_Scriptable_NOT_FOUND;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_20; }
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[10].o)))->F_getter;
	sp[1].o = frame[3].o;
	clinit_rhino_Context(ctx);
	sp[2].o = (jobject)SF_rhino_Context_emptyArgs;
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[10].o)))->F_getter;
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(74);
	goto label_5;
	}
label_20:;
	{
	LINE_NUMBER(75);
	frame[10].o = (checkCast(ctx, &class_java_lang_reflect_Field, (frame[6].o)));
	LINE_NUMBER(76);
	sp[0].o = frame[10].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_27;
	}
	INST_ACONST_NULL();
	goto label_28;
label_27:;
	INST_ALOAD(3);
label_28:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[10].o));
	frame[9].o = sp[0].o;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(81);
	goto label_30;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(79);
	frame[10].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[10].o));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[7].o), (frame[1].o), (frame[8].o), (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:put", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(89);
	if ((frame[5].i) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_12:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(91);
	if ((frame[5].i) != 0) goto label_15;
	}
	INST_ALOAD(7);
	if ((--sp)->o != nullptr) goto label_15;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	frame[7].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(95);
	if ((frame[7].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException])(ctx, (frame[0].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(97);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_FieldAndMethods)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[2].o));
	frame[8].o = (checkCast(ctx, &class_rhino_FieldAndMethods, sp[0].o));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((rhino_FieldAndMethods *) NULL_CHECK((frame[8].o)))->F_field;
	frame[7].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(103);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_BeanProperty)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(104);
	frame[8].o = (checkCast(ctx, &class_rhino_BeanProperty, (frame[7].o)));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[8].o)))->F_setter;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException])(ctx, (frame[0].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[8].o)))->F_setters;
	if (sp[0].o == nullptr) goto label_27;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_28;
label_27:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[8].o)))->F_setter;
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_argTypes;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(113);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[4].o), (frame[9].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[10].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[8].o)))->F_setter;
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[10].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(118);
	goto label_30;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(116);
	frame[11].o = sp[0].o;
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[11].o));
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(119);
	goto label_32;
label_28:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[4].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((rhino_BeanProperty *) NULL_CHECK((frame[8].o)))->F_setters;
	sp[1].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	sp[2].o = frame[1].o;
	LINE_NUMBER(122);
	sp[2].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[2].o);
	sp[3].o = frame[1].o;
	sp[4].o = frame[9].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_rhino_NativeJavaMethod_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJavaMethod_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_32:;
	LINE_NUMBER(125);
	goto label_36;
label_22:;
	{
	LINE_NUMBER(126);
	if ((isInstance(ctx, (frame[7].o), &class_java_lang_reflect_Field)) != 0) goto label_37;
	}
	{
	LINE_NUMBER(127);
	if ((frame[7].o) != nullptr) goto label_39;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.java.internal.private"_j));
	goto label_40;
label_39:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"msg.java.method.assign"_j));
label_40:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (frame[8].o), (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(131);
	frame[8].o = (checkCast(ctx, &class_java_lang_reflect_Field, (frame[7].o)));
	LINE_NUMBER(132);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_8; }
	}
	{
	LINE_NUMBER(134);
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, (frame[8].o), (frame[3].o), (frame[9].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(146);
	goto label_36;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(135);
	frame[10].o = sp[0].o;
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[8].o));
	if ((temp0 & (16)) == 0) goto label_44;
	}
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();
label_44:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[10].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(141);
	frame[10].o = sp[0].o;
	LINE_NUMBER(142);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.java.internal.field.type"_j));
	sp[1].o = frame[4].o;
	LINE_NUMBER(144);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[8].o;
	sp[3].o = frame[3].o;
	LINE_NUMBER(145);
	sp[3].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[3].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	throwException(ctx, sp[0].o);	}
label_36:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:getIds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(151);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_util_Set_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:javaSignature", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(159);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(161);
	INST_IINC(1, 1);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(165);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	LINE_NUMBER(166);
	if ((frame[1].i) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	jint temp1 = frame[1].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[4].i = (temp0 + (temp1 * temp2));
	LINE_NUMBER(170);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[2].o));
	}
label_13:;
	{
	LINE_NUMBER(172);
	if ((frame[1].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(173);
	INST_IINC(1, -1);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_liveConnectSignature_Array1_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:liveConnectSignature", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(180);
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(181);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"()"_j)));
	}
label_2:;
	{
	LINE_NUMBER(184);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (40));
	LINE_NUMBER(186);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) == (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(187);
	if ((frame[3].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	}
label_9:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (41));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:findExplicitFunction", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(197);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (40));
	frame[3].i = temp0;
	LINE_NUMBER(198);
	if ((frame[3].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(202);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(203);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(204);
	if ((frame[2].i) == 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_8;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(206);
	if ((frame[6].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_ctors;
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK(sp[0].o))->F_methods;
	frame[5].o = sp[0].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[3].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(213);
	if ((frame[2].i) != 0) goto label_16;
	}
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_16;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(217);
	if ((isInstance(ctx, (frame[8].o), &class_rhino_NativeJavaMethod)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(218);
	frame[9].o = (checkCast(ctx, &class_rhino_NativeJavaMethod, (frame[8].o)));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[9].o)))->F_methods;
	frame[5].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(223);
	if ((frame[5].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(224);
	frame[7].o = (frame[5].o);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_22:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_20;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[10].o)))->F_argTypes;
	frame[11].o = sp[0].o;
	LINE_NUMBER(226);
	sp[0].o = (jobject)SM_rhino_JavaMembers_liveConnectSignature_Array1_java_lang_Class_R_java_lang_String(ctx, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(227);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[12].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp2 != temp3) goto label_26;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[12].o;
	jint temp1 = jint(0);
	sp[2].o = frame[12].o;
	LINE_NUMBER(228);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	jint temp3 = (jint)((func_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean])(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	if (temp3 == 0) goto label_26;
	}
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_26:;
	{
	LINE_NUMBER(224);
	INST_IINC(9, 1);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:getExplicitFunction", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(239);
	if ((frame[4].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_2:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(240);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(241);
	sp[0].o = (jobject)M_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox(ctx, (frame[0].o), (frame[2].o), (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(243);
	if ((frame[7].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = frame[1].o;
	LINE_NUMBER(245);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getFunctionPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_rhino_MemberBox_isCtor_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_MemberBox_isCtor_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(248);
	clinit_rhino_NativeJavaConstructor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaConstructor);
	init_rhino_NativeJavaConstructor_rhino_MemberBox(ctx, sp[0].o, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(250);
	((func_rhino_NativeJavaConstructor_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_NativeJavaConstructor_setPrototype_rhino_Scriptable])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(251);
	frame[6].o = (frame[9].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o), (frame[9].o));
	LINE_NUMBER(253);
	goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_rhino_MemberBox_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_MemberBox_getName_R_java_lang_String])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[9].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(257);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_NativeJavaMethod)) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((checkCast(ctx, &class_rhino_NativeJavaMethod, (frame[6].o)))))->F_methods;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(259);
	clinit_rhino_NativeJavaMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaMethod);
	init_rhino_NativeJavaMethod_rhino_MemberBox_java_lang_String(ctx, sp[0].o, (frame[7].o), (frame[2].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(261);
	((func_rhino_NativeJavaMethod_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_NativeJavaMethod_setPrototype_rhino_Scriptable])(ctx, (frame[10].o), (frame[8].o));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o), (frame[10].o));
	LINE_NUMBER(263);
	frame[6].o = (frame[10].o);
	}
label_6:;
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_boolean_boolean_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:discoverAccessibleMethods", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(281);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(282);
	SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean(ctx, (frame[0].o), (frame[3].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_java_util_Map_values_R_java_util_Collection) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_values_R_java_util_Collection, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_reflect_Method, (jint(0)));
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_reflect_Method, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:discoverAccessibleMethods", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_4;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_9;
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(291);
	if ((frame[2].i) != 0) goto label_10;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_11;
label_10:;
	{
	LINE_NUMBER(292);
	if ((frame[0].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(294);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_14:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_15;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[8].o));
	frame[9].i = temp0;
	LINE_NUMBER(297);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[9].i));
	if (temp1 != 0) goto label_18;
	}
	{
	jint temp0 = frame[9].i;
	LINE_NUMBER(298);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_18;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_20;
label_18:;
	{
	LINE_NUMBER(300);
	clinit_rhino_JavaMembers$MethodSignature(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaMembers$MethodSignature);
	init_rhino_JavaMembers$MethodSignature_java_lang_reflect_Method(ctx, sp[0].o, (frame[8].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(301);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[10].o));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(302);
	if ((frame[3].i) == 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAccessible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Method_isAccessible_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(303);
	((func_java_lang_reflect_Method_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Method_setAccessible_boolean])(ctx, (frame[8].o), (jint(1)));
	}
label_23:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[10].o), (frame[8].o));
	}
label_20:;
	{
	LINE_NUMBER(294);
	INST_IINC(7, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_java_lang_Class_getInterfaces_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(309);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_26:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_27;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(310);
	SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean(ctx, (frame[9].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(309);
	INST_IINC(8, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(314);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(317);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_32:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(319);
	clinit_rhino_JavaMembers$MethodSignature(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaMembers$MethodSignature);
	init_rhino_JavaMembers$MethodSignature_java_lang_reflect_Method(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(321);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[9].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[9].o), (frame[8].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(325);
	goto label_35;
label_2:;
	LINE_NUMBER(323);
	INST_ASTORE(9);
label_35:;
	{
	LINE_NUMBER(317);
	INST_IINC(7, 1);
	goto label_32;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(328);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(329);
	frame[4].o = sp[0].o;
	LINE_NUMBER(330);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Could not discover accessible methods of class "_j))));
	sp[1].o = frame[0].o;
	LINE_NUMBER(332);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" due to lack of privileges, attemping superclasses/interfaces."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(330);
	SM_rhino_Context_reportWarning_java_lang_String(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_java_lang_Class_getInterfaces_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(340);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_40:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_41;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(341);
	SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean(ctx, (frame[8].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(340);
	INST_IINC(7, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(345);
	if ((frame[5].o) == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(346);
	SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean(ctx, (frame[5].o), (frame[1].o), (frame[2].i), (frame[3].i));
	}
label_45:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:reflect", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	sp[0].o = (jobject)SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_boolean_boolean_R_Array1_java_lang_reflect_Method(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(388);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_3;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(389);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[8].o));
	frame[9].i = temp0;
	LINE_NUMBER(390);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, (frame[9].i));
	frame[10].i = temp1;
	LINE_NUMBER(391);
	if ((frame[10].i) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_8:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[8].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o), (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(394);
	if ((frame[13].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o), (frame[12].o), (frame[8].o));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(398);
	if ((isInstance(ctx, (frame[13].o), &class_rhino_ObjArray)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(399);
	frame[14].o = (checkCast(ctx, &class_rhino_ObjArray, (frame[13].o)));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(401);
	if ((isInstance(ctx, (frame[13].o), &class_java_lang_reflect_Method)) != 0) goto label_19;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_19:;
	{
	LINE_NUMBER(404);
	clinit_rhino_ObjArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(405);
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, (frame[14].o), (frame[13].o));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o), (frame[12].o), (frame[14].o));
	}
label_18:;
	{
	LINE_NUMBER(408);
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, (frame[14].o), (frame[8].o));
	}
label_14:;
	{
	LINE_NUMBER(388);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(414);
	frame[5].i = (jint(0));
	}
label_22:;
	{
	if ((frame[5].i) == (jint(2))) goto label_23;
	}
	{
	LINE_NUMBER(415);
	if ((frame[5].i) != 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(416);
	if ((frame[6].i) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_29;
	}
label_28:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_29:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[7].o)))(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(420);
	if ((isInstance(ctx, (frame[11].o), &class_java_lang_reflect_Method)) == 0) goto label_35;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_MemberBox, (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = frame[10].o;
	jint temp0 = jint(0);
	clinit_rhino_MemberBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Method(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_reflect_Method, (frame[11].o))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_38;
	}
label_35:;
	{
	LINE_NUMBER(424);
	frame[12].o = (checkCast(ctx, &class_rhino_ObjArray, (frame[11].o)));
	LINE_NUMBER(425);
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(426);
	if ((frame[13].i) >= (jint(2))) goto label_41;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_41:;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_MemberBox, (frame[13].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(428);
	frame[14].i = (jint(0));
	}
label_43:;
	{
	if ((frame[14].i) == (frame[13].i)) goto label_38;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_rhino_ObjArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjArray_get_int_R_java_lang_Object])(ctx, (frame[12].o), (frame[14].i));
	frame[15].o = (checkCast(ctx, &class_java_lang_reflect_Method, sp[0].o));
	LINE_NUMBER(430);
	sp[0].o = frame[10].o;
	jint temp0 = frame[14].i;
	clinit_rhino_MemberBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Method(ctx, sp[1].o, (frame[15].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(428);
	INST_IINC(14, 1);
	goto label_43;
	}
label_38:;
	{
	LINE_NUMBER(433);
	clinit_rhino_NativeJavaMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaMethod);
	init_rhino_NativeJavaMethod_Array1_rhino_MemberBox(ctx, sp[0].o, (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(434);
	if ((frame[1].o) == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(435);
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(ctx, (frame[12].o), (frame[1].o));
	}
label_48:;
	{
	LINE_NUMBER(437);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[12].o));
	LINE_NUMBER(438);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(414);
	INST_IINC(5, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)M_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(443);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_52:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_53;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(445);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[9].o));
	frame[11].i = temp0;
	LINE_NUMBER(446);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, (frame[11].i));
	frame[12].i = temp1;
	LINE_NUMBER(447);
	if ((frame[12].i) == 0) goto label_58;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_59;
	}
label_58:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_59:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o), (frame[10].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(449);
	if ((frame[14].o) == nullptr) goto label_62;
	}
	{
	if ((isInstance(ctx, (frame[14].o), &class_rhino_NativeJavaMethod)) == 0) goto label_63;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean(ctx, (frame[11].i));
	if (temp0 != 0) goto label_63;
	}
label_62:;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o), (frame[10].o), (frame[9].o));
	goto label_64;
	}
label_63:;
	{
	LINE_NUMBER(451);
	if ((isInstance(ctx, (frame[14].o), &class_rhino_NativeJavaMethod)) == 0) goto label_65;
	}
	{
	LINE_NUMBER(452);
	frame[15].o = (checkCast(ctx, &class_rhino_NativeJavaMethod, (frame[14].o)));
	LINE_NUMBER(453);
	clinit_rhino_FieldAndMethods(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_FieldAndMethods);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[15].o)))->F_methods;
	init_rhino_FieldAndMethods_rhino_Scriptable_Array1_rhino_MemberBox_java_lang_reflect_Field(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(454);
	if ((frame[12].i) == 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticFieldAndMethods;
	sp += 1;
	goto label_70;
	}
label_69:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_fieldAndMethods;
label_70:;
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	LINE_NUMBER(455);
	if ((frame[17].o) != nullptr) goto label_72;
	}
	{
	LINE_NUMBER(456);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[17].o = sp[0].o;
	LINE_NUMBER(457);
	if ((frame[12].i) == 0) goto label_75;
	}
	{
	LINE_NUMBER(458);
	((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticFieldAndMethods = (jref) (frame[17].o);
	goto label_72;
	}
label_75:;
	{
	LINE_NUMBER(460);
	((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_fieldAndMethods = (jref) (frame[17].o);
	}
label_72:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[17].o)))(ctx, (frame[17].o), (frame[10].o), (frame[16].o));
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o), (frame[10].o), (frame[16].o));
	LINE_NUMBER(465);
	goto label_64;
	}
label_65:;
	{
	if ((isInstance(ctx, (frame[14].o), &class_java_lang_reflect_Field)) == 0) goto label_79;
	}
	{
	LINE_NUMBER(466);
	frame[15].o = (checkCast(ctx, &class_java_lang_reflect_Field, (frame[14].o)));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[15].o));
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_82;
	}
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o), (frame[10].o), (frame[9].o));
	}
label_82:;
	LINE_NUMBER(476);
	goto label_64;
label_79:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_64:;
	{
	LINE_NUMBER(443);
	INST_IINC(8, 1);
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(484);
	frame[6].i = (jint(0));
	}
label_84:;
	{
	if ((frame[6].i) == (jint(2))) goto label_85;
	}
	{
	LINE_NUMBER(485);
	if ((frame[6].i) != 0) goto label_87;
	}
	INST_ICONST(1);
	goto label_88;
label_87:;
	INST_ICONST(0);
label_88:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(486);
	if ((frame[7].i) == 0) goto label_90;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticMembers;
	sp += 1;
	goto label_91;
	}
label_90:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_members;
label_91:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(488);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[8].o)))(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_94:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_95;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(493);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"get"_j))));
	frame[12].i = temp0;
	LINE_NUMBER(494);
	jint temp1 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"set"_j))));
	frame[13].i = temp1;
	LINE_NUMBER(495);
	jint temp2 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"is"_j))));
	frame[14].i = temp2;
	LINE_NUMBER(496);
	if ((frame[12].i) != 0) goto label_100;
	}
	INST_ILOAD(14);
	if ((--sp)->i != 0) goto label_100;
	INST_ILOAD(13);
	if ((--sp)->i == 0) goto label_101;
label_100:;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[11].o;
	sp += 1;
	if ((frame[14].i) == 0) goto label_102;
	}
	INST_ICONST(2);
	goto label_103;
label_102:;
	INST_ICONST(3);
label_103:;
	{
	sp -= 2;
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, sp[1].i);
	frame[15].o = sp[0].o;
	LINE_NUMBER(501);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[15].o));
	if (temp0 != 0) goto label_105;
	}
	LINE_NUMBER(502);
	goto label_94;
label_105:;
	{
	LINE_NUMBER(505);
	frame[16].o = (frame[15].o);
	LINE_NUMBER(506);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[15].o), (jint(0)));
	frame[17].i = temp0;
	LINE_NUMBER(507);
	jint temp1 = (jint)SM_java_lang_Character_isUpperCase_char_R_boolean(ctx, (frame[17].i));
	if (temp1 == 0) goto label_109;
	}
	{
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[15].o));
	if (temp0 != (jint(1))) goto label_111;
	}
	{
	LINE_NUMBER(509);
	sp[0].o = frame[15].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[16].o = sp[0].o;
	goto label_109;
	}
label_111:;
	{
	LINE_NUMBER(511);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[15].o), (jint(1)));
	frame[18].i = temp0;
	LINE_NUMBER(512);
	jint temp1 = (jint)SM_java_lang_Character_isUpperCase_char_R_boolean(ctx, (frame[18].i));
	if (temp1 != 0) goto label_109;
	}
	{
	LINE_NUMBER(513);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[17].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[1].o = frame[15].o;
	jint temp1 = jint(1);
	LINE_NUMBER(514);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	}
label_109:;
	{
	LINE_NUMBER(521);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[9].o)))(ctx, (frame[9].o), (frame[16].o));
	if (temp0 == 0) goto label_116;
	}
	LINE_NUMBER(522);
	goto label_94;
label_116:;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o), (frame[16].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(524);
	if ((frame[18].o) == nullptr) goto label_119;
	}
	{
	LINE_NUMBER(526);
	if ((frame[3].i) == 0) goto label_94;
	}
	{
	if ((isInstance(ctx, (frame[18].o), &class_java_lang_reflect_Member)) == 0) goto label_94;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_reflect_Member, (frame[18].o));
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_java_lang_reflect_Member_getModifiers_R_int) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getModifiers_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_119;
	}
	LINE_NUMBER(528);
	goto label_94;
label_119:;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)M_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox(ctx, (frame[0].o), (frame[7].i), (frame[8].o), (((jobject) createStringLiteral(ctx, u8"get"_j))), (frame[15].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(537);
	if ((frame[19].o) != nullptr) goto label_124;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)M_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox(ctx, (frame[0].o), (frame[7].i), (frame[8].o), (((jobject) createStringLiteral(ctx, u8"is"_j))), (frame[15].o));
	frame[19].o = sp[0].o;
	}
label_124:;
	{
	LINE_NUMBER(542);
	frame[20].o = (jobject(nullptr));
	LINE_NUMBER(543);
	frame[21].o = (jobject(nullptr));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"set"_j))))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (((jobject) createStringLiteral(ctx, u8"set"_j))), (frame[15].o));
	frame[22].o = sp[0].o;
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[8].o)))(ctx, (frame[8].o), (frame[22].o));
	if (temp0 == 0) goto label_129;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o), (frame[22].o));
	frame[23].o = sp[0].o;
	LINE_NUMBER(549);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_NativeJavaMethod)) == 0) goto label_129;
	}
	{
	LINE_NUMBER(550);
	frame[24].o = (checkCast(ctx, &class_rhino_NativeJavaMethod, (frame[23].o)));
	LINE_NUMBER(551);
	if ((frame[19].o) == nullptr) goto label_134;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, (frame[19].o));
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[0].o);
	frame[25].o = sp[0].o;
	LINE_NUMBER(555);
	sp[0].o = frame[25].o;
	sp[1].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[24].o)))->F_methods;
	sp[0].o = (jobject)SM_rhino_JavaMembers_extractSetMethod_java_lang_Class_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(ctx, sp[0].o, sp[1].o, (frame[7].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(557);
	goto label_138;
	}
label_134:;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[24].o)))->F_methods;
	sp[0].o = (jobject)SM_rhino_JavaMembers_extractSetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(ctx, sp[0].o, (frame[7].i));
	frame[20].o = sp[0].o;
	}
label_138:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[24].o)))->F_methods;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_129;
	}
	{
	LINE_NUMBER(563);
	frame[21].o = (frame[24].o);
	}
label_129:;
	{
	LINE_NUMBER(568);
	clinit_rhino_BeanProperty(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_BeanProperty);
	init_rhino_BeanProperty_rhino_MemberBox_rhino_MemberBox_rhino_NativeJavaMethod(ctx, sp[0].o, (frame[19].o), (frame[20].o), (frame[21].o));
	frame[23].o = sp[0].o;
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o), (frame[16].o), (frame[23].o));
	}
label_101:;
	LINE_NUMBER(571);
	goto label_94;
label_95:;
	{
	LINE_NUMBER(574);
	((func_java_util_Map_putAll_java_util_Map) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_putAll_java_util_Map, (frame[8].o)))(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(484);
	INST_IINC(6, 1);
	goto label_84;
	}
label_85:;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)M_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor(ctx, (frame[0].o), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(579);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_MemberBox, (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[7].o = sp[0].o;
	LINE_NUMBER(580);
	frame[8].i = (jint(0));
	}
label_144:;
	{
	if ((frame[8].i) == (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_145;
	}
	{
	LINE_NUMBER(581);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	clinit_rhino_MemberBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Constructor(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(580);
	INST_IINC(8, 1);
	goto label_144;
	}
label_145:;
	{
	LINE_NUMBER(583);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeJavaMethod(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_NativeJavaMethod);
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	sp[3].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[3].o);
	init_rhino_NativeJavaMethod_Array1_rhino_MemberBox_java_lang_String(ctx, sp[1].o, sp[2].o, sp[3].o);
	((rhino_JavaMembers *) NULL_CHECK(sp[0].o))->F_ctors = (jref) sp[1].o;
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:getAccessibleConstructors", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(589);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ClassClass;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(591);
	SM_java_lang_reflect_AccessibleObject_setAccessible_Array1_java_lang_reflect_AccessibleObject_boolean(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	sp[0].o = (jobject)((func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:getAccessibleFields", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(600);
	if ((frame[2].i) != 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(601);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(602);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(604);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(607);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(608);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_8:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_9;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[9].o));
	frame[10].i = temp0;
	LINE_NUMBER(610);
	if ((frame[2].i) != 0) goto label_12;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[10].i));
	if (temp0 != 0) goto label_12;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(ctx, (frame[10].i));
	if (temp0 == 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(611);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAccessible_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Field_isAccessible_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(612);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[9].o), (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(613);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[9].o));
	}
label_13:;
	{
	LINE_NUMBER(608);
	INST_IINC(8, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(619);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_reflect_Field, (jint(0)));
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_reflect_Field, 1), sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:findGetter", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(629);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(632);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_NativeJavaMethod)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(633);
	frame[7].o = (checkCast(ctx, &class_rhino_NativeJavaMethod, (frame[6].o)));
	LINE_NUMBER(634);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[7].o)))->F_methods;
	sp[0].o = (jobject)SM_rhino_JavaMembers_extractGetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_extractGetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:extractGetMethod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(644);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(647);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[5].o)))->F_argTypes;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_4;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_5;
	{
	jint temp0 = (jint)((func_rhino_MemberBox_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_MemberBox_isStatic_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(649);
	sp[0].o = frame[6].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(644);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_extractSetMethod_java_lang_Class_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:extractSetMethod", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(668);
	frame[3].i = (jint(1));
	}
label_1:;
	{
	if ((frame[3].i) > (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(669);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(670);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_rhino_MemberBox_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_MemberBox_isStatic_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[7].o)))->F_argTypes;
	frame[8].o = sp[0].o;
	LINE_NUMBER(672);
	if ((((jarray) nullCheck(ctx, (frame[8].o)))->length) != (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(673);
	if ((frame[3].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(674);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0)))) != (frame[0].o)) goto label_8;
	}
	{
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_11:;
	{
	LINE_NUMBER(678);
	if ((frame[3].i) == (jint(2))) goto label_14;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_14:;
	{
	LINE_NUMBER(679);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0)))))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0)))), (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_8:;
	{
	LINE_NUMBER(669);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(668);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(687);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_extractSetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:extractSetMethod", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(693);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(694);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_rhino_MemberBox_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_MemberBox_isStatic_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[0].o);
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[5].o)))->F_argTypes;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_5:;
	{
	LINE_NUMBER(693);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:getFieldAndMethodsObjects", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(707);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_staticFieldAndMethods;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_JavaMembers *) NULL_CHECK(sp[-1].o))->F_fieldAndMethods;
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(708);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(711);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_int(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(712);
	sp[0].o = (jobject)((func_java_util_Map_values_R_java_util_Collection) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_values_R_java_util_Collection, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_rhino_FieldAndMethods, sp[0].o));
	LINE_NUMBER(713);
	clinit_rhino_FieldAndMethods(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_FieldAndMethods);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[8].o)))->F_methods;
	sp[3].o = (jobject)((rhino_FieldAndMethods *) NULL_CHECK((frame[8].o)))->F_field;
	init_rhino_FieldAndMethods_rhino_Scriptable_Array1_rhino_MemberBox_java_lang_reflect_Field(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(715);
	((rhino_FieldAndMethods *) NULL_CHECK((frame[9].o)))->F_javaObject = (jref) (frame[2].o);
	LINE_NUMBER(716);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((rhino_FieldAndMethods *) NULL_CHECK((frame[8].o)))->F_field;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[9].o));
	LINE_NUMBER(717);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaMembers_lookupClass_rhino_Scriptable_java_lang_Class_java_lang_Class_boolean_R_rhino_JavaMembers(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:lookupClass", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)SM_rhino_ClassCache_get_rhino_Scriptable_R_rhino_ClassCache(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_rhino_ClassCache_getClassCacheMap_R_java_util_Map) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ClassCache_getClassCacheMap_R_java_util_Map])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(727);
	frame[7].o = (frame[1].o);
	LINE_NUMBER(729);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[7].o));
	frame[4].o = (checkCast(ctx, &class_rhino_JavaMembers, sp[0].o));
	LINE_NUMBER(730);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(731);
	if ((frame[7].o) == (frame[1].o)) goto label_7;
	}
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o), (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(738);
	clinit_rhino_JavaMembers(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaMembers);
	sp[1].o = (jobject)((func_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable])(ctx, (frame[5].o));
	init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class_boolean(ctx, sp[0].o, sp[1].o, (frame[7].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(743);
	jint temp0 = (jint)((func_rhino_ClassCache_isCachingEnabled_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ClassCache_isCachingEnabled_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[7].o), (frame[4].o));
	LINE_NUMBER(745);
	if ((frame[7].o) == (frame[1].o)) goto label_10;
	}
	{
	LINE_NUMBER(748);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o), (frame[4].o));
	}
label_10:;
	{
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers:reportMemberNotFound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(755);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.java.member.not.found"_j));
	sp[1].o = (jobject)((rhino_JavaMembers *) NULL_CHECK((frame[0].o)))->F_cl;
	LINE_NUMBER(756);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[1].o;
	LINE_NUMBER(755);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_JavaMembers[] {
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
	(void *) M_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean,
	(void *) M_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean,
	(void *) M_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox,
	(void *) M_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean,
	(void *) M_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor,
	(void *) M_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field,
	(void *) M_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox,
	(void *) M_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map,
	(void *) M_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException,
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
	{ "has", "(Ljava/lang/String;Z)Z" },
	{ "get", "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "put", "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Z)V" },
	{ "getIds", "(Z)[Ljava/lang/Object;" },
	{ "findExplicitFunction", "(Ljava/lang/String;Z)Lrhino/MemberBox;" },
	{ "getExplicitFunction", "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "reflect", "(Lrhino/Scriptable;ZZ)V" },
	{ "getAccessibleConstructors", "(Z)[Ljava/lang/reflect/Constructor;" },
	{ "getAccessibleFields", "(ZZ)[Ljava/lang/reflect/Field;" },
	{ "findGetter", "(ZLjava/util/Map;Ljava/lang/String;Ljava/lang/String;)Lrhino/MemberBox;" },
	{ "getFieldAndMethodsObjects", "(Lrhino/Scriptable;Ljava/lang/Object;Z)Ljava/util/Map;" },
	{ "reportMemberNotFound", "(Ljava/lang/String;)Ljava/lang/RuntimeException;" },
};

static jclass innerClasses[] {
	&class_rhino_JavaMembers$MethodSignature,
};

static FieldMetadata fields[] {
	{ "cl", &class_java_lang_Class, offsetof(rhino_JavaMembers, F_cl), "Ljava/lang/Class;", 18 },
	{ "members", &class_java_util_Map, offsetof(rhino_JavaMembers, F_members), "Ljava/util/Map;", 18 },
	{ "fieldAndMethods", &class_java_util_Map, offsetof(rhino_JavaMembers, F_fieldAndMethods), "Ljava/util/Map;", 2 },
	{ "staticMembers", &class_java_util_Map, offsetof(rhino_JavaMembers, F_staticMembers), "Ljava/util/Map;", 18 },
	{ "staticFieldAndMethods", &class_java_util_Map, offsetof(rhino_JavaMembers, F_staticFieldAndMethods), "Ljava/util/Map;", 2 },
	{ "ctors", &class_rhino_NativeJavaMethod, offsetof(rhino_JavaMembers, F_ctors), "Lrhino/NativeJavaMethod;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class, 0, "(Lrhino/Scriptable;Ljava/lang/Class;)V", 0 },
	{ "<init>", (intptr_t) init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/Class;Z)V", 0 },
	{ "has", (intptr_t) M_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean, VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 0 },
	{ "get", (intptr_t) M_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object, VTABLE_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Z)Ljava/lang/Object;", 0 },
	{ "put", (intptr_t) M_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean, VTABLE_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Z)V", 0 },
	{ "getIds", (intptr_t) M_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object, VTABLE_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object, "(Z)[Ljava/lang/Object;", 0 },
	{ "javaSignature", (intptr_t) SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String, 0, "(Ljava/lang/Class;)Ljava/lang/String;", 8 },
	{ "liveConnectSignature", (intptr_t) SM_rhino_JavaMembers_liveConnectSignature_Array1_java_lang_Class_R_java_lang_String, 0, "([Ljava/lang/Class;)Ljava/lang/String;", 8 },
	{ "findExplicitFunction", (intptr_t) M_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox, VTABLE_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox, "(Ljava/lang/String;Z)Lrhino/MemberBox;", 2 },
	{ "getExplicitFunction", (intptr_t) M_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object, VTABLE_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/Object;Z)Ljava/lang/Object;", 2 },
	{ "discoverAccessibleMethods", (intptr_t) SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_boolean_boolean_R_Array1_java_lang_reflect_Method, 0, "(Ljava/lang/Class;ZZ)[Ljava/lang/reflect/Method;", 10 },
	{ "discoverAccessibleMethods", (intptr_t) SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean, 0, "(Ljava/lang/Class;Ljava/util/Map;ZZ)V", 10 },
	{ "reflect", (intptr_t) M_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean, VTABLE_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean, "(Lrhino/Scriptable;ZZ)V", 2 },
	{ "getAccessibleConstructors", (intptr_t) M_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor, VTABLE_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor, "(Z)[Ljava/lang/reflect/Constructor;", 2 },
	{ "getAccessibleFields", (intptr_t) M_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field, VTABLE_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field, "(ZZ)[Ljava/lang/reflect/Field;", 2 },
	{ "findGetter", (intptr_t) M_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox, VTABLE_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox, "(ZLjava/util/Map;Ljava/lang/String;Ljava/lang/String;)Lrhino/MemberBox;", 2 },
	{ "extractGetMethod", (intptr_t) SM_rhino_JavaMembers_extractGetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox, 0, "([Lrhino/MemberBox;Z)Lrhino/MemberBox;", 10 },
	{ "extractSetMethod", (intptr_t) SM_rhino_JavaMembers_extractSetMethod_java_lang_Class_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox, 0, "(Ljava/lang/Class;[Lrhino/MemberBox;Z)Lrhino/MemberBox;", 10 },
	{ "extractSetMethod", (intptr_t) SM_rhino_JavaMembers_extractSetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox, 0, "([Lrhino/MemberBox;Z)Lrhino/MemberBox;", 10 },
	{ "getFieldAndMethodsObjects", (intptr_t) M_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map, VTABLE_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map, "(Lrhino/Scriptable;Ljava/lang/Object;Z)Ljava/util/Map;", 0 },
	{ "lookupClass", (intptr_t) SM_rhino_JavaMembers_lookupClass_rhino_Scriptable_java_lang_Class_java_lang_Class_boolean_R_rhino_JavaMembers, 0, "(Lrhino/Scriptable;Ljava/lang/Class;Ljava/lang/Class;Z)Lrhino/JavaMembers;", 8 },
	{ "reportMemberNotFound", (intptr_t) M_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException, VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException, "(Ljava/lang/String;)Ljava/lang/RuntimeException;", 0 },
};

Class class_rhino_JavaMembers{
		.nativeName = (intptr_t) "rhino/JavaMembers",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_JavaMembers),
		.classVtable = (intptr_t) vtable_rhino_JavaMembers,
		.staticInitializer = (intptr_t) clinit_rhino_JavaMembers,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_JavaMembers,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_JavaMembers = registerClass(&class_rhino_JavaMembers);

}
