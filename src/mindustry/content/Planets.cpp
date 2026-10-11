#include "mindustry/content/Planets.h"
#include "mindustry/world/Block.h"
#include "mindustry/content/Planets_1.h"
#include "mindustry/content/Planets_2.h"
#include "mindustry/content/Planets_invoke_arc_func_Cons_5.h"
#include "mindustry/content/Planets_invoke_arc_func_Cons_4.h"
#include "mindustry/content/Planets_invoke_arc_func_Cons_3.h"
#include "arc/func/Cons.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Planets_5.h"
#include "mindustry/content/Planets.h"
#include "mindustry/type/Planet.h"
#include "mindustry/content/Planets_3.h"
#include "mindustry/content/Planets_4.h"
#include "mindustry/maps/planet/AsteroidGenerator.h"

extern "C" {

jobject SF_mindustry_content_Planets_sun;
jobject SF_mindustry_content_Planets_erekir;
jobject SF_mindustry_content_Planets_tantros;
jobject SF_mindustry_content_Planets_serpulo;
jobject SF_mindustry_content_Planets_gier;
jobject SF_mindustry_content_Planets_notva;
jobject SF_mindustry_content_Planets_verilus;

void mark_mindustry_content_Planets(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Planets_sun)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_sun)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_sun, mark, depth + 1);
		if (SF_mindustry_content_Planets_erekir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_erekir)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_erekir, mark, depth + 1);
		if (SF_mindustry_content_Planets_tantros)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_tantros)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_tantros, mark, depth + 1);
		if (SF_mindustry_content_Planets_serpulo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_serpulo)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_serpulo, mark, depth + 1);
		if (SF_mindustry_content_Planets_gier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_gier)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_gier, mark, depth + 1);
		if (SF_mindustry_content_Planets_notva)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_notva)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_notva, mark, depth + 1);
		if (SF_mindustry_content_Planets_verilus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Planets_verilus)->clazz)->markFunction)((jobject) SF_mindustry_content_Planets_verilus, mark, depth + 1);
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
	auto self = (mindustry_content_Planets *) object;
}

