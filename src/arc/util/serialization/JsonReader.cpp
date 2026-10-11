#include "arc/util/serialization/JsonReader.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/charset/Charset.h"
#include "arc/files/Fi.h"
#include "java/io/PrintStream.h"
#include "java/io/InputStream.h"
#include "arc/util/serialization/BaseJsonReader.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/util/serialization/SerializationException.h"
#include "java/io/InputStreamReader.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "arc/util/serialization/JsonValue_ValueType.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "arc/util/serialization/JsonReader.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/lang/Long.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/util/io/Streams.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_util_serialization_JsonReader_json_start;
jint SF_arc_util_serialization_JsonReader_json_first_final;
jint SF_arc_util_serialization_JsonReader_json_error;
jint SF_arc_util_serialization_JsonReader_json_en_object;
jint SF_arc_util_serialization_JsonReader_json_en_array;
jint SF_arc_util_serialization_JsonReader_json_en_main;
jobject SF_arc_util_serialization_JsonReader__json_actions;
jobject SF_arc_util_serialization_JsonReader__json_key_offsets;
jobject SF_arc_util_serialization_JsonReader__json_trans_keys;
jobject SF_arc_util_serialization_JsonReader__json_single_lengths;
jobject SF_arc_util_serialization_JsonReader__json_range_lengths;
jobject SF_arc_util_serialization_JsonReader__json_index_offsets;
jobject SF_arc_util_serialization_JsonReader__json_indicies;
jobject SF_arc_util_serialization_JsonReader__json_trans_targs;
jobject SF_arc_util_serialization_JsonReader__json_trans_actions;
jobject SF_arc_util_serialization_JsonReader__json_eof_actions;

void mark_arc_util_serialization_JsonReader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_JsonReader__json_actions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_actions)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_actions, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_key_offsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_key_offsets)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_key_offsets, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_trans_keys)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_trans_keys)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_trans_keys, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_single_lengths)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_single_lengths)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_single_lengths, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_range_lengths)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_range_lengths)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_range_lengths, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_index_offsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_index_offsets)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_index_offsets, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_indicies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_indicies)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_indicies, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_trans_targs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_trans_targs)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_trans_targs, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_trans_actions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_trans_actions)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_trans_actions, mark, depth + 1);
		if (SF_arc_util_serialization_JsonReader__json_eof_actions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonReader__json_eof_actions)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonReader__json_eof_actions, mark, depth + 1);
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
	auto self = (arc_util_serialization_JsonReader *) object;
	if (self->F_elements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elements)->clazz)->markFunction)((jobject) self->F_elements, mark, depth + 1);
	if (self->F_lastChild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastChild)->clazz)->markFunction)((jobject) self->F_lastChild, mark, depth + 1);
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
}

