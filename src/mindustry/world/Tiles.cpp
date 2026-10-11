#include "mindustry/world/Tiles.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Intc2.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Fire.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/geom/Point2.h"
#include "java/lang/Iterable.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Puddle.h"
#include "arc/func/Cons.h"
#include "mindustry/world/Tiles_TileIterator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"

extern "C" {


void mark_mindustry_world_Tiles(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_Tiles *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_puddles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_puddles)->clazz)->markFunction)((jobject) self->F_puddles, mark, depth + 1);
	if (self->F_fires)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fires)->clazz)->markFunction)((jobject) self->F_fires, mark, depth + 1);
	if (self->F_tmpFloorState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpFloorState)->clazz)->markFunction)((jobject) self->F_tmpFloorState, mark, depth + 1);
	if (self->F_tmpBlockState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpBlockState)->clazz)->markFunction)((jobject) self->F_tmpBlockState, mark, depth + 1);
}

void clinit_mindustry_world_Tiles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_Tiles_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tiles(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Tile, ((frame[1].i) * (frame[2].i)));
	((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_array = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(24);
	((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Puddle, ((frame[1].i) * (frame[2].i)));
	((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_puddles = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Fire, ((frame[1].i) * (frame[2].i)));
	((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_fires = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_world_Tiles_getTmpFloorState_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getTmpFloorState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpFloorState;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_LCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpFloorState;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i));
	sp[0].l = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_setTmpFloorState_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:setTmpFloorState", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpFloorState;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpFloorState;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject) createArray(ctx, &class_long, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_tmpFloorState = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpFloorState;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)) = (frame[2].l);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_world_Tiles_getTmpBlockState_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getTmpBlockState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpBlockState;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_LCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpBlockState;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i));
	sp[0].l = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_setTmpBlockState_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:setTmpBlockState", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpBlockState;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpBlockState;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject) createArray(ctx, &class_long, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_tmpBlockState = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_tmpBlockState;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)) = (frame[2].l);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getPuddle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_puddles;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:setPuddle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_puddles;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getFire", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_fires;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:setFire", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_fires;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_each_arc_func_Intc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) goto label_2;
	}
	{
	LINE_NUMBER(65);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height)) goto label_5;
	}
	{
	LINE_NUMBER(66);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(65);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(64);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_fill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:fill", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[1].i;
	clinit_mindustry_world_Tile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_Tile);
	init_mindustry_world_Tile_int_int(ctx, sp[1].o, ((frame[1].i) % ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)), ((frame[1].i) / ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(73);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_set_int_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) + (frame[1].i))) = (frame[3].o);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_seti_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:seti", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tiles_in_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:in", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(90);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(96);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) < ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height)) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) + (frame[1].i)));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getn", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(101);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) < ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001, \u0001 out of bounds: width=\u0001, height=\u0001"_j.string, 4, boxInteger(ctx, (frame[1].i)), boxInteger(ctx, (frame[2].i)), boxInteger(ctx, ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)), boxInteger(ctx, ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getc", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[1].i), (jint(0)), (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1))));
	frame[1].i = temp0;
	LINE_NUMBER(108);
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[2].i), (jint(0)), (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))));
	frame[2].i = temp1;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_width)) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:geti", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:getp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[1].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tiles_eachTile_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:eachTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_world_Tiles *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(124);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(123);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tiles_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tiles:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	clinit_mindustry_world_Tiles$TileIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_Tiles$TileIterator);
	init_mindustry_world_Tiles$TileIterator_mindustry_world_Tiles(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_Tiles;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field tmpFloorState
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field tmpBlockState
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getFire
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_Tiles[] {
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
	(void *) M_mindustry_world_Tiles_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_mindustry_world_Tiles_getTmpFloorState_int_R_long,
	(void *) M_mindustry_world_Tiles_setTmpFloorState_int_long,
	(void *) M_mindustry_world_Tiles_getTmpBlockState_int_R_long,
	(void *) M_mindustry_world_Tiles_setTmpBlockState_int_long,
	(void *) M_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle,
	(void *) M_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle,
	(void *) M_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire,
	(void *) M_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire,
	(void *) M_mindustry_world_Tiles_each_arc_func_Intc2,
	(void *) M_mindustry_world_Tiles_fill,
	(void *) M_mindustry_world_Tiles_set_int_int_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_seti_int_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_in_int_int_R_boolean,
	(void *) M_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tiles_eachTile_arc_func_Cons,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "getTmpFloorState", "(I)J" },
	{ "setTmpFloorState", "(IJ)V" },
	{ "getTmpBlockState", "(I)J" },
	{ "setTmpBlockState", "(IJ)V" },
	{ "getPuddle", "(I)Lmindustry/gen/Puddle;" },
	{ "setPuddle", "(ILmindustry/gen/Puddle;)V" },
	{ "getFire", "(I)Lmindustry/gen/Fire;" },
	{ "setFire", "(ILmindustry/gen/Fire;)V" },
	{ "each", "(Larc/func/Intc2;)V" },
	{ "fill", "()V" },
	{ "set", "(IILmindustry/world/Tile;)V" },
	{ "seti", "(ILmindustry/world/Tile;)V" },
	{ "in", "(II)Z" },
	{ "get", "(II)Lmindustry/world/Tile;" },
	{ "getn", "(II)Lmindustry/world/Tile;" },
	{ "getc", "(II)Lmindustry/world/Tile;" },
	{ "geti", "(I)Lmindustry/world/Tile;" },
	{ "getp", "(I)Lmindustry/world/Tile;" },
	{ "eachTile", "(Larc/func/Cons;)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_mindustry_world_Tiles$TileIterator,
};

static FieldMetadata fields[] {
	{ "width", &class_int, offsetof(mindustry_world_Tiles, F_width), "I", 17 },
	{ "height", &class_int, offsetof(mindustry_world_Tiles, F_height), "I", 17 },
	{ "array", getArrayClass(&class_mindustry_world_Tile, 1), offsetof(mindustry_world_Tiles, F_array), "[Lmindustry/world/Tile;", 16 },
	{ "puddles", getArrayClass(&class_mindustry_gen_Puddle, 1), offsetof(mindustry_world_Tiles, F_puddles), "[Lmindustry/gen/Puddle;", 16 },
	{ "fires", getArrayClass(&class_mindustry_gen_Fire, 1), offsetof(mindustry_world_Tiles, F_fires), "[Lmindustry/gen/Fire;", 16 },
	{ "tmpFloorState", getArrayClass(&class_long, 1), offsetof(mindustry_world_Tiles, F_tmpFloorState), "[J", 0 },
	{ "tmpBlockState", getArrayClass(&class_long, 1), offsetof(mindustry_world_Tiles, F_tmpBlockState), "[J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Tiles_int_int, 0, "(II)V", 1 },
	{ "getTmpFloorState", (intptr_t) M_mindustry_world_Tiles_getTmpFloorState_int_R_long, VTABLE_mindustry_world_Tiles_getTmpFloorState_int_R_long, "(I)J", 1 },
	{ "setTmpFloorState", (intptr_t) M_mindustry_world_Tiles_setTmpFloorState_int_long, VTABLE_mindustry_world_Tiles_setTmpFloorState_int_long, "(IJ)V", 1 },
	{ "getTmpBlockState", (intptr_t) M_mindustry_world_Tiles_getTmpBlockState_int_R_long, VTABLE_mindustry_world_Tiles_getTmpBlockState_int_R_long, "(I)J", 1 },
	{ "setTmpBlockState", (intptr_t) M_mindustry_world_Tiles_setTmpBlockState_int_long, VTABLE_mindustry_world_Tiles_setTmpBlockState_int_long, "(IJ)V", 1 },
	{ "getPuddle", (intptr_t) M_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle, VTABLE_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle, "(I)Lmindustry/gen/Puddle;", 1 },
	{ "setPuddle", (intptr_t) M_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle, VTABLE_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle, "(ILmindustry/gen/Puddle;)V", 1 },
	{ "getFire", (intptr_t) M_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire, VTABLE_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire, "(I)Lmindustry/gen/Fire;", 1 },
	{ "setFire", (intptr_t) M_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire, VTABLE_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire, "(ILmindustry/gen/Fire;)V", 1 },
	{ "each", (intptr_t) M_mindustry_world_Tiles_each_arc_func_Intc2, VTABLE_mindustry_world_Tiles_each_arc_func_Intc2, "(Larc/func/Intc2;)V", 1 },
	{ "fill", (intptr_t) M_mindustry_world_Tiles_fill, VTABLE_mindustry_world_Tiles_fill, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_world_Tiles_set_int_int_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile, "(IILmindustry/world/Tile;)V", 1 },
	{ "seti", (intptr_t) M_mindustry_world_Tiles_seti_int_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_seti_int_mindustry_world_Tile, "(ILmindustry/world/Tile;)V", 1 },
	{ "in", (intptr_t) M_mindustry_world_Tiles_in_int_int_R_boolean, VTABLE_mindustry_world_Tiles_in_int_int_R_boolean, "(II)Z", 1 },
	{ "get", (intptr_t) M_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "getn", (intptr_t) M_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "getc", (intptr_t) M_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "geti", (intptr_t) M_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "getp", (intptr_t) M_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "eachTile", (intptr_t) M_mindustry_world_Tiles_eachTile_arc_func_Cons, VTABLE_mindustry_world_Tiles_eachTile_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "iterator", (intptr_t) M_mindustry_world_Tiles_iterator_R_java_util_Iterator, VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_mindustry_world_Tiles{
		.nativeName = (intptr_t) "mindustry/world/Tiles",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_Tiles),
		.classVtable = (intptr_t) vtable_mindustry_world_Tiles,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Tiles,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_Tiles,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Tiles = registerClass(&class_mindustry_world_Tiles);

}