void clinit_mindustry_content_Planets(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_Planets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Planets_load(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets(ctx);
	{
	LINE_NUMBER(29);
	clinit_mindustry_content_Planets$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Planets$1);
	init_mindustry_content_Planets$1_java_lang_String_mindustry_type_Planet_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sun"_j))), (jobject(nullptr)), (jfloat(4.0f)));
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_sun = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_content_Planets$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Planets$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"erekir"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_sun;
	init_mindustry_content_Planets$2_java_lang_String_mindustry_type_Planet_float_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(1)), (jint(2)));
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_erekir = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"gier"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_ferricStoneWall;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_carbonWall;
	jint temp0 = -5;
	jfloat temp1 = jfloat(0.4f);
	jint temp2 = 7;
	jfloat temp3 = jfloat(1);
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_content_Planets_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_content_Planets_invoke_arc_func_Cons_3);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_Planets_makeAsteroid_java_lang_String_mindustry_type_Planet_mindustry_world_Block_mindustry_world_Block_int_float_int_float_arc_func_Cons_R_mindustry_type_Planet(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1, temp2, temp3, sp[4].o);
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_gier = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"notva"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_ferricStoneWall;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_beryllicStoneWall;
	jint temp4 = -4;
	jfloat temp5 = jfloat(0.55f);
	jint temp6 = 9;
	jfloat temp7 = jfloat(1.3f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_content_Planets_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_content_Planets_invoke_arc_func_Cons_4);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_Planets_makeAsteroid_java_lang_String_mindustry_type_Planet_mindustry_world_Block_mindustry_world_Block_int_float_int_float_arc_func_Cons_R_mindustry_type_Planet(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp4, temp5, temp6, temp7, sp[4].o);
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_notva = sp[0].o;
	LINE_NUMBER(107);
	clinit_mindustry_content_Planets$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Planets$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tantros"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_sun;
	init_mindustry_content_Planets$3_java_lang_String_mindustry_type_Planet_float_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(1)), (jint(2)));
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_tantros = sp[0].o;
	LINE_NUMBER(123);
	clinit_mindustry_content_Planets$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Planets$4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"serpulo"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_sun;
	init_mindustry_content_Planets$4_java_lang_String_mindustry_type_Planet_float_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(1)), (jint(3)));
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_serpulo = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"verilus"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stoneWall;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_iceWall;
	jint temp8 = jint(-1);
	jfloat temp9 = jfloat(0.5f);
	jint temp10 = 12;
	jfloat temp11 = jfloat(2);
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_content_Planets_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_content_Planets_invoke_arc_func_Cons_5);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_Planets_makeAsteroid_java_lang_String_mindustry_type_Planet_mindustry_world_Block_mindustry_world_Block_int_float_int_float_arc_func_Cons_R_mindustry_type_Planet(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp8, temp9, temp10, temp11, sp[4].o);
	clinit_mindustry_content_Planets(ctx);
	SF_mindustry_content_Planets_verilus = sp[0].o;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_Planets_makeAsteroid_java_lang_String_mindustry_type_Planet_mindustry_world_Block_mindustry_world_Block_int_float_int_float_arc_func_Cons_R_mindustry_type_Planet(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jfloat param5, jint param6, jfloat param7, jobject param8) {
	jtype frame[21];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets:makeAsteroid", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(173);
	clinit_mindustry_content_Planets$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Planets$5);
	init_mindustry_content_Planets$5_java_lang_String_mindustry_type_Planet_float_float_arc_func_Cons_mindustry_world_Block_mindustry_world_Block_int_float_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (jfloat(0.12f)), (frame[7].f), (frame[8].o), (frame[3].o), (frame[2].o), (frame[4].i), (frame[5].f), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Planets_lambda$load$2_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets:lambda$load$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(165);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylChance = (jfloat(0));
	LINE_NUMBER(166);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_iceChance = (jfloat(0.6f));
	LINE_NUMBER(167);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_carbonChance = (jfloat(0.1f));
	LINE_NUMBER(168);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_ferricChance = (jfloat(0));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Planets_lambda$load$1_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets:lambda$load$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylChance = (jfloat(0.8f));
	LINE_NUMBER(102);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_iceChance = (jfloat(0));
	LINE_NUMBER(103);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_carbonChance = (jfloat(1,000000e-02f));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK(sp[0].o))->F_max = (((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK(sp[0].o))->F_max) + (jint(2)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Planets_lambda$load$0_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets:lambda$load$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(93);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_min = (25);
	LINE_NUMBER(94);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_max = (35);
	LINE_NUMBER(95);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_carbonChance = (jfloat(0.6f));
	LINE_NUMBER(96);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_iceChance = (jfloat(0));
	LINE_NUMBER(97);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylChance = (jfloat(0.1f));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Planets[] {
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
	{ "sun", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_sun, "Lmindustry/type/Planet;", 9 },
	{ "erekir", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_erekir, "Lmindustry/type/Planet;", 9 },
	{ "tantros", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_tantros, "Lmindustry/type/Planet;", 9 },
	{ "serpulo", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_serpulo, "Lmindustry/type/Planet;", 9 },
	{ "gier", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_gier, "Lmindustry/type/Planet;", 9 },
	{ "notva", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_notva, "Lmindustry/type/Planet;", 9 },
	{ "verilus", &class_mindustry_type_Planet, (intptr_t) &SF_mindustry_content_Planets_verilus, "Lmindustry/type/Planet;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Planets, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Planets_load, 0, "()V", 9 },
	{ "makeAsteroid", (intptr_t) SM_mindustry_content_Planets_makeAsteroid_java_lang_String_mindustry_type_Planet_mindustry_world_Block_mindustry_world_Block_int_float_int_float_arc_func_Cons_R_mindustry_type_Planet, 0, "(Ljava/lang/String;Lmindustry/type/Planet;Lmindustry/world/Block;Lmindustry/world/Block;IFIFLarc/func/Cons;)Lmindustry/type/Planet;", 10 },
	{ "lambda$load$2", (intptr_t) SM_mindustry_content_Planets_lambda$load$2_mindustry_maps_planet_AsteroidGenerator, 0, "(Lmindustry/maps/planet/AsteroidGenerator;)V", 4106 },
	{ "lambda$load$1", (intptr_t) SM_mindustry_content_Planets_lambda$load$1_mindustry_maps_planet_AsteroidGenerator, 0, "(Lmindustry/maps/planet/AsteroidGenerator;)V", 4106 },
	{ "lambda$load$0", (intptr_t) SM_mindustry_content_Planets_lambda$load$0_mindustry_maps_planet_AsteroidGenerator, 0, "(Lmindustry/maps/planet/AsteroidGenerator;)V", 4106 },
};

Class class_mindustry_content_Planets{
		.nativeName = (intptr_t) "mindustry/content/Planets",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Planets),
		.classVtable = (intptr_t) vtable_mindustry_content_Planets,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Planets,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Planets,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Planets = registerClass(&class_mindustry_content_Planets);

}