void init_arc_util_serialization_JsonReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (8));
	((arc_util_serialization_JsonReader *) NULL_CHECK(sp[0].o))->F_elements = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (8));
	((arc_util_serialization_JsonReader *) NULL_CHECK(sp[0].o))->F_lastChild = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_actions_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_actions_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (29));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(5));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_key_offsets_0_R_Array1_short(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_key_offsets_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject) createArray(ctx, &class_short, (39));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(3))) = (13);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(4))) = (14);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(5))) = (16);
	ARRAY_ACCESS(jshort, sp[0].o, (6)) = (25);
	ARRAY_ACCESS(jshort, sp[0].o, (7)) = (31);
	ARRAY_ACCESS(jshort, sp[0].o, (8)) = (37);
	ARRAY_ACCESS(jshort, sp[0].o, (9)) = (39);
	ARRAY_ACCESS(jshort, sp[0].o, (10)) = (50);
	ARRAY_ACCESS(jshort, sp[0].o, (11)) = (57);
	ARRAY_ACCESS(jshort, sp[0].o, (12)) = (64);
	ARRAY_ACCESS(jshort, sp[0].o, (13)) = (73);
	ARRAY_ACCESS(jshort, sp[0].o, (14)) = (74);
	ARRAY_ACCESS(jshort, sp[0].o, (15)) = (83);
	ARRAY_ACCESS(jshort, sp[0].o, (16)) = (85);
	ARRAY_ACCESS(jshort, sp[0].o, (17)) = (87);
	ARRAY_ACCESS(jshort, sp[0].o, (18)) = (96);
	ARRAY_ACCESS(jshort, sp[0].o, (19)) = (98);
	ARRAY_ACCESS(jshort, sp[0].o, (20)) = (100);
	ARRAY_ACCESS(jshort, sp[0].o, (21)) = (101);
	ARRAY_ACCESS(jshort, sp[0].o, (22)) = (103);
	ARRAY_ACCESS(jshort, sp[0].o, (23)) = (105);
	ARRAY_ACCESS(jshort, sp[0].o, (24)) = (116);
	ARRAY_ACCESS(jshort, sp[0].o, (25)) = (123);
	ARRAY_ACCESS(jshort, sp[0].o, (26)) = (130);
	ARRAY_ACCESS(jshort, sp[0].o, (27)) = (141);
	ARRAY_ACCESS(jshort, sp[0].o, (28)) = (142);
	ARRAY_ACCESS(jshort, sp[0].o, (29)) = (153);
	ARRAY_ACCESS(jshort, sp[0].o, (30)) = (155);
	ARRAY_ACCESS(jshort, sp[0].o, (31)) = (157);
	ARRAY_ACCESS(jshort, sp[0].o, (32)) = (168);
	ARRAY_ACCESS(jshort, sp[0].o, (33)) = (170);
	ARRAY_ACCESS(jshort, sp[0].o, (34)) = (172);
	ARRAY_ACCESS(jshort, sp[0].o, (35)) = (174);
	ARRAY_ACCESS(jshort, sp[0].o, (36)) = (179);
	ARRAY_ACCESS(jshort, sp[0].o, (37)) = (184);
	ARRAY_ACCESS(jshort, sp[0].o, (38)) = (184);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_trans_keys_0_R_Array1_char(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_trans_keys_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject) createArray(ctx, &class_char, (185));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (36)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (37)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (38)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (39)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (40)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (41)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (42)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (43)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (44)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (45)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (46)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (47)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (48)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (49)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (50)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (51)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (52)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (53)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (54)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (55)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (56)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (57)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (58)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (59)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (60)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (61)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (62)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (63)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (64)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (65)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (66)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (67)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (68)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (69)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (70)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (71)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (72)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (73)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (74)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (75)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (76)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (77)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (78)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (79)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (80)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (81)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (82)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (83)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (84)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (85)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (86)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (87)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (88)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (89)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (90)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (91)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (92)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (93)) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (94)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (95)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (96)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (97)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (98)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (99)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (100)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (101)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (102)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (103)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (104)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (105)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (106)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (107)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (108)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (109)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (110)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (111)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (112)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (113)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (114)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (115)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (116)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (117)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (118)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (119)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (120)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (121)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (122)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (123)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (124)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (125)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (126)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (127)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (128)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (129)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (130)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (131)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (132)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (133)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (134)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (135)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (136)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (137)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (138)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (139)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (140)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (141)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (142)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (143)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (144)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (145)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (146)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (147)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (148)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (149)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (150)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (151)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (152)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (153)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (154)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (155)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (156)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (157)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (158)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (159)) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (160)) = (44);
	ARRAY_ACCESS(jchar, sp[0].o, (161)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (162)) = (58);
	ARRAY_ACCESS(jchar, sp[0].o, (163)) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (164)) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (165)) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (166)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (167)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (168)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (169)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (170)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (171)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (172)) = (42);
	ARRAY_ACCESS(jchar, sp[0].o, (173)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (174)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (175)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (176)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (177)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (178)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (179)) = (13);
	ARRAY_ACCESS(jchar, sp[0].o, (180)) = (32);
	ARRAY_ACCESS(jchar, sp[0].o, (181)) = (47);
	ARRAY_ACCESS(jchar, sp[0].o, (182)) = (9);
	ARRAY_ACCESS(jchar, sp[0].o, (183)) = (10);
	ARRAY_ACCESS(jchar, sp[0].o, (184)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_single_lengths_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_single_lengths_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (39));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_range_lengths_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_range_lengths_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (39));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_index_offsets_0_R_Array1_short(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_index_offsets_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject) createArray(ctx, &class_short, (39));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jshort, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(3))) = (14);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(4))) = (16);
	ARRAY_ACCESS(jshort, sp[0].o, (jint(5))) = (19);
	ARRAY_ACCESS(jshort, sp[0].o, (6)) = (28);
	ARRAY_ACCESS(jshort, sp[0].o, (7)) = (34);
	ARRAY_ACCESS(jshort, sp[0].o, (8)) = (40);
	ARRAY_ACCESS(jshort, sp[0].o, (9)) = (43);
	ARRAY_ACCESS(jshort, sp[0].o, (10)) = (54);
	ARRAY_ACCESS(jshort, sp[0].o, (11)) = (62);
	ARRAY_ACCESS(jshort, sp[0].o, (12)) = (70);
	ARRAY_ACCESS(jshort, sp[0].o, (13)) = (79);
	ARRAY_ACCESS(jshort, sp[0].o, (14)) = (81);
	ARRAY_ACCESS(jshort, sp[0].o, (15)) = (90);
	ARRAY_ACCESS(jshort, sp[0].o, (16)) = (93);
	ARRAY_ACCESS(jshort, sp[0].o, (17)) = (96);
	ARRAY_ACCESS(jshort, sp[0].o, (18)) = (105);
	ARRAY_ACCESS(jshort, sp[0].o, (19)) = (108);
	ARRAY_ACCESS(jshort, sp[0].o, (20)) = (111);
	ARRAY_ACCESS(jshort, sp[0].o, (21)) = (113);
	ARRAY_ACCESS(jshort, sp[0].o, (22)) = (116);
	ARRAY_ACCESS(jshort, sp[0].o, (23)) = (119);
	ARRAY_ACCESS(jshort, sp[0].o, (24)) = (130);
	ARRAY_ACCESS(jshort, sp[0].o, (25)) = (138);
	ARRAY_ACCESS(jshort, sp[0].o, (26)) = (146);
	ARRAY_ACCESS(jshort, sp[0].o, (27)) = (157);
	ARRAY_ACCESS(jshort, sp[0].o, (28)) = (159);
	ARRAY_ACCESS(jshort, sp[0].o, (29)) = (170);
	ARRAY_ACCESS(jshort, sp[0].o, (30)) = (173);
	ARRAY_ACCESS(jshort, sp[0].o, (31)) = (176);
	ARRAY_ACCESS(jshort, sp[0].o, (32)) = (187);
	ARRAY_ACCESS(jshort, sp[0].o, (33)) = (190);
	ARRAY_ACCESS(jshort, sp[0].o, (34)) = (193);
	ARRAY_ACCESS(jshort, sp[0].o, (35)) = (196);
	ARRAY_ACCESS(jshort, sp[0].o, (36)) = (201);
	ARRAY_ACCESS(jshort, sp[0].o, (37)) = (206);
	ARRAY_ACCESS(jshort, sp[0].o, (38)) = (207);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_indicies_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_indicies_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (209));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (18);
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (39)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (40)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (41)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (42)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (43)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (44)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (45)) = (24);
	ARRAY_ACCESS(jbyte, sp[0].o, (46)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (47)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (48)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (49)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (50)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (51)) = (27);
	ARRAY_ACCESS(jbyte, sp[0].o, (52)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (53)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (54)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (55)) = (29);
	ARRAY_ACCESS(jbyte, sp[0].o, (56)) = (29);
	ARRAY_ACCESS(jbyte, sp[0].o, (57)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (58)) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (59)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (60)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (61)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (62)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (63)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (64)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (65)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (66)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (67)) = (35);
	ARRAY_ACCESS(jbyte, sp[0].o, (68)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (69)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (70)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (71)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (72)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (73)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (74)) = (37);
	ARRAY_ACCESS(jbyte, sp[0].o, (75)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (76)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (77)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (78)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (79)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (80)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (81)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (82)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (83)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (84)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (85)) = (38);
	ARRAY_ACCESS(jbyte, sp[0].o, (86)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (87)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (88)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (89)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (90)) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (91)) = (39);
	ARRAY_ACCESS(jbyte, sp[0].o, (92)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (93)) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (94)) = (40);
	ARRAY_ACCESS(jbyte, sp[0].o, (95)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (96)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (97)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (98)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (99)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (100)) = (41);
	ARRAY_ACCESS(jbyte, sp[0].o, (101)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (102)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (103)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (104)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (105)) = (42);
	ARRAY_ACCESS(jbyte, sp[0].o, (106)) = (42);
	ARRAY_ACCESS(jbyte, sp[0].o, (107)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (108)) = (43);
	ARRAY_ACCESS(jbyte, sp[0].o, (109)) = (43);
	ARRAY_ACCESS(jbyte, sp[0].o, (110)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (111)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (112)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (113)) = (44);
	ARRAY_ACCESS(jbyte, sp[0].o, (114)) = (44);
	ARRAY_ACCESS(jbyte, sp[0].o, (115)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (116)) = (45);
	ARRAY_ACCESS(jbyte, sp[0].o, (117)) = (45);
	ARRAY_ACCESS(jbyte, sp[0].o, (118)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (119)) = (47);
	ARRAY_ACCESS(jbyte, sp[0].o, (120)) = (47);
	ARRAY_ACCESS(jbyte, sp[0].o, (121)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (122)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (123)) = (50);
	ARRAY_ACCESS(jbyte, sp[0].o, (124)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (125)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (126)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (127)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (128)) = (47);
	ARRAY_ACCESS(jbyte, sp[0].o, (129)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (130)) = (54);
	ARRAY_ACCESS(jbyte, sp[0].o, (131)) = (55);
	ARRAY_ACCESS(jbyte, sp[0].o, (132)) = (55);
	ARRAY_ACCESS(jbyte, sp[0].o, (133)) = (54);
	ARRAY_ACCESS(jbyte, sp[0].o, (134)) = (56);
	ARRAY_ACCESS(jbyte, sp[0].o, (135)) = (57);
	ARRAY_ACCESS(jbyte, sp[0].o, (136)) = (58);
	ARRAY_ACCESS(jbyte, sp[0].o, (137)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (138)) = (59);
	ARRAY_ACCESS(jbyte, sp[0].o, (139)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (140)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (141)) = (59);
	ARRAY_ACCESS(jbyte, sp[0].o, (142)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (143)) = (61);
	ARRAY_ACCESS(jbyte, sp[0].o, (144)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (145)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (146)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (147)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (148)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (149)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (150)) = (63);
	ARRAY_ACCESS(jbyte, sp[0].o, (151)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (152)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (153)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (154)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (155)) = (60);
	ARRAY_ACCESS(jbyte, sp[0].o, (156)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (157)) = (54);
	ARRAY_ACCESS(jbyte, sp[0].o, (158)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (159)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (160)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (161)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (162)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (163)) = (64);
	ARRAY_ACCESS(jbyte, sp[0].o, (164)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (165)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (166)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (167)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (168)) = (62);
	ARRAY_ACCESS(jbyte, sp[0].o, (169)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (170)) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (171)) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (172)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (173)) = (66);
	ARRAY_ACCESS(jbyte, sp[0].o, (174)) = (66);
	ARRAY_ACCESS(jbyte, sp[0].o, (175)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (176)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (177)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (178)) = (48);
	ARRAY_ACCESS(jbyte, sp[0].o, (179)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (180)) = (67);
	ARRAY_ACCESS(jbyte, sp[0].o, (181)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (182)) = (51);
	ARRAY_ACCESS(jbyte, sp[0].o, (183)) = (52);
	ARRAY_ACCESS(jbyte, sp[0].o, (184)) = (53);
	ARRAY_ACCESS(jbyte, sp[0].o, (185)) = (49);
	ARRAY_ACCESS(jbyte, sp[0].o, (186)) = (46);
	ARRAY_ACCESS(jbyte, sp[0].o, (187)) = (68);
	ARRAY_ACCESS(jbyte, sp[0].o, (188)) = (68);
	ARRAY_ACCESS(jbyte, sp[0].o, (189)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (190)) = (69);
	ARRAY_ACCESS(jbyte, sp[0].o, (191)) = (69);
	ARRAY_ACCESS(jbyte, sp[0].o, (192)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (193)) = (70);
	ARRAY_ACCESS(jbyte, sp[0].o, (194)) = (70);
	ARRAY_ACCESS(jbyte, sp[0].o, (195)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (196)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (197)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (198)) = (71);
	ARRAY_ACCESS(jbyte, sp[0].o, (199)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (200)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (201)) = (72);
	ARRAY_ACCESS(jbyte, sp[0].o, (202)) = (72);
	ARRAY_ACCESS(jbyte, sp[0].o, (203)) = (73);
	ARRAY_ACCESS(jbyte, sp[0].o, (204)) = (72);
	ARRAY_ACCESS(jbyte, sp[0].o, (205)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (206)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (207)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (208)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_trans_targs_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_trans_targs_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (74));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (35);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (6);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (22);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (37);
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (8);
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (21);
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (37);
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (19);
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (16);
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (39)) = (14);
	ARRAY_ACCESS(jbyte, sp[0].o, (40)) = (12);
	ARRAY_ACCESS(jbyte, sp[0].o, (41)) = (18);
	ARRAY_ACCESS(jbyte, sp[0].o, (42)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (43)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (44)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (45)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (46)) = (24);
	ARRAY_ACCESS(jbyte, sp[0].o, (47)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (48)) = (27);
	ARRAY_ACCESS(jbyte, sp[0].o, (49)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (50)) = (34);
	ARRAY_ACCESS(jbyte, sp[0].o, (51)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (52)) = (38);
	ARRAY_ACCESS(jbyte, sp[0].o, (53)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (54)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (55)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (56)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (57)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (58)) = (38);
	ARRAY_ACCESS(jbyte, sp[0].o, (59)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (60)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (61)) = (33);
	ARRAY_ACCESS(jbyte, sp[0].o, (62)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (63)) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (64)) = (29);
	ARRAY_ACCESS(jbyte, sp[0].o, (65)) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (66)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (67)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (68)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (69)) = (25);
	ARRAY_ACCESS(jbyte, sp[0].o, (70)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (71)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (72)) = (36);
	ARRAY_ACCESS(jbyte, sp[0].o, (73)) = (jint(2));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_trans_actions_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_trans_actions_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (74));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (17);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (20);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (23);
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (39)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (40)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (41)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (42)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (43)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (44)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (45)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (46)) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (47)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (48)) = (15);
	ARRAY_ACCESS(jbyte, sp[0].o, (49)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (50)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (51)) = (7);
	ARRAY_ACCESS(jbyte, sp[0].o, (52)) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (53)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[0].o, (54)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (55)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (56)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (57)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (58)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (59)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (60)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (61)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (62)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (63)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (64)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (65)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (66)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (67)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (68)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (69)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (70)) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (71)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (72)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (73)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonReader_init__json_eof_actions_0_R_Array1_byte(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:init__json_eof_actions_0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (39));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (25)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (26)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (27)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (28)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (29)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (30)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (31)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (32)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (33)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (34)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (35)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (36)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (37)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (38)) = (jint(0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:parse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject) createArray(ctx, &class_char, (1024));
	frame[2].o = sp[0].o;
	LINE_NUMBER(115);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[1].o), (frame[2].o), (frame[3].i), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)));
	frame[4].i = temp0;
	LINE_NUMBER(118);
	if ((frame[4].i) != (jint(-1))) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(119);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, (frame[2].o)))->length) * (jint(2))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(121);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[5].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(122);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(123);
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(124);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	}
label_18:;
	LINE_NUMBER(125);
	goto label_9;
