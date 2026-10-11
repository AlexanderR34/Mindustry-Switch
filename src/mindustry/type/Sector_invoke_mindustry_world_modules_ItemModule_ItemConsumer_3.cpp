#include "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule_ItemConsumer_3.h"
#include "mindustry/type/ItemSeq.h"
#include "java/lang/Object.h"
#include "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule_ItemConsumer_3.h"
#include "mindustry/type/Item.h"
#include "mindustry/type/Sector.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"

extern "C" {


void mark_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3_accept_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3 *) self;
	SM_mindustry_type_Sector_lambda$removeItems$0_mindustry_type_ItemSeq_mindustry_type_Item_int(ctx, (jobject) proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3[] {
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
	(void *) M_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3_accept_mindustry_type_Item_int,
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
	{ "accept", "(Lmindustry/type/Item;I)V" },
};

static jclass interfaces[] { &class_mindustry_world_modules_ItemModule$ItemConsumer, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_type_ItemSeq, offsetof(mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3, F_field0), "Lmindustry/type/ItemSeq;", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3_accept_mindustry_type_Item_int, VTABLE_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3_accept_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 0 },
};

Class class_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3{
		.nativeName = (intptr_t) "mindustry/type/Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3),
		.classVtable = (intptr_t) vtable_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3,
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
static bool registered_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3 = registerClass(&class_mindustry_type_Sector_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3);

}

