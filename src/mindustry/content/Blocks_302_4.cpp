#include "mindustry/content/Blocks_302_4.h"
#include "mindustry/content/Blocks_302.h"
#include "java/lang/Object.h"
#include "mindustry/content/Blocks_302_4.h"
#include "mindustry/entities/pattern/ShootBarrel.h"
#include "mindustry/entities/pattern/ShootPattern.h"

extern "C" {


void mark_mindustry_content_Blocks$302$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_pattern_ShootBarrel(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks$302$4 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$302$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_pattern_ShootBarrel(ctx);
}

void init_mindustry_content_Blocks$302$4_mindustry_content_Blocks$302(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$302$4:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$302$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3727);
	((mindustry_content_Blocks$302$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_pattern_ShootBarrel(ctx, (frame[0].o));
	LINE_NUMBER(3728);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(-4.0f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (jfloat(-1.25f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[1].o, (6)) = (jfloat(4.0f));
	ARRAY_ACCESS(jfloat, sp[1].o, (7)) = (jfloat(-1.25f));
	ARRAY_ACCESS(jfloat, sp[1].o, (8)) = (jfloat(0));
	((mindustry_entities_pattern_ShootBarrel *) NULL_CHECK(sp[0].o))->F_barrels = (jref) sp[1].o;
	LINE_NUMBER(3733);
	((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shots = (jint(4));
	LINE_NUMBER(3734);
	((mindustry_entities_pattern_ShootPattern *) NULL_CHECK((frame[0].o)))->F_shotDelay = (jfloat(5.0f));
	LINE_NUMBER(3727);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$302$4[] {
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
	(void *) M_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable,
	(void *) M_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler,
	(void *) M_mindustry_entities_pattern_ShootBarrel_flip,
	(void *) M_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern,
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
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_content_Blocks$302, offsetof(mindustry_content_Blocks$302$4, F_this$0), "Lmindustry/content/Blocks$302;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$302$4_mindustry_content_Blocks$302, 0, "(Lmindustry/content/Blocks$302;)V", 0 },
};

Class class_mindustry_content_Blocks$302$4{
		.nativeName = (intptr_t) "mindustry/content/Blocks$302$4",
		.parentClass = (intptr_t) &class_mindustry_entities_pattern_ShootBarrel,
		.size = sizeof(mindustry_content_Blocks$302$4),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$302$4,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$302$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$302$4,
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
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$302$4 = registerClass(&class_mindustry_content_Blocks$302$4);

}

