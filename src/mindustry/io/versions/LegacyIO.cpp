#include "mindustry/io/versions/LegacyIO.h"
#include "java/lang/Exception.h"
#include "mindustry/ui/dialogs/JoinDialog_Server.h"
#include "arc/Core.h"
#include "java/io/DataInputStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/StringMap.h"
#include "mindustry/io/versions/LegacyIO.h"
#include "arc/struct/Seq.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_mindustry_io_versions_LegacyIO_unitMap;

void mark_mindustry_io_versions_LegacyIO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_versions_LegacyIO_unitMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_versions_LegacyIO_unitMap)->clazz)->markFunction)((jobject) SF_mindustry_io_versions_LegacyIO_unitMap, mark, depth + 1);
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
	auto self = (mindustry_io_versions_LegacyIO *) object;
}

void init_mindustry_io_versions_LegacyIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacyIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_LegacyIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_io_versions_LegacyIO_readServers_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacyIO:readServers", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_LegacyIO(ctx);
	{
	LINE_NUMBER(27);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(30);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBytes_java_lang_String_R_Array1_byte])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server-list"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(31);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, (frame[1].o));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(34);
	if ((frame[3].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	LINE_NUMBER(38);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(39);
	clinit_mindustry_ui_dialogs_JoinDialog$Server(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_JoinDialog$Server);
	init_mindustry_ui_dialogs_JoinDialog$Server(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_ip = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_port = temp0;
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(38);
	INST_IINC(4, 1);
	goto label_10;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(47);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(45);
	frame[1].o = sp[0].o;
	LINE_NUMBER(46);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_16:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_io_versions_LegacyIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/versions/LegacyIO:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_versions_LegacyIO(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (24));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"titan"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"mace"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"chaos-array"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"scepter"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"eradicator"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"reign"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"eruptor"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"atrax"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"wraith"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"flare"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"ghoul"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"horizon"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"revenant"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) createStringLiteral(ctx, u8"zenith"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"lich"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) createStringLiteral(ctx, u8"antumbra"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"reaper"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) createStringLiteral(ctx, u8"eclipse"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"draug"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (19)) = (((jobject) createStringLiteral(ctx, u8"mono"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"phantom"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (21)) = (((jobject) createStringLiteral(ctx, u8"poly"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"spirit"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (23)) = (((jobject) createStringLiteral(ctx, u8"poly"_j)));
	sp[0].o = (jobject)SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(ctx, sp[0].o);
	clinit_mindustry_io_versions_LegacyIO(ctx);
	SF_mindustry_io_versions_LegacyIO_unitMap = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_versions_LegacyIO[] {
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
	{ "unitMap", &class_arc_struct_StringMap, (intptr_t) &SF_mindustry_io_versions_LegacyIO_unitMap, "Larc/struct/StringMap;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_versions_LegacyIO, 0, "()V", 1 },
	{ "readServers", (intptr_t) SM_mindustry_io_versions_LegacyIO_readServers_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_versions_LegacyIO, 0, "()V", 8 },
};

Class class_mindustry_io_versions_LegacyIO{
		.nativeName = (intptr_t) "mindustry/io/versions/LegacyIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_versions_LegacyIO),
		.classVtable = (intptr_t) vtable_mindustry_io_versions_LegacyIO,
		.staticInitializer = (intptr_t) clinit_mindustry_io_versions_LegacyIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_versions_LegacyIO,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_versions_LegacyIO = registerClass(&class_mindustry_io_versions_LegacyIO);

}