label_12:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (frame[3].i));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(130);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(130);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(131);
	throwException(ctx, (frame[6].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:parse", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = frame[1].o;
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(140);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(140);
	frame[3].o = sp[0].o;
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(141);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_reader_java_lang_String_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_reader_java_lang_String_R_java_io_Reader])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(147);
	frame[2].o = sp[0].o;
	LINE_NUMBER(148);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[38];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:parse", 38 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(153);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(154);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(156);
	frame[8].i = (jint(0));
	LINE_NUMBER(157);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (8));
	frame[9].o = sp[0].o;
	LINE_NUMBER(158);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	frame[12].i = (jint(0));
	LINE_NUMBER(159);
	frame[13].o = (jobject(nullptr));
	LINE_NUMBER(161);
	frame[14].i = (jint(0));
	LINE_NUMBER(162);
	if ((frame[14].i) == 0) goto label_16;
	}
	clinit_java_lang_System(ctx);
	(sp++)->o = SF_java_lang_System_out;
	POP_N(1); // Pop method args
	((func_java_io_PrintStream_println) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println])(ctx, sp[0].o);
label_16:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(168);
	frame[4].i = (jint(1));
	LINE_NUMBER(169);
	frame[6].i = (jint(0));
	LINE_NUMBER(179);
	frame[20].i = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(183);
	switch((frame[20].i)) {
		case 0: goto label_33;
		case 1: goto label_34;
		case 2: goto label_35;
		case 3: goto label_36;
		case 4: goto label_37;
		case 5: goto label_36;
		default: goto label_36;
	}
	}
label_33:;
	{
	LINE_NUMBER(185);
	if ((frame[5].i) != (frame[3].i)) goto label_38;
	}
	{
	LINE_NUMBER(186);
	frame[20].i = (jint(4));
	LINE_NUMBER(187);
	goto label_32;
	}
label_38:;
	{
	LINE_NUMBER(189);
	if ((frame[4].i) != 0) goto label_34;
	}
	{
	LINE_NUMBER(190);
	frame[20].i = (jint(5));
	LINE_NUMBER(191);
	goto label_32;
	}
label_34:;
	{
	LINE_NUMBER(196);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_key_offsets;
	frame[19].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[4].i)));
	LINE_NUMBER(197);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_index_offsets;
	frame[16].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[4].i)));
	LINE_NUMBER(198);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_single_lengths;
	frame[15].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)));
	LINE_NUMBER(199);
	if ((frame[15].i) <= 0) goto label_46;
	}
	{
	LINE_NUMBER(200);
	frame[21].i = (frame[19].i);
	LINE_NUMBER(202);
	frame[23].i = (((frame[19].i) + (frame[15].i)) - (jint(1)));
	}
label_49:;
	{
	LINE_NUMBER(204);
	if ((frame[23].i) >= (frame[21].i)) goto label_50;
	}
	goto label_51;
label_50:;
	{
	LINE_NUMBER(206);
	frame[22].i = ((frame[21].i) + (((frame[23].i) - (frame[21].i)) >> (jint(1))));
	LINE_NUMBER(207);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_keys;
	if (temp0 >= ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[22].i)))) goto label_53;
	}
	{
	LINE_NUMBER(208);
	frame[23].i = ((frame[22].i) - (jint(1)));
	goto label_49;
	}
label_53:;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_keys;
	if (temp0 <= ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[22].i)))) goto label_55;
	}
	{
	LINE_NUMBER(210);
	frame[21].i = ((frame[22].i) + (jint(1)));
	goto label_49;
	}
label_55:;
	{
	LINE_NUMBER(212);
	frame[16].i = ((frame[16].i) + ((frame[22].i) - (frame[19].i)));
	LINE_NUMBER(213);
	goto label_58;
	}
label_51:;
	{
	LINE_NUMBER(216);
	frame[19].i = ((frame[19].i) + (frame[15].i));
	LINE_NUMBER(217);
	frame[16].i = ((frame[16].i) + (frame[15].i));
	}
