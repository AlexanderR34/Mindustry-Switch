#include "mindustry/core/UI_1.h"
#include "arc/Input_TextInput.h"
#include "arc/func/Cons.h"
#include "arc/Core.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/core/UI_1.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/core/UI.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_core_UI$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_Input$TextInput(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_core_UI$1 *) object;
	if (self->F_val$titleText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$titleText)->clazz)->markFunction)((jobject) self->F_val$titleText, mark, depth + 1);
	if (self->F_val$def)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$def)->clazz)->markFunction)((jobject) self->F_val$def, mark, depth + 1);
	if (self->F_val$confirmed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$confirmed)->clazz)->markFunction)((jobject) self->F_val$confirmed, mark, depth + 1);
	if (self->F_val$closed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$closed)->clazz)->markFunction)((jobject) self->F_val$closed, mark, depth + 1);
	if (self->F_val$description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$description)->clazz)->markFunction)((jobject) self->F_val$description, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_core_UI$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_Input$TextInput(ctx);
}

void init_mindustry_core_UI$1_mindustry_core_UI_java_lang_String_java_lang_String_boolean_int_arc_func_Cons_java_lang_Runnable_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jint param4, jobject param5, jobject param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/UI$1:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_UI$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(313);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$titleText = (jref) (frame[2].o);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$def = (jref) (frame[3].o);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$numbers = (frame[4].i);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$textLength = (frame[5].i);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$confirmed = (jref) (frame[6].o);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$closed = (jref) (frame[7].o);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$empty = (frame[8].i);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$description = (jref) (frame[9].o);
	((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_Input$TextInput(ctx, (frame[0].o));
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$titleText;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$titleText;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_core_UI$1 *) NULL_CHECK(sp[-1].o))->F_val$titleText;
label_3:;
	{
	sp -= 2;
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$def;
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(316);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_numeric = ((jint)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$numbers);
	LINE_NUMBER(317);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_maxLength = ((jint)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$textLength);
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$confirmed;
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_accepted = (jref) sp[1].o;
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$closed;
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_canceled = (jref) sp[1].o;
	LINE_NUMBER(320);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_allowEmpty = ((jint)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$empty);
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_UI$1 *) NULL_CHECK((frame[0].o)))->F_val$description;
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_message = (jref) sp[1].o;
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_UI$1[] {
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
};

static FieldMetadata fields[] {
	{ "val$titleText", &class_java_lang_String, offsetof(mindustry_core_UI$1, F_val$titleText), "Ljava/lang/String;", 4112 },
	{ "val$def", &class_java_lang_String, offsetof(mindustry_core_UI$1, F_val$def), "Ljava/lang/String;", 4112 },
	{ "val$numbers", &class_boolean, offsetof(mindustry_core_UI$1, F_val$numbers), "Z", 4112 },
	{ "val$textLength", &class_int, offsetof(mindustry_core_UI$1, F_val$textLength), "I", 4112 },
	{ "val$confirmed", &class_arc_func_Cons, offsetof(mindustry_core_UI$1, F_val$confirmed), "Larc/func/Cons;", 4112 },
	{ "val$closed", &class_java_lang_Runnable, offsetof(mindustry_core_UI$1, F_val$closed), "Ljava/lang/Runnable;", 4112 },
	{ "val$empty", &class_boolean, offsetof(mindustry_core_UI$1, F_val$empty), "Z", 4112 },
	{ "val$description", &class_java_lang_String, offsetof(mindustry_core_UI$1, F_val$description), "Ljava/lang/String;", 4112 },
	{ "this$0", &class_mindustry_core_UI, offsetof(mindustry_core_UI$1, F_this$0), "Lmindustry/core/UI;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_UI$1_mindustry_core_UI_java_lang_String_java_lang_String_boolean_int_arc_func_Cons_java_lang_Runnable_boolean_java_lang_String, 0, "(Lmindustry/core/UI;Ljava/lang/String;Ljava/lang/String;ZILarc/func/Cons;Ljava/lang/Runnable;ZLjava/lang/String;)V", 0 },
};

Class class_mindustry_core_UI$1{
		.nativeName = (intptr_t) "mindustry/core/UI$1",
		.parentClass = (intptr_t) &class_arc_Input$TextInput,
		.size = sizeof(mindustry_core_UI$1),
		.classVtable = (intptr_t) vtable_mindustry_core_UI$1,
		.staticInitializer = (intptr_t) clinit_mindustry_core_UI$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_UI$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_core_UI$1 = registerClass(&class_mindustry_core_UI$1);

}

