#include "mindustry/game/Schematics_invoke_mindustry_io_TypeIO_ContentMapper_1.h"
#include "mindustry/io/TypeIO_ContentMapper.h"
#include "java/lang/Object.h"
#include "mindustry/game/Schematics_invoke_mindustry_io_TypeIO_ContentMapper_1.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/IntMap.h"
#include "mindustry/ctype/ContentType.h"

extern "C" {


void mark_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/game/Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1 *) self;
	auto object = SM_mindustry_game_Schematics_lambda$read$0_arc_struct_IntMap_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content(ctx, (jobject) proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1[] {
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
	(void *) M_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content,
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
	{ "get", "(Lmindustry/ctype/ContentType;I)Lmindustry/ctype/Content;" },
};

static jclass interfaces[] { &class_mindustry_io_TypeIO$ContentMapper, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_struct_IntMap, offsetof(mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1, F_field0), "Larc/struct/IntMap;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content, VTABLE_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1_get_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content, "(Lmindustry/ctype/ContentType;I)Lmindustry/ctype/Content;", 0 },
};

Class class_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1{
		.nativeName = (intptr_t) "mindustry/game/Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1),
		.classVtable = (intptr_t) vtable_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1 = registerClass(&class_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1);

}