label_46:;
	{
	LINE_NUMBER(220);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_range_lengths;
	frame[15].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)));
	LINE_NUMBER(221);
	if ((frame[15].i) <= 0) goto label_58;
	}
	{
	LINE_NUMBER(222);
	frame[21].i = (frame[19].i);
	LINE_NUMBER(224);
	frame[23].i = (((frame[19].i) + ((frame[15].i) << (jint(1)))) - (jint(2)));
	}
label_63:;
	{
	LINE_NUMBER(226);
	if ((frame[23].i) >= (frame[21].i)) goto label_64;
	}
	goto label_65;
label_64:;
	{
	LINE_NUMBER(228);
	frame[22].i = ((frame[21].i) + ((((frame[23].i) - (frame[21].i)) >> (jint(1))) & (-2)));
	LINE_NUMBER(229);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_keys;
	if (temp0 >= ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[22].i)))) goto label_67;
	}
	{
	LINE_NUMBER(230);
	frame[23].i = ((frame[22].i) - (jint(2)));
	goto label_63;
	}
label_67:;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i));
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_keys;
	if (temp0 <= ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[22].i) + (jint(1)))))) goto label_69;
	}
	{
	LINE_NUMBER(232);
	frame[21].i = ((frame[22].i) + (jint(2)));
	goto label_63;
	}
label_69:;
	{
	LINE_NUMBER(234);
	frame[16].i = ((frame[16].i) + (((frame[22].i) - (frame[19].i)) >> (jint(1))));
	LINE_NUMBER(235);
	goto label_58;
	}
label_65:;
	{
	LINE_NUMBER(238);
	frame[16].i = ((frame[16].i) + (frame[15].i));
	}
label_58:;
	{
	LINE_NUMBER(242);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_indicies;
	frame[16].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[16].i)));
	LINE_NUMBER(243);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_targs;
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[16].i)));
	LINE_NUMBER(245);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_actions;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[16].i))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(246);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_trans_actions;
	frame[17].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[16].i)));
	LINE_NUMBER(247);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_actions;
	jint temp0 = frame[17].i;
	INST_IINC(17, 1);
	frame[18].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}
label_76:;
	{
	LINE_NUMBER(248);
	jint temp0 = frame[18].i;
	INST_IINC(18, -1);
	if (temp0 <= 0) goto label_35;
	}
	{
	LINE_NUMBER(249);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_actions;
	jint temp0 = frame[17].i;
	INST_IINC(17, 1);
	switch(((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0))) {
		case 0: goto label_78;
		case 1: goto label_79;
		case 2: goto label_80;
		case 3: goto label_81;
		case 4: goto label_82;
		case 5: goto label_83;
		case 6: goto label_84;
		case 7: goto label_85;
		case 8: goto label_86;
		default: goto label_87;
	}
	}
label_78:;
	{
	LINE_NUMBER(253);
	frame[11].i = (jint(1));
	LINE_NUMBER(255);
	goto label_87;
	}
label_79:;
	{
	LINE_NUMBER(259);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[1].o), (frame[8].i), ((frame[5].i) - (frame[8].i)));
	frame[21].o = sp[0].o;
	LINE_NUMBER(260);
	if ((frame[10].i) == 0) goto label_90;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_JsonReader_unescape_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[21].o));
	frame[21].o = sp[0].o;
	}
label_90:;
	{
	LINE_NUMBER(262);
	if ((frame[11].i) == 0) goto label_91;
	}
	{
	LINE_NUMBER(263);
	frame[11].i = (jint(0));
	LINE_NUMBER(264);
	if ((frame[14].i) == 0) goto label_94;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[21].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_94:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[9].o), (frame[21].o));
	goto label_95;
	}
label_91:;
	{
	LINE_NUMBER(267);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size) <= 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[9].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_97;
	}
label_96:;
	INST_ACONST_NULL();
label_97:;
	{
	sp -= 1;
	frame[22].o = sp[0].o;
	LINE_NUMBER(268);
	if ((frame[12].i) == 0) goto label_99;
	}
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[21].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_101;
	}
	{
	LINE_NUMBER(270);
	if ((frame[14].i) == 0) goto label_103;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[22].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=true"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_103:;
	{
	LINE_NUMBER(271);
	((func_arc_util_serialization_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[22].o), (jint(1)));
	LINE_NUMBER(272);
	goto label_95;
	}
label_101:;
	{
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[21].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_105;
	}
	{
	LINE_NUMBER(274);
	if ((frame[14].i) == 0) goto label_107;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[22].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=false"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_107:;
	{
	LINE_NUMBER(275);
	((func_arc_util_serialization_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[22].o), (jint(0)));
	LINE_NUMBER(276);
	goto label_95;
	}
label_105:;
	{
	LINE_NUMBER(277);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[21].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 == 0) goto label_109;
	}
	{
	LINE_NUMBER(278);
	((func_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[22].o), (jobject(nullptr)));
	LINE_NUMBER(279);
	goto label_95;
	}
label_109:;
	{
	LINE_NUMBER(281);
	frame[23].i = (jint(0));
	frame[24].i = (jint(1));
	LINE_NUMBER(283);
	frame[25].i = (frame[8].i);
	}
label_114:;
	{
	if ((frame[25].i) >= (frame[5].i)) goto label_115;
	}
	{
	LINE_NUMBER(284);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[25].i)))) {
		case 43: goto label_117;
		case 44: goto label_118;
		case 45: goto label_117;
		case 46: goto label_119;
		case 47: goto label_118;
		case 48: goto label_117;
		case 49: goto label_117;
		case 50: goto label_117;
		case 51: goto label_117;
		case 52: goto label_117;
		case 53: goto label_117;
		case 54: goto label_117;
		case 55: goto label_117;
		case 56: goto label_117;
		case 57: goto label_117;
		case 58: goto label_118;
		case 59: goto label_118;
		case 60: goto label_118;
		case 61: goto label_118;
		case 62: goto label_118;
		case 63: goto label_118;
		case 64: goto label_118;
		case 65: goto label_118;
		case 66: goto label_118;
		case 67: goto label_118;
		case 68: goto label_118;
		case 69: goto label_119;
		case 70: goto label_118;
		case 71: goto label_118;
		case 72: goto label_118;
		case 73: goto label_118;
		case 74: goto label_118;
		case 75: goto label_118;
		case 76: goto label_118;
		case 77: goto label_118;
		case 78: goto label_118;
		case 79: goto label_118;
		case 80: goto label_118;
		case 81: goto label_118;
		case 82: goto label_118;
		case 83: goto label_118;
		case 84: goto label_118;
		case 85: goto label_118;
		case 86: goto label_118;
		case 87: goto label_118;
		case 88: goto label_118;
		case 89: goto label_118;
		case 90: goto label_118;
		case 91: goto label_118;
		case 92: goto label_118;
		case 93: goto label_118;
		case 94: goto label_118;
		case 95: goto label_118;
		case 96: goto label_118;
		case 97: goto label_118;
		case 98: goto label_118;
		case 99: goto label_118;
		case 100: goto label_118;
		case 101: goto label_119;
		default: goto label_118;
	}
	}
label_117:;
	LINE_NUMBER(297);
	goto label_120;
label_119:;
	{
	LINE_NUMBER(301);
	frame[23].i = (jint(1));
	LINE_NUMBER(302);
	frame[24].i = (jint(0));
	LINE_NUMBER(303);
	goto label_120;
	}
label_118:;
	{
	LINE_NUMBER(305);
	frame[23].i = (jint(0));
	LINE_NUMBER(306);
	frame[24].i = (jint(0));
	LINE_NUMBER(307);
	goto label_115;
	}
label_120:;
	{
	LINE_NUMBER(283);
	INST_IINC(25, 1);
	goto label_114;
	}
