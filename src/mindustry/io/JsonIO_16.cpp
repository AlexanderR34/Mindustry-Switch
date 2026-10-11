#include "mindustry/io/JsonIO_16.h"
#include "java/lang/Integer.h"
#include "mindustry/io/JsonIO_16.h"
#include "java/util/Iterator.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "arc/math/geom/Point2.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_io_JsonIO$16(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_JsonIO$16 *) object;
}

void clinit_mindustry_io_JsonIO$16(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_JsonIO$16(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$16:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO$16(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(280);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_mindustry_game_MapObjectives_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$16:write", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(283);
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, (frame[1].o));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_mindustry_game_MapObjectives_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_MapObjectives_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(285);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_6:;
	{
	sp -= 2;
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(286);
	((func_arc_util_serialization_Json_writeFields_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeFields_java_lang_Object])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(288);
	((func_arc_util_serialization_Json_writeArrayStart_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"parents"_j))));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[5].o)))->F_parents;
	if (sp[0].o == nullptr) {
		goto label_11;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
	label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(290);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[2].o)))->F_all;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[1].o, (frame[7].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_util_serialization_Json_writeValue_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(291);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(293);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[1].o));
	LINE_NUMBER(295);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editorPos"_j));
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[5].o)))->F_editorX), ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[5].o)))->F_editorY));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(296);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[1].o));
	LINE_NUMBER(297);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(299);
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, (frame[1].o));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_game_MapObjectives(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	clinit_mindustry_game_MapObjectives(ctx);
	jobject objectives = gcAlloc(ctx, &class_mindustry_game_MapObjectives);
	init_mindustry_game_MapObjectives(ctx, objectives);
	if (!self || !param0 || !param1) {
		return objectives;
	}

	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$16:read", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = objectives;

	auto jsonVal = (arc_util_serialization_JsonValue *) param1;
	auto child = (arc_util_serialization_JsonValue *) jsonVal->F_child;

	// First pass: read each objective
	while (child) {
		tryCatch(frameRef, [&]() {
			auto obj = ((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) 
				((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])
				(ctx, (frame[1].o), (((jobject) &class_mindustry_game_MapObjectives$MapObjective)), (jobject)child);
			if (obj) {
				auto mapObj = (mindustry_game_MapObjectives$MapObjective *) obj;
				auto edPos = (arc_util_serialization_JsonValue *) ((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) 
					((void **) nullCheck(ctx, (jobject)child)->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])
					(ctx, (jobject)child, (jobject)createStringLiteral(ctx, u8"editorPos"_j));
				if (edPos) {
					int pos = (jint) ((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (jobject)edPos)->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (jobject)edPos);
					mapObj->F_editorX = (jshort) (pos >> 16);
					mapObj->F_editorY = (jshort) (pos & 0xffff);
				}
				jobject allSeq = (jobject) ((mindustry_game_MapObjectives *) objectives)->F_all;
				((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, allSeq)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, allSeq, obj);
				((func_mindustry_game_MapObjectives$MapObjective_validate) ((void **) nullCheck(ctx, obj)->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_validate])(ctx, obj);
			}
		}, &class_java_lang_Throwable, [&](jobject err) {});
		child = (arc_util_serialization_JsonValue *) child->F_next;
	}

	// Second pass: link parents safely
	child = (arc_util_serialization_JsonValue *) jsonVal->F_child;
	int objIndex = 0;
	auto allSeq = (arc_struct_Seq *) ((mindustry_game_MapObjectives *) objectives)->F_all;
	int allSize = allSeq ? allSeq->F_size : 0;
	while (child && objIndex < allSize) {
		auto curObj = (mindustry_game_MapObjectives$MapObjective *) ((jobject *) ((jarray)allSeq->F_items)->data)[objIndex];
		auto parentsVal = (arc_util_serialization_JsonValue *) ((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) 
			((void **) nullCheck(ctx, (jobject)child)->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])
			(ctx, (jobject)child, (jobject)createStringLiteral(ctx, u8"parents"_j));
		if (parentsVal && parentsVal->F_child) {
			auto pChild = (arc_util_serialization_JsonValue *) parentsVal->F_child;
			while (pChild) {
				int parentIdx = (jint) ((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (jobject)pChild)->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (jobject)pChild);
				if (parentIdx >= 0 && parentIdx < allSize && curObj && curObj->F_parents) {
					auto pObj = ((jobject *) ((jarray)allSeq->F_items)->data)[parentIdx];
					if (pObj) {
						jobject parentsSeq = (jobject) curObj->F_parents;
						((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, parentsSeq)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, parentsSeq, pObj);
					}
				}
				pChild = (arc_util_serialization_JsonValue *) pChild->F_next;
			}
		}
		child = (arc_util_serialization_JsonValue *) child->F_next;
		objIndex++;
	}

	popStackFrame(ctx);
	return objectives;
}

jobject M_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$16:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_game_MapObjectives) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_game_MapObjectives])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$16:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(280);
	((func_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_mindustry_game_MapObjectives_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_mindustry_game_MapObjectives_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_mindustry_game_MapObjectives, (frame[2].o))), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_JsonIO$16[] {
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
	(void *) M_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_mindustry_game_MapObjectives_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_game_MapObjectives,
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
	{ "write", "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "write", "(Larc/util/serialization/Json;Lmindustry/game/MapObjectives;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Lmindustry/game/MapObjectives;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$Serializer, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_JsonIO$16, 0, "()V", 0 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_mindustry_game_MapObjectives_java_lang_Class, VTABLE_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_mindustry_game_MapObjectives_java_lang_Class, "(Larc/util/serialization/Json;Lmindustry/game/MapObjectives;Ljava/lang/Class;)V", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_game_MapObjectives, VTABLE_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_game_MapObjectives, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Lmindustry/game/MapObjectives;", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_io_JsonIO$16_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, VTABLE_mindustry_io_JsonIO$16_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V", 4161 },
};

Class class_mindustry_io_JsonIO$16{
		.nativeName = (intptr_t) "mindustry/io/JsonIO$16",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_JsonIO$16),
		.classVtable = (intptr_t) vtable_mindustry_io_JsonIO$16,
		.staticInitializer = (intptr_t) clinit_mindustry_io_JsonIO$16,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_JsonIO$16,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_io_JsonIO$16 = registerClass(&class_mindustry_io_JsonIO$16);

}

