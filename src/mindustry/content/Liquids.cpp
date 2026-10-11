#include "mindustry/content/Liquids.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/content/Liquids_7.h"
#include "mindustry/content/Liquids_10.h"
#include "mindustry/content/Liquids_8.h"
#include "mindustry/content/Liquids_11.h"
#include "mindustry/content/Liquids_9.h"
#include "arc/graphics/Color.h"
#include "java/lang/Object.h"
#include "mindustry/content/Liquids_1.h"
#include "java/lang/String.h"
#include "mindustry/content/Liquids_2.h"
#include "mindustry/content/Liquids_3.h"
#include "mindustry/content/Liquids_4.h"
#include "mindustry/content/Liquids_5.h"
#include "mindustry/content/Liquids_6.h"
#include "mindustry/content/Liquids.h"

extern "C" {

jobject SF_mindustry_content_Liquids_water;
jobject SF_mindustry_content_Liquids_slag;
jobject SF_mindustry_content_Liquids_oil;
jobject SF_mindustry_content_Liquids_cryofluid;
jobject SF_mindustry_content_Liquids_arkycite;
jobject SF_mindustry_content_Liquids_gallium;
jobject SF_mindustry_content_Liquids_neoplasm;
jobject SF_mindustry_content_Liquids_ozone;
jobject SF_mindustry_content_Liquids_hydrogen;
jobject SF_mindustry_content_Liquids_nitrogen;
jobject SF_mindustry_content_Liquids_cyanogen;

void mark_mindustry_content_Liquids(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Liquids_water)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_water)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_water, mark, depth + 1);
		if (SF_mindustry_content_Liquids_slag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_slag)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_slag, mark, depth + 1);
		if (SF_mindustry_content_Liquids_oil)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_oil)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_oil, mark, depth + 1);
		if (SF_mindustry_content_Liquids_cryofluid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_cryofluid)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_cryofluid, mark, depth + 1);
		if (SF_mindustry_content_Liquids_arkycite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_arkycite)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_arkycite, mark, depth + 1);
		if (SF_mindustry_content_Liquids_gallium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_gallium)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_gallium, mark, depth + 1);
		if (SF_mindustry_content_Liquids_neoplasm)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_neoplasm)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_neoplasm, mark, depth + 1);
		if (SF_mindustry_content_Liquids_ozone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_ozone)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_ozone, mark, depth + 1);
		if (SF_mindustry_content_Liquids_hydrogen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_hydrogen)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_hydrogen, mark, depth + 1);
		if (SF_mindustry_content_Liquids_nitrogen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_nitrogen)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_nitrogen, mark, depth + 1);
		if (SF_mindustry_content_Liquids_cyanogen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Liquids_cyanogen)->clazz)->markFunction)((jobject) SF_mindustry_content_Liquids_cyanogen, mark, depth + 1);
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
	auto self = (mindustry_content_Liquids *) object;
}

void clinit_mindustry_content_Liquids(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_Liquids(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Liquids:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Liquids(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Liquids_load(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Liquids:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Liquids(ctx);
	{
	LINE_NUMBER(13);
	clinit_mindustry_content_Liquids$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"water"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"596ab8"_j))));
	init_mindustry_content_Liquids$1_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_water = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_content_Liquids$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"slag"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffa166"_j))));
	init_mindustry_content_Liquids$2_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_slag = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_content_Liquids$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"oil"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"313131"_j))));
	init_mindustry_content_Liquids$3_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_oil = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_content_Liquids$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cryofluid"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6ecdec"_j))));
	init_mindustry_content_Liquids$4_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_cryofluid = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_content_Liquids$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"neoplasm"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"c33e2b"_j))));
	init_mindustry_content_Liquids$5_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_neoplasm = sp[0].o;
	LINE_NUMBER(65);
	clinit_mindustry_content_Liquids$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$6);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"arkycite"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"84a94b"_j))));
	init_mindustry_content_Liquids$6_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_arkycite = sp[0].o;
	LINE_NUMBER(71);
	clinit_mindustry_content_Liquids$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$7);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"gallium"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"9a9dbf"_j))));
	init_mindustry_content_Liquids$7_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_gallium = sp[0].o;
	LINE_NUMBER(76);
	clinit_mindustry_content_Liquids$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$8);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ozone"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fc81dd"_j))));
	init_mindustry_content_Liquids$8_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_ozone = sp[0].o;
	LINE_NUMBER(83);
	clinit_mindustry_content_Liquids$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$9);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"hydrogen"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"9eabf7"_j))));
	init_mindustry_content_Liquids$9_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_hydrogen = sp[0].o;
	LINE_NUMBER(88);
	clinit_mindustry_content_Liquids$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$10);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"nitrogen"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"efe3ff"_j))));
	init_mindustry_content_Liquids$10_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_nitrogen = sp[0].o;
	LINE_NUMBER(92);
	clinit_mindustry_content_Liquids$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Liquids$11);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cyanogen"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"89e8b6"_j))));
	init_mindustry_content_Liquids$11_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Liquids(ctx);
	SF_mindustry_content_Liquids_cyanogen = sp[0].o;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Liquids[] {
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
	{ "water", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_water, "Lmindustry/type/Liquid;", 9 },
	{ "slag", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_slag, "Lmindustry/type/Liquid;", 9 },
	{ "oil", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_oil, "Lmindustry/type/Liquid;", 9 },
	{ "cryofluid", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_cryofluid, "Lmindustry/type/Liquid;", 9 },
	{ "arkycite", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_arkycite, "Lmindustry/type/Liquid;", 9 },
	{ "gallium", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_gallium, "Lmindustry/type/Liquid;", 9 },
	{ "neoplasm", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_neoplasm, "Lmindustry/type/Liquid;", 9 },
	{ "ozone", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_ozone, "Lmindustry/type/Liquid;", 9 },
	{ "hydrogen", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_hydrogen, "Lmindustry/type/Liquid;", 9 },
	{ "nitrogen", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_nitrogen, "Lmindustry/type/Liquid;", 9 },
	{ "cyanogen", &class_mindustry_type_Liquid, (intptr_t) &SF_mindustry_content_Liquids_cyanogen, "Lmindustry/type/Liquid;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Liquids, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Liquids_load, 0, "()V", 9 },
};

Class class_mindustry_content_Liquids{
		.nativeName = (intptr_t) "mindustry/content/Liquids",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Liquids),
		.classVtable = (intptr_t) vtable_mindustry_content_Liquids,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Liquids,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Liquids,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Liquids = registerClass(&class_mindustry_content_Liquids);

}