label_115:;
	{
	LINE_NUMBER(310);
	if ((frame[23].i) == 0) goto label_125;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(312);
	if ((frame[14].i) == 0) goto label_126;
	}
	{
	LINE_NUMBER(313);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[22].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[21].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_126:;
	{
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = frame[22].o;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[21].o));
	((func_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[21].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(315);
	goto label_95;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(316);
	frame[25].o = sp[0].o;
	LINE_NUMBER(317);
	goto label_99;
	}
label_125:;
	{
	LINE_NUMBER(318);
	if ((frame[24].i) == 0) goto label_99;
	}
	{
	LINE_NUMBER(319);
	if ((frame[14].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(320);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[22].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[21].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	sp[1].o = frame[22].o;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[21].o));
	((func_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[21].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(323);
	goto label_95;
label_6:;
	LINE_NUMBER(324);
	INST_ASTORE(25);
label_99:;
	{
	LINE_NUMBER(328);
	if ((frame[14].i) == 0) goto label_131;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"string: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[22].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[21].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_131:;
	{
	LINE_NUMBER(329);
	((func_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[22].o), (frame[21].o));
	}
label_95:;
	{
	LINE_NUMBER(331);
	frame[12].i = (jint(0));
	LINE_NUMBER(332);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(334);
	goto label_87;
	}
label_80:;
	{
	LINE_NUMBER(338);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size) <= 0) goto label_134;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[9].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_135;
	}
label_134:;
	INST_ACONST_NULL();
label_135:;
	{
	sp -= 1;
	frame[21].o = sp[0].o;
	LINE_NUMBER(339);
	if ((frame[14].i) == 0) goto label_137;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"startObject: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[21].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_137:;
	{
	LINE_NUMBER(340);
	((func_arc_util_serialization_JsonReader_startObject_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_startObject_java_lang_String])(ctx, (frame[0].o), (frame[21].o));
	LINE_NUMBER(342);
	if ((frame[6].i) != (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_139;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[7].o)))->length) * (jint(2))));
	frame[22].o = sp[0].o;
	LINE_NUMBER(344);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[7].o), (jint(0)), (frame[22].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[7].o)))->length));
	LINE_NUMBER(345);
	frame[7].o = (frame[22].o);
	}
label_139:;
	{
	LINE_NUMBER(348);
	sp[0].o = frame[7].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(349);
	frame[4].i = (jint(5));
	LINE_NUMBER(350);
	frame[20].i = (jint(2));
	LINE_NUMBER(351);
	goto label_32;
	}
label_81:;
	{
	LINE_NUMBER(359);
	if ((frame[14].i) == 0) goto label_146;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endObject"_j))));
	}
label_146:;
	{
	LINE_NUMBER(360);
	((func_arc_util_serialization_JsonReader_pop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_pop])(ctx, (frame[0].o));
	LINE_NUMBER(362);
	sp[0].o = frame[7].o;
	INST_IINC(6, -1);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)));
	LINE_NUMBER(363);
	frame[20].i = (jint(2));
	LINE_NUMBER(364);
	goto label_32;
	}
label_82:;
	{
	LINE_NUMBER(371);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size) <= 0) goto label_150;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[9].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_151;
	}
label_150:;
	INST_ACONST_NULL();
label_151:;
	{
	sp -= 1;
	frame[21].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[14].i) == 0) goto label_153;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"startArray: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[21].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_153:;
	{
	LINE_NUMBER(373);
	((func_arc_util_serialization_JsonReader_startArray_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_startArray_java_lang_String])(ctx, (frame[0].o), (frame[21].o));
	LINE_NUMBER(375);
	if ((frame[6].i) != (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_155;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[7].o)))->length) * (jint(2))));
	frame[22].o = sp[0].o;
	LINE_NUMBER(377);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[7].o), (jint(0)), (frame[22].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[7].o)))->length));
	LINE_NUMBER(378);
	frame[7].o = (frame[22].o);
	}
label_155:;
	{
	LINE_NUMBER(381);
	sp[0].o = frame[7].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(382);
	frame[4].i = (23);
	LINE_NUMBER(383);
	frame[20].i = (jint(2));
	LINE_NUMBER(384);
	goto label_32;
	}
label_83:;
	{
	LINE_NUMBER(392);
	if ((frame[14].i) == 0) goto label_162;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"endArray"_j))));
	}
label_162:;
	{
	LINE_NUMBER(393);
	((func_arc_util_serialization_JsonReader_pop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_pop])(ctx, (frame[0].o));
	LINE_NUMBER(395);
	sp[0].o = frame[7].o;
	INST_IINC(6, -1);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)));
	LINE_NUMBER(396);
	frame[20].i = (jint(2));
	LINE_NUMBER(397);
	goto label_32;
	}
label_84:;
	{
	LINE_NUMBER(404);
	frame[21].i = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(405);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) != (47)) goto label_167;
	}
label_168:;
	{
	LINE_NUMBER(406);
	if ((frame[5].i) == (frame[3].i)) goto label_169;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))) == (10)) goto label_169;
	}
	{
	LINE_NUMBER(407);
	INST_IINC(5, 1);
	goto label_168;
	}
label_169:;
	{
	LINE_NUMBER(408);
	INST_IINC(5, -1);
	goto label_171;
	}
label_167:;
	{
	LINE_NUMBER(410);
	if (((frame[5].i) + (jint(1))) >= (frame[3].i)) goto label_172;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))) != (42)) goto label_173;
	}
label_172:;
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((frame[5].i) + (jint(1))))) == (47)) goto label_174;
	}
label_173:;
	{
	LINE_NUMBER(411);
	INST_IINC(5, 1);
	goto label_167;
	}
label_174:;
	LINE_NUMBER(412);
	INST_IINC(5, 1);
label_171:;
	{
	LINE_NUMBER(414);
	if ((frame[14].i) == 0) goto label_175;
	}
	{
	LINE_NUMBER(415);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"comment "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[1].o), (frame[21].i), ((frame[5].i) - (frame[21].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_175:;
	LINE_NUMBER(417);
	goto label_87;
label_85:;
	{
	LINE_NUMBER(421);
	if ((frame[14].i) == 0) goto label_177;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unquotedChars"_j))));
	}
label_177:;
	{
	LINE_NUMBER(422);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(423);
	frame[10].i = (jint(0));
	LINE_NUMBER(424);
	frame[12].i = (jint(1));
	LINE_NUMBER(425);
	if ((frame[11].i) == 0) goto label_181;
	}
label_182:;
	{
	LINE_NUMBER(428);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)))) {
		case 10: goto label_183;
		case 13: goto label_183;
		case 47: goto label_184;
		case 58: goto label_183;
		case 92: goto label_185;
		default: goto label_186;
	}
	}
label_185:;
	{
	LINE_NUMBER(430);
	frame[10].i = (jint(1));
	LINE_NUMBER(431);
	goto label_186;
	}
label_184:;
	{
	LINE_NUMBER(433);
	if (((frame[5].i) + (jint(1))) != (frame[3].i)) goto label_188;
	}
	goto label_186;
label_188:;
	{
	LINE_NUMBER(434);
	frame[21].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((frame[5].i) + (jint(1)))));
	LINE_NUMBER(435);
	if ((frame[21].i) == (47)) goto label_190;
	}
	{
	if ((frame[21].i) != (42)) goto label_186;
	}
	goto label_190;
label_183:;
	LINE_NUMBER(440);
	goto label_190;
label_186:;
	{
	LINE_NUMBER(442);
	if ((frame[14].i) == 0) goto label_191;
	}
	{
	LINE_NUMBER(443);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unquotedChar (name): '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_191:;
	{
	LINE_NUMBER(444);
	INST_IINC(5, 1);
	LINE_NUMBER(445);
	if ((frame[5].i) != (frame[3].i)) goto label_182;
	}
	goto label_190;
label_181:;
	{
	LINE_NUMBER(450);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)))) {
		case 10: goto label_194;
		case 13: goto label_194;
		case 44: goto label_194;
		case 47: goto label_195;
		case 92: goto label_196;
		case 93: goto label_194;
		case 125: goto label_194;
		default: goto label_197;
	}
	}
