#include "arc/util/pooling/Pools.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/pooling/Pools_1.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/Seq.h"
#include "arc/util/pooling/Pool.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_util_pooling_Pools_typePools;

void mark_arc_util_pooling_Pools(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_pooling_Pools_typePools)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_pooling_Pools_typePools)->clazz)->markFunction)((jobject) SF_arc_util_pooling_Pools_typePools, mark, depth + 1);
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
	auto self = (arc_util_pooling_Pools *) object;
}

void init_arc_util_pooling_Pools(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_int_R_arc_util_pooling_Pool(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(23);
	clinit_arc_util_pooling_Pools(ctx);
	sp[0].o = (jobject)SF_arc_util_pooling_Pools_typePools;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[3].o = (checkCast(ctx, &class_arc_util_pooling_Pool, sp[0].o));
	LINE_NUMBER(24);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(25);
	clinit_arc_util_pooling_Pools$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_pooling_Pools$1);
	init_arc_util_pooling_Pools$1_int_int_arc_func_Prov(ctx, sp[0].o, (jint(4)), (frame[2].i), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_util_pooling_Pools(ctx);
	sp[0].o = (jobject)SF_arc_util_pooling_Pools_typePools;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_int_R_arc_util_pooling_Pool(ctx, (frame[0].o), (frame[1].o), (5000));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_pooling_Pools_set_java_lang_Class_arc_util_pooling_Pool(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(46);
	clinit_arc_util_pooling_Pools(ctx);
	sp[0].o = (jobject)SF_arc_util_pooling_Pools_typePools;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:obtain", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_arc_util_pooling_Pools);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx, (jobject) &class_arc_util_pooling_Pools);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_pooling_Pools_free_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:free", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_arc_util_pooling_Pools);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(56);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Object cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(57);
	clinit_arc_util_pooling_Pools(ctx);
	sp[0].o = (jobject)SF_arc_util_pooling_Pools_typePools;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_util_pooling_Pool, sp[0].o));
	LINE_NUMBER(58);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx, (jobject) &class_arc_util_pooling_Pools);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(59);
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(60);
	popStackFrame(ctx, (jobject) &class_arc_util_pooling_Pools);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:freeAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(67);
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:freeAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(75);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Objects cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(76);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(77);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(80);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(81);
	clinit_arc_util_pooling_Pools(ctx);
	sp[0].o = (jobject)SF_arc_util_pooling_Pools_typePools;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_util_pooling_Pool, sp[0].o));
	LINE_NUMBER(82);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	goto label_9;
label_10:;
	{
	LINE_NUMBER(84);
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(85);
	if ((frame[1].i) != 0) goto label_9;
	}
	INST_ACONST_NULL();
	INST_ASTORE(2);
label_9:;
	{
	LINE_NUMBER(77);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_util_pooling_Pools(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_arc_util_pooling_Pools(ctx);
	SF_arc_util_pooling_Pools_typePools = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_pooling_Pools[] {
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
	{ "typePools", &class_arc_struct_ObjectMap, (intptr_t) &SF_arc_util_pooling_Pools_typePools, "Larc/struct/ObjectMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_pooling_Pools, 0, "()V", 2 },
	{ "get", (intptr_t) SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_int_R_arc_util_pooling_Pool, 0, "(Ljava/lang/Class;Larc/func/Prov;I)Larc/util/pooling/Pool;", 9 },
	{ "get", (intptr_t) SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool, 0, "(Ljava/lang/Class;Larc/func/Prov;)Larc/util/pooling/Pool;", 9 },
	{ "set", (intptr_t) SM_arc_util_pooling_Pools_set_java_lang_Class_arc_util_pooling_Pool, 0, "(Ljava/lang/Class;Larc/util/pooling/Pool;)V", 9 },
	{ "obtain", (intptr_t) SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/func/Prov;)Ljava/lang/Object;", 41 },
	{ "free", (intptr_t) SM_arc_util_pooling_Pools_free_java_lang_Object, 0, "(Ljava/lang/Object;)V", 41 },
	{ "freeAll", (intptr_t) SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 9 },
	{ "freeAll", (intptr_t) SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq_boolean, 0, "(Larc/struct/Seq;Z)V", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_util_pooling_Pools, 0, "()V", 8 },
};

Class class_arc_util_pooling_Pools{
		.nativeName = (intptr_t) "arc/util/pooling/Pools",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_pooling_Pools),
		.classVtable = (intptr_t) vtable_arc_util_pooling_Pools,
		.staticInitializer = (intptr_t) clinit_arc_util_pooling_Pools,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_pooling_Pools,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_pooling_Pools = registerClass(&class_arc_util_pooling_Pools);

}
