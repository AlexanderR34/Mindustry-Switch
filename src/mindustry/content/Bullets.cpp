#include "mindustry/content/Bullets.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Bullets.h"
#include "mindustry/content/Bullets_3.h"
#include "mindustry/content/Bullets_4.h"
#include "mindustry/content/Bullets_1.h"
#include "mindustry/content/Bullets_2.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {

jobject SF_mindustry_content_Bullets_placeholder;
jobject SF_mindustry_content_Bullets_spaceLiquid;
jobject SF_mindustry_content_Bullets_damageLightning;
jobject SF_mindustry_content_Bullets_damageLightningGround;
jobject SF_mindustry_content_Bullets_damageLightningAir;
jobject SF_mindustry_content_Bullets_fireball;

void mark_mindustry_content_Bullets(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Bullets_placeholder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Bullets_placeholder)->clazz)->markFunction)((jobject) SF_mindustry_content_Bullets_placeholder, mark, depth + 1);
		if (SF_mindustry_content_Bullets_spaceLiquid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Bullets_spaceLiquid)->clazz)->markFunction)((jobject) SF_mindustry_content_Bullets_spaceLiquid, mark, depth + 1);
		if (SF_mindustry_content_Bullets_damageLightning)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Bullets_damageLightning)->clazz)->markFunction)((jobject) SF_mindustry_content_Bullets_damageLightning, mark, depth + 1);
		if (SF_mindustry_content_Bullets_damageLightningGround)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Bullets_damageLightningGround)->clazz)->markFunction)((jobject) SF_mindustry_content_Bullets_damageLightningGround, mark, depth + 1);
		if (SF_mindustry_content_Bullets_damageLightningAir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Bullets_damageLightningAir)->clazz)->markFunction)((jobject) SF_mindustry_content_Bullets_damageLightningAir, mark, depth + 1);
		if (SF_mindustry_content_Bullets_fireball)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Bullets_fireball)->clazz)->markFunction)((jobject) SF_mindustry_content_Bullets_fireball, mark, depth + 1);
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
	auto self = (mindustry_content_Bullets *) object;
}

void clinit_mindustry_content_Bullets(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_Bullets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Bullets:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Bullets(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Bullets_load(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Bullets:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Bullets(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_content_Bullets$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Bullets$1);
	init_mindustry_content_Bullets$1_float_float_java_lang_String(ctx, sp[0].o, (jfloat(2.5f)), (jfloat(9.0f)), (((jobject) createStringLiteral(ctx, u8"ohno"_j))));
	clinit_mindustry_content_Bullets(ctx);
	SF_mindustry_content_Bullets_placeholder = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_content_Bullets$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Bullets$2);
	init_mindustry_content_Bullets$2_float_float(ctx, sp[0].o, (jfloat(1,000000e-04f)), (jfloat(0)));
	clinit_mindustry_content_Bullets(ctx);
	SF_mindustry_content_Bullets_damageLightning = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_damageLightning;
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType])(ctx, sp[0].o);
	clinit_mindustry_content_Bullets(ctx);
	SF_mindustry_content_Bullets_damageLightningGround = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_damageLightningGround;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesAir = (jint(0));
	LINE_NUMBER(40);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_damageLightning;
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType])(ctx, sp[0].o);
	clinit_mindustry_content_Bullets(ctx);
	SF_mindustry_content_Bullets_damageLightningAir = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_damageLightningAir;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround = (jint(0));
	LINE_NUMBER(42);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_damageLightningAir;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTiles = (jint(0));
	LINE_NUMBER(44);
	clinit_mindustry_content_Bullets$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Bullets$3);
	init_mindustry_content_Bullets$3_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(4.0f)));
	clinit_mindustry_content_Bullets(ctx);
	SF_mindustry_content_Bullets_fireball = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_content_Bullets$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Bullets$4);
	init_mindustry_content_Bullets$4(ctx, sp[0].o);
	clinit_mindustry_content_Bullets(ctx);
	SF_mindustry_content_Bullets_spaceLiquid = sp[0].o;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Bullets[] {
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
	{ "placeholder", &class_mindustry_entities_bullet_BulletType, (intptr_t) &SF_mindustry_content_Bullets_placeholder, "Lmindustry/entities/bullet/BulletType;", 9 },
	{ "spaceLiquid", &class_mindustry_entities_bullet_BulletType, (intptr_t) &SF_mindustry_content_Bullets_spaceLiquid, "Lmindustry/entities/bullet/BulletType;", 9 },
	{ "damageLightning", &class_mindustry_entities_bullet_BulletType, (intptr_t) &SF_mindustry_content_Bullets_damageLightning, "Lmindustry/entities/bullet/BulletType;", 9 },
	{ "damageLightningGround", &class_mindustry_entities_bullet_BulletType, (intptr_t) &SF_mindustry_content_Bullets_damageLightningGround, "Lmindustry/entities/bullet/BulletType;", 9 },
	{ "damageLightningAir", &class_mindustry_entities_bullet_BulletType, (intptr_t) &SF_mindustry_content_Bullets_damageLightningAir, "Lmindustry/entities/bullet/BulletType;", 9 },
	{ "fireball", &class_mindustry_entities_bullet_BulletType, (intptr_t) &SF_mindustry_content_Bullets_fireball, "Lmindustry/entities/bullet/BulletType;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Bullets, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Bullets_load, 0, "()V", 9 },
};

Class class_mindustry_content_Bullets{
		.nativeName = (intptr_t) "mindustry/content/Bullets",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Bullets),
		.classVtable = (intptr_t) vtable_mindustry_content_Bullets,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Bullets,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Bullets,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Bullets = registerClass(&class_mindustry_content_Bullets);

}
