#include "mindustry/world/blocks/logic/TileableLogicDisplay_1.h"
#include "java/lang/NoSuchFieldError.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_1.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/Enum.h"

extern "C" {

jobject SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess;

void mark_mindustry_world_blocks_logic_TileableLogicDisplay$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_logic_TileableLogicDisplay$1 *) object;
}

void clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$1:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1(ctx);
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_mindustry_logic_LAccess_values_R_Array1_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1(ctx);
	SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_displayWidth;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_displayHeight;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_6:;
	INST_ASTORE(0);
label_9:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_TileableLogicDisplay$1[] {
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
	{ "$SwitchMap$mindustry$logic$LAccess", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_logic_TileableLogicDisplay$1{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/TileableLogicDisplay$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_logic_TileableLogicDisplay$1),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_TileableLogicDisplay$1,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_TileableLogicDisplay$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 4128,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = true,
};
static bool registered_mindustry_world_blocks_logic_TileableLogicDisplay$1 = registerClass(&class_mindustry_world_blocks_logic_TileableLogicDisplay$1);

}