label_196:;
	{
	LINE_NUMBER(452);
	frame[10].i = (jint(1));
	LINE_NUMBER(453);
	goto label_197;
	}
label_195:;
	{
	LINE_NUMBER(455);
	if (((frame[5].i) + (jint(1))) != (frame[3].i)) goto label_199;
	}
	goto label_197;
label_199:;
	{
	LINE_NUMBER(456);
	frame[21].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((frame[5].i) + (jint(1)))));
	LINE_NUMBER(457);
	if ((frame[21].i) == (47)) goto label_190;
	}
	{
	if ((frame[21].i) != (42)) goto label_197;
	}
	goto label_190;
label_194:;
	LINE_NUMBER(464);
	goto label_190;
label_197:;
	{
	LINE_NUMBER(466);
	if ((frame[14].i) == 0) goto label_201;
	}
	{
	LINE_NUMBER(467);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unquotedChar (value): '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_201:;
	{
	LINE_NUMBER(468);
	INST_IINC(5, 1);
	LINE_NUMBER(469);
	if ((frame[5].i) != (frame[3].i)) goto label_181;
	}
	goto label_190;
label_190:;
	LINE_NUMBER(472);
	INST_IINC(5, -1);
label_204:;
	{
	LINE_NUMBER(473);
	jint temp0 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	if (temp0 == 0) goto label_87;
	}
	{
	LINE_NUMBER(474);
	INST_IINC(5, -1);
	goto label_204;
	}
label_86:;
	{
	LINE_NUMBER(480);
	if ((frame[14].i) == 0) goto label_206;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"quotedChars"_j))));
	}
label_206:;
	{
	LINE_NUMBER(481);
	INST_IINC(5, 1);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(482);
	frame[10].i = (jint(0));
	}
label_208:;
	{
	LINE_NUMBER(485);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)))) {
		case 34: goto label_209;
		case 92: goto label_210;
		default: goto label_211;
	}
	}
label_210:;
	{
	LINE_NUMBER(487);
	frame[10].i = (jint(1));
	LINE_NUMBER(488);
	INST_IINC(5, 1);
	LINE_NUMBER(489);
	goto label_211;
	}
label_209:;
	LINE_NUMBER(491);
	goto label_214;
label_211:;
	{
	LINE_NUMBER(494);
	INST_IINC(5, 1);
	LINE_NUMBER(495);
	if ((frame[5].i) != (frame[3].i)) goto label_208;
	}
	goto label_214;
label_214:;
	LINE_NUMBER(497);
	INST_IINC(5, -1);
label_87:;
	LINE_NUMBER(499);
	goto label_76;
label_35:;
	{
	LINE_NUMBER(506);
	if ((frame[4].i) != 0) goto label_216;
	}
	{
	LINE_NUMBER(507);
	frame[20].i = (jint(5));
	LINE_NUMBER(508);
	goto label_32;
	}
label_216:;
	{
	LINE_NUMBER(510);
	INST_IINC(5, 1);
	if ((frame[5].i) == (frame[3].i)) goto label_37;
	}
	{
	LINE_NUMBER(511);
	frame[20].i = (jint(1));
	LINE_NUMBER(512);
	goto label_32;
	}
label_37:;
	{
	LINE_NUMBER(515);
	if ((frame[5].i) != (frame[3].i)) goto label_36;
	}
	{
	LINE_NUMBER(516);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_eof_actions;
	frame[21].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i)));
	LINE_NUMBER(517);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_actions;
	jint temp0 = frame[21].i;
	INST_IINC(21, 1);
	frame[22].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}
label_223:;
	{
	LINE_NUMBER(518);
	jint temp0 = frame[22].i;
	INST_IINC(22, -1);
	if (temp0 <= 0) goto label_36;
	}
	{
	LINE_NUMBER(519);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonReader__json_actions;
	jint temp0 = frame[21].i;
	INST_IINC(21, 1);
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) != (jint(1))) goto label_223;
	}
	{
	LINE_NUMBER(520);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[1].o), (frame[8].i), ((frame[5].i) - (frame[8].i)));
	frame[23].o = sp[0].o;
	LINE_NUMBER(521);
	if ((frame[10].i) == 0) goto label_227;
	}
	{
	sp[0].o = (jobject)M_arc_util_serialization_JsonReader_unescape_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[23].o));
	frame[23].o = sp[0].o;
	}
label_227:;
	{
	LINE_NUMBER(523);
	if ((frame[11].i) == 0) goto label_228;
	}
	{
	LINE_NUMBER(524);
	frame[11].i = (jint(0));
	LINE_NUMBER(525);
	if ((frame[14].i) == 0) goto label_231;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_231:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[9].o), (frame[23].o));
	goto label_232;
	}
label_228:;
	{
	LINE_NUMBER(528);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size) <= 0) goto label_233;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, (frame[9].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_234;
	}
label_233:;
	INST_ACONST_NULL();
label_234:;
	{
	sp -= 1;
	frame[24].o = sp[0].o;
	LINE_NUMBER(529);
	if ((frame[12].i) == 0) goto label_236;
	}
	{
	LINE_NUMBER(530);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[23].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_238;
	}
	{
	LINE_NUMBER(531);
	if ((frame[14].i) == 0) goto label_240;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=true"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_240:;
	{
	LINE_NUMBER(532);
	((func_arc_util_serialization_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[24].o), (jint(1)));
	LINE_NUMBER(533);
	goto label_232;
	}
label_238:;
	{
	LINE_NUMBER(534);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[23].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_242;
	}
	{
	LINE_NUMBER(535);
	if ((frame[14].i) == 0) goto label_244;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"boolean: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=false"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_244:;
	{
	LINE_NUMBER(536);
	((func_arc_util_serialization_JsonReader_bool_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_bool_java_lang_String_boolean])(ctx, (frame[0].o), (frame[24].o), (jint(0)));
	LINE_NUMBER(537);
	goto label_232;
	}
label_242:;
	{
	LINE_NUMBER(538);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[23].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 == 0) goto label_246;
	}
	{
	LINE_NUMBER(539);
	((func_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[24].o), (jobject(nullptr)));
	LINE_NUMBER(540);
	goto label_232;
	}
label_246:;
	{
	LINE_NUMBER(542);
	frame[25].i = (jint(0));
	frame[26].i = (jint(1));
	LINE_NUMBER(544);
	frame[27].i = (frame[8].i);
	}
label_251:;
	{
	if ((frame[27].i) >= (frame[5].i)) goto label_252;
	}
	{
	LINE_NUMBER(545);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[27].i)))) {
		case 43: goto label_254;
		case 44: goto label_255;
		case 45: goto label_254;
		case 46: goto label_256;
		case 47: goto label_255;
		case 48: goto label_254;
		case 49: goto label_254;
		case 50: goto label_254;
		case 51: goto label_254;
		case 52: goto label_254;
		case 53: goto label_254;
		case 54: goto label_254;
		case 55: goto label_254;
		case 56: goto label_254;
		case 57: goto label_254;
		case 58: goto label_255;
		case 59: goto label_255;
		case 60: goto label_255;
		case 61: goto label_255;
		case 62: goto label_255;
		case 63: goto label_255;
		case 64: goto label_255;
		case 65: goto label_255;
		case 66: goto label_255;
		case 67: goto label_255;
		case 68: goto label_255;
		case 69: goto label_256;
		case 70: goto label_255;
		case 71: goto label_255;
		case 72: goto label_255;
		case 73: goto label_255;
		case 74: goto label_255;
		case 75: goto label_255;
		case 76: goto label_255;
		case 77: goto label_255;
		case 78: goto label_255;
		case 79: goto label_255;
		case 80: goto label_255;
		case 81: goto label_255;
		case 82: goto label_255;
		case 83: goto label_255;
		case 84: goto label_255;
		case 85: goto label_255;
		case 86: goto label_255;
		case 87: goto label_255;
		case 88: goto label_255;
		case 89: goto label_255;
		case 90: goto label_255;
		case 91: goto label_255;
		case 92: goto label_255;
		case 93: goto label_255;
		case 94: goto label_255;
		case 95: goto label_255;
		case 96: goto label_255;
		case 97: goto label_255;
		case 98: goto label_255;
		case 99: goto label_255;
		case 100: goto label_255;
		case 101: goto label_256;
		default: goto label_255;
	}
	}
