#include "mindustry/content/UnitTypes_51_2_1_1.h"
#include "java/lang/Object.h"
#include "mindustry/entities/pattern/ShootHelix.h"
#include "mindustry/content/UnitTypes_51_2_1_1.h"
#include "mindustry/content/UnitTypes_51_2_1.h"
#include "mindustry/entities/pattern/ShootPattern.h"

extern "C" {


void mark_mindustry_content_UnitTypes$51$2$1$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_pattern_ShootHelix(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$51$2$1$1 *) object;
	if (self->F_this$2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$2)->clazz)->markFunction)((jobject) self->F_this$2, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$51$2$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootHelix(ctx);
}

void init_mindustry_content_UnitTypes$51$2$1$1_mindustry_content_UnitTypes$51$2$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$51$2$1$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$51$2$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3972);
	((mindustry_content_UnitTypes$51$2$1$1 *) NULL_CHECK((frame[0].o)))->F_this$2 = (jref) (frame[1].o);
	init_mindustry_entities_pattern_ShootHelix(ctx, (frame[0].o));
	LINE_NUMBER(3973);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(1));
	LINE_NUMBER(3974);
	((mindustry_entities_pattern_ShootHelix *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(5.0f));
	LINE_NUMBER(3972);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$51$2$1$1[] {
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
	(void *) M_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootPattern_flip,
	(void *) M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern,
	(void *) M_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet,
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
	{ "shoot", "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;Ljava/lang/Runnable;)V" },
	{ "shoot", "(ILmindustry/entities/pattern/ShootPattern$BulletHandler;)V" },
	{ "flip", "()V" },
	{ "copy", "()Lmindustry/entities/pattern/ShootPattern;" },
	{ "lambda$shoot$0", "(ILmindustry/gen/Bullet;)V" },
};

static FieldMetadata fields[] {
	{ "this$2", &class_mindustry_content_UnitTypes$51$2$1, offsetof(mindustry_content_UnitTypes$51$2$1$1, F_this$2), "Lmindustry/content/UnitTypes$51$2$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$51$2$1$1_mindustry_content_UnitTypes$51$2$1, 0, "(Lmindustry/content/UnitTypes$51$2$1;)V", 0 },
};

Class class_mindustry_content_UnitTypes$51$2$1$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$51$2$1$1",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootHelix,
		.size = sizeof(mindustry_content_UnitTypes$51$2$1$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$51$2$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$51$2$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$51$2$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$51$2$1$1 = registerClass(&class_mindustry_content_UnitTypes$51$2$1$1);

}

