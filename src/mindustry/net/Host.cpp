#include "mindustry/net/Host.h"
#include "mindustry/game/Gamemode.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Host.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_net_Host(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Host *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_address)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_address)->clazz)->markFunction)((jobject) self->F_address, mark, depth + 1);
	if (self->F_mapname)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapname)->clazz)->markFunction)((jobject) self->F_mapname, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_versionType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_versionType)->clazz)->markFunction)((jobject) self->F_versionType, mark, depth + 1);
	if (self->F_mode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mode)->clazz)->markFunction)((jobject) self->F_mode, mark, depth + 1);
	if (self->F_modeName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modeName)->clazz)->markFunction)((jobject) self->F_modeName, mark, depth + 1);
}

void clinit_mindustry_net_Host(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Host_int_java_lang_String_java_lang_String_int_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jint param5, jint param6, jint param7, jobject param8, jobject param9, jint param10, jobject param11, jobject param12) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Host:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Host(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	frame[11].i = param10;
	frame[12].o = param11;
	frame[13].o = param12;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_ping = (frame[1].i);
	LINE_NUMBER(21);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(22);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_address = (jref) (frame[3].o);
	LINE_NUMBER(23);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_port = (frame[4].i);
	LINE_NUMBER(24);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_mapname = (jref) (frame[5].o);
	LINE_NUMBER(25);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_wave = (frame[6].i);
	LINE_NUMBER(26);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_players = (frame[7].i);
	LINE_NUMBER(27);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_version = (frame[8].i);
	LINE_NUMBER(28);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_versionType = (jref) (frame[9].o);
	LINE_NUMBER(29);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_mode = (jref) (frame[10].o);
	LINE_NUMBER(30);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_playerLimit = (frame[11].i);
	LINE_NUMBER(31);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_description = (jref) (frame[12].o);
	LINE_NUMBER(32);
	((mindustry_net_Host *) NULL_CHECK((frame[0].o)))->F_modeName = (jref) (frame[13].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Host_int_java_lang_String_java_lang_String_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5, jint param6, jobject param7, jobject param8, jint param9, jobject param10, jobject param11) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Host:<init>", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Host(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	frame[10].i = param9;
	frame[11].o = param10;
	frame[12].o = param11;
	{
	LINE_NUMBER(36);
	init_mindustry_net_Host_int_java_lang_String_java_lang_String_int_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o), (6567), (frame[4].o), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].o), (frame[9].o), (frame[10].i), (frame[11].o), (frame[12].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Host;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field modeName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_net_Host[] {
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
	{ "name", &class_java_lang_String, offsetof(mindustry_net_Host, F_name), "Ljava/lang/String;", 17 },
	{ "address", &class_java_lang_String, offsetof(mindustry_net_Host, F_address), "Ljava/lang/String;", 17 },
	{ "mapname", &class_java_lang_String, offsetof(mindustry_net_Host, F_mapname), "Ljava/lang/String;", 17 },
	{ "description", &class_java_lang_String, offsetof(mindustry_net_Host, F_description), "Ljava/lang/String;", 17 },
	{ "wave", &class_int, offsetof(mindustry_net_Host, F_wave), "I", 17 },
	{ "players", &class_int, offsetof(mindustry_net_Host, F_players), "I", 17 },
	{ "playerLimit", &class_int, offsetof(mindustry_net_Host, F_playerLimit), "I", 17 },
	{ "version", &class_int, offsetof(mindustry_net_Host, F_version), "I", 17 },
	{ "versionType", &class_java_lang_String, offsetof(mindustry_net_Host, F_versionType), "Ljava/lang/String;", 17 },
	{ "mode", &class_mindustry_game_Gamemode, offsetof(mindustry_net_Host, F_mode), "Lmindustry/game/Gamemode;", 17 },
	{ "modeName", &class_java_lang_String, offsetof(mindustry_net_Host, F_modeName), "Ljava/lang/String;", 17 },
	{ "ping", &class_int, offsetof(mindustry_net_Host, F_ping), "I", 1 },
	{ "port", &class_int, offsetof(mindustry_net_Host, F_port), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Host_int_java_lang_String_java_lang_String_int_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String, 0, "(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Lmindustry/game/Gamemode;ILjava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_net_Host_int_java_lang_String_java_lang_String_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String, 0, "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;Lmindustry/game/Gamemode;ILjava/lang/String;Ljava/lang/String;)V", 1 },
};

Class class_mindustry_net_Host{
		.nativeName = (intptr_t) "mindustry/net/Host",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Host),
		.classVtable = (intptr_t) vtable_mindustry_net_Host,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Host,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Host,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Host = registerClass(&class_mindustry_net_Host);

}