label_254:;
	LINE_NUMBER(558);
	goto label_257;
label_256:;
	{
	LINE_NUMBER(562);
	frame[25].i = (jint(1));
	LINE_NUMBER(563);
	frame[26].i = (jint(0));
	LINE_NUMBER(564);
	goto label_257;
	}
label_255:;
	{
	LINE_NUMBER(566);
	frame[25].i = (jint(0));
	LINE_NUMBER(567);
	frame[26].i = (jint(0));
	LINE_NUMBER(568);
	goto label_252;
	}
label_257:;
	{
	LINE_NUMBER(544);
	INST_IINC(27, 1);
	goto label_251;
	}
label_252:;
	{
	LINE_NUMBER(571);
	if ((frame[25].i) == 0) goto label_262;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(573);
	if ((frame[14].i) == 0) goto label_263;
	}
	{
	LINE_NUMBER(574);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_263:;
	{
	LINE_NUMBER(575);
	sp[0].o = frame[0].o;
	sp[1].o = frame[24].o;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[23].o));
	((func_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[23].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(576);
	goto label_232;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(577);
	frame[27].o = sp[0].o;
	LINE_NUMBER(578);
	goto label_236;
	}
label_262:;
	{
	LINE_NUMBER(579);
	if ((frame[26].i) == 0) goto label_236;
	}
	{
	LINE_NUMBER(580);
	if ((frame[14].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(581);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"double: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(583);
	sp[0].o = frame[0].o;
	sp[1].o = frame[24].o;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[23].o));
	((func_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, (frame[23].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(584);
	goto label_232;
label_14:;
	LINE_NUMBER(585);
	INST_ASTORE(27);
label_236:;
	{
	LINE_NUMBER(589);
	if ((frame[14].i) == 0) goto label_268;
	}
	{
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"string: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[24].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[23].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_268:;
	{
	LINE_NUMBER(590);
	((func_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String])(ctx, (frame[0].o), (frame[24].o), (frame[23].o));
	}
label_232:;
	{
	LINE_NUMBER(592);
	frame[12].i = (jint(0));
	LINE_NUMBER(593);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(595);
	goto label_223;
	}
label_36:;
	LINE_NUMBER(601);
	goto label_17;
label_17:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(609);
	goto label_271;
label_18:;
	{
	sp -= 1;
	LINE_NUMBER(607);
	frame[15].o = sp[0].o;
	LINE_NUMBER(608);
	frame[13].o = (frame[15].o);
	}
label_271:;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_root;
	frame[15].o = sp[0].o;
	LINE_NUMBER(612);
	((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_root = (jref) (jobject(nullptr));
	LINE_NUMBER(613);
	((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(614);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_lastChild;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(616);
	if ((frame[5].i) >= (frame[3].i)) goto label_277;
	}
	{
	LINE_NUMBER(617);
	frame[16].i = (jint(1));
	LINE_NUMBER(618);
	frame[17].i = (jint(0));
	}
label_280:;
	{
	if ((frame[17].i) >= (frame[5].i)) goto label_281;
	}
	{
	LINE_NUMBER(619);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[17].i))) != (10)) goto label_283;
	}
	INST_IINC(16, 1);
label_283:;
	{
	LINE_NUMBER(618);
	INST_IINC(17, 1);
	goto label_280;
	}
label_281:;
	{
	LINE_NUMBER(620);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[5].i) - (32)));
	frame[17].i = temp0;
	LINE_NUMBER(621);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON on line "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[16].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" near: "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[1].o), (frame[17].i), ((frame[5].i) - (frame[17].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"*ERROR*"_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	sp[3].o = frame[1].o;
	jint temp1 = frame[5].i;
	jint temp2 = 64;
	jint temp3 = (frame[3].i) - (frame[5].i);
	LINE_NUMBER(622);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, temp3);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, sp[3].o, temp1, temp4);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[13].o));
	throwException(ctx, sp[0].o);	}
label_277:;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_286;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[16].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(626);
	if ((frame[16].o) == nullptr) goto label_290;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[16].o));
	if (temp0 == 0) goto label_290;
	}
	{
	LINE_NUMBER(627);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON, unmatched brace."_j))));
	throwException(ctx, sp[0].o);	}
label_290:;
	{
	LINE_NUMBER(629);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON, unmatched bracket."_j))));
	throwException(ctx, sp[0].o);	}
label_286:;
	{
	LINE_NUMBER(630);
	if ((frame[13].o) == nullptr) goto label_292;
	}
	{
	LINE_NUMBER(631);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing JSON: "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[2].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[13].o));
	throwException(ctx, sp[0].o);	}
label_292:;
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return (frame[15].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:addChild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(637);
	((func_arc_util_serialization_JsonValue_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_setName_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(638);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(639);
	((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(640);
	((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[2].o);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(642);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(643);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_9;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) (frame[2].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_lastChild;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(647);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(648);
	((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_prev = (jref) (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_lastChild;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(651);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	((arc_util_serialization_JsonReader *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	}
label_5:;
	LINE_NUMBER(654);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_startObject_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:startObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(657);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_object;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(658);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(660);
	((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_startArray_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:startArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(664);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(665);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(667);
	((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_pop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:pop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(671);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[1].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[1].o);
	((arc_util_serialization_JsonReader *) NULL_CHECK(sp[0].o))->F_root = (jref) (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[1].o));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_lastChild;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(673);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp += 1;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonReader *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 2;
	((arc_util_serialization_JsonReader *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:string", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(677);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[2].o, (frame[2].o));
	M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String(jcontext ctx, jobject self, jobject param0, jdouble param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:number", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(681);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_double_java_lang_String(ctx, sp[2].o, (frame[2].d), (frame[4].o));
	M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:number", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(685);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_long_java_lang_String(ctx, sp[2].o, (frame[2].l), (frame[4].o));
	M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_JsonReader_bool_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:bool", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(689);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_boolean(ctx, sp[2].o, (frame[2].i));
	M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonReader_unescape_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:unescape", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(693);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(694);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((frame[2].i) + (16)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(695);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(696);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(697);
	if ((frame[5].i) == (92)) goto label_7;
	}
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(699);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(701);
	if ((frame[4].i) != (frame[2].i)) goto label_10;
	}
	goto label_4;
label_10:;
	{
	LINE_NUMBER(702);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(703);
	if ((frame[5].i) != (117)) goto label_12;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), ((frame[4].i) + (jint(4))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	sp[1].o = (jobject)SM_java_lang_Character_toChars_int_R_Array1_char(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(705);
	INST_IINC(4, 4);
	LINE_NUMBER(706);
	goto label_3;
	}
label_12:;
	{
	LINE_NUMBER(708);
	switch((frame[5].i)) {
		case 34: goto label_16;
		case 47: goto label_16;
		case 92: goto label_16;
		case 98: goto label_17;
		case 102: goto label_18;
		case 110: goto label_19;
		case 114: goto label_20;
		case 116: goto label_21;
		default: goto label_22;
	}
	}
label_16:;
	LINE_NUMBER(712);
	goto label_23;
label_17:;
	{
	LINE_NUMBER(714);
	frame[5].i = (8);
	LINE_NUMBER(715);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(717);
	frame[5].i = (12);
	LINE_NUMBER(718);
	goto label_23;
	}
label_19:;
	{
	LINE_NUMBER(720);
	frame[5].i = (10);
	LINE_NUMBER(721);
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(723);
	frame[5].i = (13);
	LINE_NUMBER(724);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(726);
	frame[5].i = (9);
	LINE_NUMBER(727);
	goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(729);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal escaped character: \\"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(732);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_JsonReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_serialization_JsonReader_json_start = jint(1);
	SF_arc_util_serialization_JsonReader_json_first_final = jint(35);
	SF_arc_util_serialization_JsonReader_json_error = jint(0);
	SF_arc_util_serialization_JsonReader_json_en_object = jint(5);
	SF_arc_util_serialization_JsonReader_json_en_array = jint(23);
	SF_arc_util_serialization_JsonReader_json_en_main = jint(1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonReader:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonReader(ctx);
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_actions_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_actions = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_key_offsets_0_R_Array1_short(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_key_offsets = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_trans_keys_0_R_Array1_char(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_trans_keys = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_single_lengths_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_single_lengths = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_range_lengths_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_range_lengths = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_index_offsets_0_R_Array1_short(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_index_offsets = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_indicies_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_indicies = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_trans_targs_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_trans_targs = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_trans_actions_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_trans_actions = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonReader_init__json_eof_actions_0_R_Array1_byte(ctx);
	clinit_arc_util_serialization_JsonReader(ctx);
	SF_arc_util_serialization_JsonReader__json_eof_actions = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_JsonReader[] {
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
	(void *) M_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue,
	(void *) M_arc_util_serialization_JsonReader_startObject_java_lang_String,
	(void *) M_arc_util_serialization_JsonReader_startArray_java_lang_String,
	(void *) M_arc_util_serialization_JsonReader_pop,
	(void *) M_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String,
	(void *) M_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String,
	(void *) M_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String,
	(void *) M_arc_util_serialization_JsonReader_bool_java_lang_String_boolean,
	(void *) M_arc_util_serialization_JsonReader_unescape_java_lang_String_R_java_lang_String,
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
	{ "parse", "(Ljava/io/InputStream;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Larc/files/Fi;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Ljava/lang/String;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Ljava/io/Reader;)Larc/util/serialization/JsonValue;" },
	{ "parse", "([CII)Larc/util/serialization/JsonValue;" },
	{ "addChild", "(Ljava/lang/String;Larc/util/serialization/JsonValue;)V" },
	{ "startObject", "(Ljava/lang/String;)V" },
	{ "startArray", "(Ljava/lang/String;)V" },
	{ "pop", "()V" },
	{ "string", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "number", "(Ljava/lang/String;DLjava/lang/String;)V" },
	{ "number", "(Ljava/lang/String;JLjava/lang/String;)V" },
	{ "bool", "(Ljava/lang/String;Z)V" },
	{ "unescape", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_util_serialization_BaseJsonReader, };

static FieldMetadata fields[] {
	{ "json_start", &class_int, (intptr_t) &SF_arc_util_serialization_JsonReader_json_start, "I", 24 },
	{ "json_first_final", &class_int, (intptr_t) &SF_arc_util_serialization_JsonReader_json_first_final, "I", 24 },
	{ "json_error", &class_int, (intptr_t) &SF_arc_util_serialization_JsonReader_json_error, "I", 24 },
	{ "json_en_object", &class_int, (intptr_t) &SF_arc_util_serialization_JsonReader_json_en_object, "I", 24 },
	{ "json_en_array", &class_int, (intptr_t) &SF_arc_util_serialization_JsonReader_json_en_array, "I", 24 },
	{ "json_en_main", &class_int, (intptr_t) &SF_arc_util_serialization_JsonReader_json_en_main, "I", 24 },
	{ "_json_actions", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_actions, "[B", 26 },
	{ "_json_key_offsets", getArrayClass(&class_short, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_key_offsets, "[S", 26 },
	{ "_json_trans_keys", getArrayClass(&class_char, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_trans_keys, "[C", 26 },
	{ "_json_single_lengths", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_single_lengths, "[B", 26 },
	{ "_json_range_lengths", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_range_lengths, "[B", 26 },
	{ "_json_index_offsets", getArrayClass(&class_short, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_index_offsets, "[S", 26 },
	{ "_json_indicies", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_indicies, "[B", 26 },
	{ "_json_trans_targs", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_trans_targs, "[B", 26 },
	{ "_json_trans_actions", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_trans_actions, "[B", 26 },
	{ "_json_eof_actions", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_serialization_JsonReader__json_eof_actions, "[B", 26 },
	{ "elements", &class_arc_struct_Seq, offsetof(arc_util_serialization_JsonReader, F_elements), "Larc/struct/Seq;", 18 },
	{ "lastChild", &class_arc_struct_Seq, offsetof(arc_util_serialization_JsonReader, F_lastChild), "Larc/struct/Seq;", 18 },
	{ "root", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonReader, F_root), "Larc/util/serialization/JsonValue;", 2 },
	{ "current", &class_arc_util_serialization_JsonValue, offsetof(arc_util_serialization_JsonReader, F_current), "Larc/util/serialization/JsonValue;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonReader, 0, "()V", 1 },
	{ "init__json_actions_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_actions_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_key_offsets_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_key_offsets_0_R_Array1_short, 0, "()[S", 10 },
	{ "init__json_trans_keys_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_trans_keys_0_R_Array1_char, 0, "()[C", 10 },
	{ "init__json_single_lengths_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_single_lengths_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_range_lengths_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_range_lengths_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_index_offsets_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_index_offsets_0_R_Array1_short, 0, "()[S", 10 },
	{ "init__json_indicies_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_indicies_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_trans_targs_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_trans_targs_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_trans_actions_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_trans_actions_0_R_Array1_byte, 0, "()[B", 10 },
	{ "init__json_eof_actions_0", (intptr_t) SM_arc_util_serialization_JsonReader_init__json_eof_actions_0_R_Array1_byte, 0, "()[B", 10 },
	{ "parse", (intptr_t) M_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue, "(Ljava/lang/String;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonReader_parse_java_io_Reader_R_arc_util_serialization_JsonValue, "(Ljava/io/Reader;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/InputStream;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue, "(Larc/files/Fi;)Larc/util/serialization/JsonValue;", 1 },
	{ "parse", (intptr_t) M_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonReader_parse_Array1_char_int_int_R_arc_util_serialization_JsonValue, "([CII)Larc/util/serialization/JsonValue;", 1 },
	{ "addChild", (intptr_t) M_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue, VTABLE_arc_util_serialization_JsonReader_addChild_java_lang_String_arc_util_serialization_JsonValue, "(Ljava/lang/String;Larc/util/serialization/JsonValue;)V", 2 },
	{ "startObject", (intptr_t) M_arc_util_serialization_JsonReader_startObject_java_lang_String, VTABLE_arc_util_serialization_JsonReader_startObject_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "startArray", (intptr_t) M_arc_util_serialization_JsonReader_startArray_java_lang_String, VTABLE_arc_util_serialization_JsonReader_startArray_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "pop", (intptr_t) M_arc_util_serialization_JsonReader_pop, VTABLE_arc_util_serialization_JsonReader_pop, "()V", 4 },
	{ "string", (intptr_t) M_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String, VTABLE_arc_util_serialization_JsonReader_string_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 4 },
	{ "number", (intptr_t) M_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String, VTABLE_arc_util_serialization_JsonReader_number_java_lang_String_double_java_lang_String, "(Ljava/lang/String;DLjava/lang/String;)V", 4 },
	{ "number", (intptr_t) M_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String, VTABLE_arc_util_serialization_JsonReader_number_java_lang_String_long_java_lang_String, "(Ljava/lang/String;JLjava/lang/String;)V", 4 },
	{ "bool", (intptr_t) M_arc_util_serialization_JsonReader_bool_java_lang_String_boolean, VTABLE_arc_util_serialization_JsonReader_bool_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "unescape", (intptr_t) M_arc_util_serialization_JsonReader_unescape_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_JsonReader_unescape_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_JsonReader, 0, "()V", 8 },
};

Class class_arc_util_serialization_JsonReader{
		.nativeName = (intptr_t) "arc/util/serialization/JsonReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_JsonReader),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonReader,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonReader = registerClass(&class_arc_util_serialization_JsonReader);

}
