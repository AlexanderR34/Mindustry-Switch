#include "rhino/Token.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/Token_CommentType.h"

extern "C" {

jbool SF_rhino_Token_printTrees;
jbool SF_rhino_Token_printICode;
jbool SF_rhino_Token_printNames;
jint SF_rhino_Token_ERROR;
jint SF_rhino_Token_EOF;
jint SF_rhino_Token_EOL;
jint SF_rhino_Token_FIRST_BYTECODE_TOKEN;
jint SF_rhino_Token_ENTERWITH;
jint SF_rhino_Token_LEAVEWITH;
jint SF_rhino_Token_RETURN;
jint SF_rhino_Token_GOTO;
jint SF_rhino_Token_IFEQ;
jint SF_rhino_Token_IFNE;
jint SF_rhino_Token_SETNAME;
jint SF_rhino_Token_BITOR;
jint SF_rhino_Token_BITXOR;
jint SF_rhino_Token_BITAND;
jint SF_rhino_Token_EQ;
jint SF_rhino_Token_NE;
jint SF_rhino_Token_LT;
jint SF_rhino_Token_LE;
jint SF_rhino_Token_GT;
jint SF_rhino_Token_GE;
jint SF_rhino_Token_LSH;
jint SF_rhino_Token_RSH;
jint SF_rhino_Token_URSH;
jint SF_rhino_Token_ADD;
jint SF_rhino_Token_SUB;
jint SF_rhino_Token_MUL;
jint SF_rhino_Token_DIV;
jint SF_rhino_Token_MOD;
jint SF_rhino_Token_NOT;
jint SF_rhino_Token_BITNOT;
jint SF_rhino_Token_POS;
jint SF_rhino_Token_NEG;
jint SF_rhino_Token_NEW;
jint SF_rhino_Token_DELPROP;
jint SF_rhino_Token_TYPEOF;
jint SF_rhino_Token_GETPROP;
jint SF_rhino_Token_GETPROPNOWARN;
jint SF_rhino_Token_SETPROP;
jint SF_rhino_Token_GETELEM;
jint SF_rhino_Token_SETELEM;
jint SF_rhino_Token_CALL;
jint SF_rhino_Token_NAME;
jint SF_rhino_Token_NUMBER;
jint SF_rhino_Token_STRING;
jint SF_rhino_Token_NULL;
jint SF_rhino_Token_THIS;
jint SF_rhino_Token_FALSE;
jint SF_rhino_Token_TRUE;
jint SF_rhino_Token_SHEQ;
jint SF_rhino_Token_SHNE;
jint SF_rhino_Token_REGEXP;
jint SF_rhino_Token_BINDNAME;
jint SF_rhino_Token_THROW;
jint SF_rhino_Token_RETHROW;
jint SF_rhino_Token_IN;
jint SF_rhino_Token_INSTANCEOF;
jint SF_rhino_Token_LOCAL_LOAD;
jint SF_rhino_Token_GETVAR;
jint SF_rhino_Token_SETVAR;
jint SF_rhino_Token_CATCH_SCOPE;
jint SF_rhino_Token_ENUM_INIT_KEYS;
jint SF_rhino_Token_ENUM_INIT_VALUES;
jint SF_rhino_Token_ENUM_INIT_ARRAY;
jint SF_rhino_Token_ENUM_INIT_VALUES_IN_ORDER;
jint SF_rhino_Token_ENUM_NEXT;
jint SF_rhino_Token_ENUM_ID;
jint SF_rhino_Token_THISFN;
jint SF_rhino_Token_RETURN_RESULT;
jint SF_rhino_Token_ARRAYLIT;
jint SF_rhino_Token_OBJECTLIT;
jint SF_rhino_Token_GET_REF;
jint SF_rhino_Token_SET_REF;
jint SF_rhino_Token_DEL_REF;
jint SF_rhino_Token_REF_CALL;
jint SF_rhino_Token_REF_SPECIAL;
jint SF_rhino_Token_YIELD;
jint SF_rhino_Token_STRICT_SETNAME;
jint SF_rhino_Token_REF_MEMBER;
jint SF_rhino_Token_REF_NS_MEMBER;
jint SF_rhino_Token_REF_NAME;
jint SF_rhino_Token_REF_NS_NAME;
jint SF_rhino_Token_LAST_BYTECODE_TOKEN;
jint SF_rhino_Token_TRY;
jint SF_rhino_Token_SEMI;
jint SF_rhino_Token_LB;
jint SF_rhino_Token_RB;
jint SF_rhino_Token_LC;
jint SF_rhino_Token_RC;
jint SF_rhino_Token_LP;
jint SF_rhino_Token_RP;
jint SF_rhino_Token_COMMA;
jint SF_rhino_Token_ASSIGN;
jint SF_rhino_Token_ASSIGN_BITOR;
jint SF_rhino_Token_ASSIGN_BITXOR;
jint SF_rhino_Token_ASSIGN_BITAND;
jint SF_rhino_Token_ASSIGN_LSH;
jint SF_rhino_Token_ASSIGN_RSH;
jint SF_rhino_Token_ASSIGN_URSH;
jint SF_rhino_Token_ASSIGN_ADD;
jint SF_rhino_Token_ASSIGN_SUB;
jint SF_rhino_Token_ASSIGN_MUL;
jint SF_rhino_Token_ASSIGN_DIV;
jint SF_rhino_Token_ASSIGN_MOD;
jint SF_rhino_Token_FIRST_ASSIGN;
jint SF_rhino_Token_LAST_ASSIGN;
jint SF_rhino_Token_HOOK;
jint SF_rhino_Token_COLON;
jint SF_rhino_Token_OR;
jint SF_rhino_Token_AND;
jint SF_rhino_Token_INC;
jint SF_rhino_Token_DEC;
jint SF_rhino_Token_DOT;
jint SF_rhino_Token_FUNCTION;
jint SF_rhino_Token_EXPORT;
jint SF_rhino_Token_IMPORT;
jint SF_rhino_Token_IF;
jint SF_rhino_Token_ELSE;
jint SF_rhino_Token_SWITCH;
jint SF_rhino_Token_CASE;
jint SF_rhino_Token_DEFAULT;
jint SF_rhino_Token_WHILE;
jint SF_rhino_Token_DO;
jint SF_rhino_Token_FOR;
jint SF_rhino_Token_BREAK;
jint SF_rhino_Token_CONTINUE;
jint SF_rhino_Token_VAR;
jint SF_rhino_Token_WITH;
jint SF_rhino_Token_CATCH;
jint SF_rhino_Token_FINALLY;
jint SF_rhino_Token_VOID;
jint SF_rhino_Token_RESERVED;
jint SF_rhino_Token_EMPTY;
jint SF_rhino_Token_BLOCK;
jint SF_rhino_Token_LABEL;
jint SF_rhino_Token_TARGET;
jint SF_rhino_Token_LOOP;
jint SF_rhino_Token_EXPR_VOID;
jint SF_rhino_Token_EXPR_RESULT;
jint SF_rhino_Token_JSR;
jint SF_rhino_Token_SCRIPT;
jint SF_rhino_Token_TYPEOFNAME;
jint SF_rhino_Token_USE_STACK;
jint SF_rhino_Token_SETPROP_OP;
jint SF_rhino_Token_SETELEM_OP;
jint SF_rhino_Token_LOCAL_BLOCK;
jint SF_rhino_Token_SET_REF_OP;
jint SF_rhino_Token_TO_OBJECT;
jint SF_rhino_Token_TO_DOUBLE;
jint SF_rhino_Token_GET;
jint SF_rhino_Token_SET;
jint SF_rhino_Token_LET;
jint SF_rhino_Token_CONST;
jint SF_rhino_Token_SETCONST;
jint SF_rhino_Token_SETCONSTVAR;
jint SF_rhino_Token_ARRAYCOMP;
jint SF_rhino_Token_LETEXPR;
jint SF_rhino_Token_WITHEXPR;
jint SF_rhino_Token_DEBUGGER;
jint SF_rhino_Token_COMMENT;
jint SF_rhino_Token_GENEXPR;
jint SF_rhino_Token_METHOD;
jint SF_rhino_Token_ARROW;
jint SF_rhino_Token_YIELD_STAR;
jint SF_rhino_Token_LAST_TOKEN;

void mark_rhino_Token(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Token *) object;
}

void clinit_rhino_Token(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Token_printTrees = jint(0);
	SF_rhino_Token_printICode = jint(0);
	SF_rhino_Token_printNames = jint(0);
	SF_rhino_Token_ERROR = jint(-1);
	SF_rhino_Token_EOF = jint(0);
	SF_rhino_Token_EOL = jint(1);
	SF_rhino_Token_FIRST_BYTECODE_TOKEN = jint(2);
	SF_rhino_Token_ENTERWITH = jint(2);
	SF_rhino_Token_LEAVEWITH = jint(3);
	SF_rhino_Token_RETURN = jint(4);
	SF_rhino_Token_GOTO = jint(5);
	SF_rhino_Token_IFEQ = jint(6);
	SF_rhino_Token_IFNE = jint(7);
	SF_rhino_Token_SETNAME = jint(8);
	SF_rhino_Token_BITOR = jint(9);
	SF_rhino_Token_BITXOR = jint(10);
	SF_rhino_Token_BITAND = jint(11);
	SF_rhino_Token_EQ = jint(12);
	SF_rhino_Token_NE = jint(13);
	SF_rhino_Token_LT = jint(14);
	SF_rhino_Token_LE = jint(15);
	SF_rhino_Token_GT = jint(16);
	SF_rhino_Token_GE = jint(17);
	SF_rhino_Token_LSH = jint(18);
	SF_rhino_Token_RSH = jint(19);
	SF_rhino_Token_URSH = jint(20);
	SF_rhino_Token_ADD = jint(21);
	SF_rhino_Token_SUB = jint(22);
	SF_rhino_Token_MUL = jint(23);
	SF_rhino_Token_DIV = jint(24);
	SF_rhino_Token_MOD = jint(25);
	SF_rhino_Token_NOT = jint(26);
	SF_rhino_Token_BITNOT = jint(27);
	SF_rhino_Token_POS = jint(28);
	SF_rhino_Token_NEG = jint(29);
	SF_rhino_Token_NEW = jint(30);
	SF_rhino_Token_DELPROP = jint(31);
	SF_rhino_Token_TYPEOF = jint(32);
	SF_rhino_Token_GETPROP = jint(33);
	SF_rhino_Token_GETPROPNOWARN = jint(34);
	SF_rhino_Token_SETPROP = jint(35);
	SF_rhino_Token_GETELEM = jint(36);
	SF_rhino_Token_SETELEM = jint(37);
	SF_rhino_Token_CALL = jint(38);
	SF_rhino_Token_NAME = jint(39);
	SF_rhino_Token_NUMBER = jint(40);
	SF_rhino_Token_STRING = jint(41);
	SF_rhino_Token_NULL = jint(42);
	SF_rhino_Token_THIS = jint(43);
	SF_rhino_Token_FALSE = jint(44);
	SF_rhino_Token_TRUE = jint(45);
	SF_rhino_Token_SHEQ = jint(46);
	SF_rhino_Token_SHNE = jint(47);
	SF_rhino_Token_REGEXP = jint(48);
	SF_rhino_Token_BINDNAME = jint(49);
	SF_rhino_Token_THROW = jint(50);
	SF_rhino_Token_RETHROW = jint(51);
	SF_rhino_Token_IN = jint(52);
	SF_rhino_Token_INSTANCEOF = jint(53);
	SF_rhino_Token_LOCAL_LOAD = jint(54);
	SF_rhino_Token_GETVAR = jint(55);
	SF_rhino_Token_SETVAR = jint(56);
	SF_rhino_Token_CATCH_SCOPE = jint(57);
	SF_rhino_Token_ENUM_INIT_KEYS = jint(58);
	SF_rhino_Token_ENUM_INIT_VALUES = jint(59);
	SF_rhino_Token_ENUM_INIT_ARRAY = jint(60);
	SF_rhino_Token_ENUM_INIT_VALUES_IN_ORDER = jint(61);
	SF_rhino_Token_ENUM_NEXT = jint(62);
	SF_rhino_Token_ENUM_ID = jint(63);
	SF_rhino_Token_THISFN = jint(64);
	SF_rhino_Token_RETURN_RESULT = jint(65);
	SF_rhino_Token_ARRAYLIT = jint(66);
	SF_rhino_Token_OBJECTLIT = jint(67);
	SF_rhino_Token_GET_REF = jint(68);
	SF_rhino_Token_SET_REF = jint(69);
	SF_rhino_Token_DEL_REF = jint(70);
	SF_rhino_Token_REF_CALL = jint(71);
	SF_rhino_Token_REF_SPECIAL = jint(72);
	SF_rhino_Token_YIELD = jint(73);
	SF_rhino_Token_STRICT_SETNAME = jint(74);
	SF_rhino_Token_REF_MEMBER = jint(78);
	SF_rhino_Token_REF_NS_MEMBER = jint(79);
	SF_rhino_Token_REF_NAME = jint(80);
	SF_rhino_Token_REF_NS_NAME = jint(81);
	SF_rhino_Token_LAST_BYTECODE_TOKEN = jint(81);
	SF_rhino_Token_TRY = jint(82);
	SF_rhino_Token_SEMI = jint(83);
	SF_rhino_Token_LB = jint(84);
	SF_rhino_Token_RB = jint(85);
	SF_rhino_Token_LC = jint(86);
	SF_rhino_Token_RC = jint(87);
	SF_rhino_Token_LP = jint(88);
	SF_rhino_Token_RP = jint(89);
	SF_rhino_Token_COMMA = jint(90);
	SF_rhino_Token_ASSIGN = jint(91);
	SF_rhino_Token_ASSIGN_BITOR = jint(92);
	SF_rhino_Token_ASSIGN_BITXOR = jint(93);
	SF_rhino_Token_ASSIGN_BITAND = jint(94);
	SF_rhino_Token_ASSIGN_LSH = jint(95);
	SF_rhino_Token_ASSIGN_RSH = jint(96);
	SF_rhino_Token_ASSIGN_URSH = jint(97);
	SF_rhino_Token_ASSIGN_ADD = jint(98);
	SF_rhino_Token_ASSIGN_SUB = jint(99);
	SF_rhino_Token_ASSIGN_MUL = jint(100);
	SF_rhino_Token_ASSIGN_DIV = jint(101);
	SF_rhino_Token_ASSIGN_MOD = jint(102);
	SF_rhino_Token_FIRST_ASSIGN = jint(91);
	SF_rhino_Token_LAST_ASSIGN = jint(102);
	SF_rhino_Token_HOOK = jint(103);
	SF_rhino_Token_COLON = jint(104);
	SF_rhino_Token_OR = jint(105);
	SF_rhino_Token_AND = jint(106);
	SF_rhino_Token_INC = jint(107);
	SF_rhino_Token_DEC = jint(108);
	SF_rhino_Token_DOT = jint(109);
	SF_rhino_Token_FUNCTION = jint(110);
	SF_rhino_Token_EXPORT = jint(111);
	SF_rhino_Token_IMPORT = jint(112);
	SF_rhino_Token_IF = jint(113);
	SF_rhino_Token_ELSE = jint(114);
	SF_rhino_Token_SWITCH = jint(115);
	SF_rhino_Token_CASE = jint(116);
	SF_rhino_Token_DEFAULT = jint(117);
	SF_rhino_Token_WHILE = jint(118);
	SF_rhino_Token_DO = jint(119);
	SF_rhino_Token_FOR = jint(120);
	SF_rhino_Token_BREAK = jint(121);
	SF_rhino_Token_CONTINUE = jint(122);
	SF_rhino_Token_VAR = jint(123);
	SF_rhino_Token_WITH = jint(124);
	SF_rhino_Token_CATCH = jint(125);
	SF_rhino_Token_FINALLY = jint(126);
	SF_rhino_Token_VOID = jint(127);
	SF_rhino_Token_RESERVED = jint(128);
	SF_rhino_Token_EMPTY = jint(129);
	SF_rhino_Token_BLOCK = jint(130);
	SF_rhino_Token_LABEL = jint(131);
	SF_rhino_Token_TARGET = jint(132);
	SF_rhino_Token_LOOP = jint(133);
	SF_rhino_Token_EXPR_VOID = jint(134);
	SF_rhino_Token_EXPR_RESULT = jint(135);
	SF_rhino_Token_JSR = jint(136);
	SF_rhino_Token_SCRIPT = jint(137);
	SF_rhino_Token_TYPEOFNAME = jint(138);
	SF_rhino_Token_USE_STACK = jint(139);
	SF_rhino_Token_SETPROP_OP = jint(140);
	SF_rhino_Token_SETELEM_OP = jint(141);
	SF_rhino_Token_LOCAL_BLOCK = jint(142);
	SF_rhino_Token_SET_REF_OP = jint(143);
	SF_rhino_Token_TO_OBJECT = jint(150);
	SF_rhino_Token_TO_DOUBLE = jint(151);
	SF_rhino_Token_GET = jint(152);
	SF_rhino_Token_SET = jint(153);
	SF_rhino_Token_LET = jint(154);
	SF_rhino_Token_CONST = jint(155);
	SF_rhino_Token_SETCONST = jint(156);
	SF_rhino_Token_SETCONSTVAR = jint(157);
	SF_rhino_Token_ARRAYCOMP = jint(158);
	SF_rhino_Token_LETEXPR = jint(159);
	SF_rhino_Token_WITHEXPR = jint(160);
	SF_rhino_Token_DEBUGGER = jint(161);
	SF_rhino_Token_COMMENT = jint(162);
	SF_rhino_Token_GENEXPR = jint(163);
	SF_rhino_Token_METHOD = jint(164);
	SF_rhino_Token_ARROW = jint(165);
	SF_rhino_Token_YIELD_STAR = jint(166);
	SF_rhino_Token_LAST_TOKEN = jint(167);
}

void init_rhino_Token(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Token_name_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Token_typeToName_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token:typeToName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(236);
	switch((frame[0].i)) {
		case -1: goto label_1;
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_9;
		case 8: goto label_10;
		case 9: goto label_11;
		case 10: goto label_12;
		case 11: goto label_13;
		case 12: goto label_14;
		case 13: goto label_15;
		case 14: goto label_16;
		case 15: goto label_17;
		case 16: goto label_18;
		case 17: goto label_19;
		case 18: goto label_20;
		case 19: goto label_21;
		case 20: goto label_22;
		case 21: goto label_23;
		case 22: goto label_24;
		case 23: goto label_25;
		case 24: goto label_26;
		case 25: goto label_27;
		case 26: goto label_28;
		case 27: goto label_29;
		case 28: goto label_30;
		case 29: goto label_31;
		case 30: goto label_32;
		case 31: goto label_33;
		case 32: goto label_34;
		case 33: goto label_35;
		case 34: goto label_36;
		case 35: goto label_37;
		case 36: goto label_38;
		case 37: goto label_39;
		case 38: goto label_40;
		case 39: goto label_41;
		case 40: goto label_42;
		case 41: goto label_43;
		case 42: goto label_44;
		case 43: goto label_45;
		case 44: goto label_46;
		case 45: goto label_47;
		case 46: goto label_48;
		case 47: goto label_49;
		case 48: goto label_50;
		case 49: goto label_51;
		case 50: goto label_52;
		case 51: goto label_53;
		case 52: goto label_54;
		case 53: goto label_55;
		case 54: goto label_56;
		case 55: goto label_57;
		case 56: goto label_58;
		case 57: goto label_59;
		case 58: goto label_60;
		case 59: goto label_61;
		case 60: goto label_62;
		case 61: goto label_63;
		case 62: goto label_64;
		case 63: goto label_65;
		case 64: goto label_66;
		case 65: goto label_67;
		case 66: goto label_68;
		case 67: goto label_69;
		case 68: goto label_70;
		case 69: goto label_71;
		case 70: goto label_72;
		case 71: goto label_73;
		case 72: goto label_74;
		case 73: goto label_75;
		case 74: goto label_76;
		case 75: goto label_76;
		case 76: goto label_76;
		case 77: goto label_76;
		case 78: goto label_76;
		case 79: goto label_76;
		case 80: goto label_76;
		case 81: goto label_76;
		case 82: goto label_77;
		case 83: goto label_78;
		case 84: goto label_79;
		case 85: goto label_80;
		case 86: goto label_81;
		case 87: goto label_82;
		case 88: goto label_83;
		case 89: goto label_84;
		case 90: goto label_85;
		case 91: goto label_86;
		case 92: goto label_87;
		case 93: goto label_88;
		case 94: goto label_89;
		case 95: goto label_90;
		case 96: goto label_91;
		case 97: goto label_92;
		case 98: goto label_93;
		case 99: goto label_94;
		case 100: goto label_95;
		case 101: goto label_96;
		case 102: goto label_97;
		case 103: goto label_98;
		case 104: goto label_99;
		case 105: goto label_100;
		case 106: goto label_101;
		case 107: goto label_102;
		case 108: goto label_103;
		case 109: goto label_104;
		case 110: goto label_105;
		case 111: goto label_106;
		case 112: goto label_107;
		case 113: goto label_108;
		case 114: goto label_109;
		case 115: goto label_110;
		case 116: goto label_111;
		case 117: goto label_112;
		case 118: goto label_113;
		case 119: goto label_114;
		case 120: goto label_115;
		case 121: goto label_116;
		case 122: goto label_117;
		case 123: goto label_118;
		case 124: goto label_119;
		case 125: goto label_120;
		case 126: goto label_121;
		case 127: goto label_122;
		case 128: goto label_123;
		case 129: goto label_124;
		case 130: goto label_125;
		case 131: goto label_126;
		case 132: goto label_127;
		case 133: goto label_128;
		case 134: goto label_129;
		case 135: goto label_130;
		case 136: goto label_131;
		case 137: goto label_132;
		case 138: goto label_133;
		case 139: goto label_134;
		case 140: goto label_135;
		case 141: goto label_136;
		case 142: goto label_137;
		case 143: goto label_138;
		case 144: goto label_76;
		case 145: goto label_76;
		case 146: goto label_76;
		case 147: goto label_76;
		case 148: goto label_76;
		case 149: goto label_76;
		case 150: goto label_139;
		case 151: goto label_140;
		case 152: goto label_141;
		case 153: goto label_142;
		case 154: goto label_143;
		case 155: goto label_144;
		case 156: goto label_145;
		case 157: goto label_76;
		case 158: goto label_146;
		case 159: goto label_147;
		case 160: goto label_148;
		case 161: goto label_149;
		case 162: goto label_150;
		case 163: goto label_151;
		case 164: goto label_152;
		case 165: goto label_153;
		case 166: goto label_154;
		default: goto label_76;
	}
	}
label_1:;
	{
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ERROR"_j)));
	}
label_2:;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EOF"_j)));
	}
label_3:;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EOL"_j)));
	}
label_4:;
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENTERWITH"_j)));
	}
label_5:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LEAVEWITH"_j)));
	}
label_6:;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RETURN"_j)));
	}
label_7:;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GOTO"_j)));
	}
label_8:;
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"IFEQ"_j)));
	}
label_9:;
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"IFNE"_j)));
	}
label_10:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETNAME"_j)));
	}
label_11:;
	{
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BITOR"_j)));
	}
label_12:;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BITXOR"_j)));
	}
label_13:;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BITAND"_j)));
	}
label_14:;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EQ"_j)));
	}
label_15:;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NE"_j)));
	}
label_16:;
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LT"_j)));
	}
label_17:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LE"_j)));
	}
label_18:;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GT"_j)));
	}
label_19:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GE"_j)));
	}
label_20:;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LSH"_j)));
	}
label_21:;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RSH"_j)));
	}
label_22:;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"URSH"_j)));
	}
label_23:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ADD"_j)));
	}
label_24:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SUB"_j)));
	}
label_25:;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"MUL"_j)));
	}
label_26:;
	{
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DIV"_j)));
	}
label_27:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"MOD"_j)));
	}
label_28:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NOT"_j)));
	}
label_29:;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BITNOT"_j)));
	}
label_30:;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"POS"_j)));
	}
label_31:;
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NEG"_j)));
	}
label_32:;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NEW"_j)));
	}
label_33:;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DELPROP"_j)));
	}
label_34:;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TYPEOF"_j)));
	}
label_35:;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GETPROP"_j)));
	}
label_36:;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GETPROPNOWARN"_j)));
	}
label_37:;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETPROP"_j)));
	}
label_38:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GETELEM"_j)));
	}
label_39:;
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETELEM"_j)));
	}
label_40:;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CALL"_j)));
	}
label_41:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NAME"_j)));
	}
label_42:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NUMBER"_j)));
	}
label_43:;
	{
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"STRING"_j)));
	}
label_44:;
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NULL"_j)));
	}
label_45:;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"THIS"_j)));
	}
label_46:;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"FALSE"_j)));
	}
label_47:;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TRUE"_j)));
	}
label_48:;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SHEQ"_j)));
	}
label_49:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SHNE"_j)));
	}
label_50:;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REGEXP"_j)));
	}
label_51:;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BINDNAME"_j)));
	}
label_52:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"THROW"_j)));
	}
label_53:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RETHROW"_j)));
	}
label_54:;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"IN"_j)));
	}
label_55:;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"INSTANCEOF"_j)));
	}
label_56:;
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOCAL_LOAD"_j)));
	}
label_57:;
	{
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GETVAR"_j)));
	}
label_58:;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETVAR"_j)));
	}
label_59:;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CATCH_SCOPE"_j)));
	}
label_60:;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENUM_INIT_KEYS"_j)));
	}
label_61:;
	{
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENUM_INIT_VALUES"_j)));
	}
label_62:;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENUM_INIT_ARRAY"_j)));
	}
label_63:;
	{
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENUM_INIT_VALUES_IN_ORDER"_j)));
	}
label_64:;
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENUM_NEXT"_j)));
	}
label_65:;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ENUM_ID"_j)));
	}
label_66:;
	{
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"THISFN"_j)));
	}
label_67:;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RETURN_RESULT"_j)));
	}
label_68:;
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ARRAYLIT"_j)));
	}
label_69:;
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"OBJECTLIT"_j)));
	}
label_70:;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GET_REF"_j)));
	}
label_71:;
	{
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SET_REF"_j)));
	}
label_72:;
	{
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DEL_REF"_j)));
	}
label_73:;
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REF_CALL"_j)));
	}
label_74:;
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REF_SPECIAL"_j)));
	}
label_77:;
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TRY"_j)));
	}
label_78:;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SEMI"_j)));
	}
label_79:;
	{
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LB"_j)));
	}
label_80:;
	{
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RB"_j)));
	}
label_81:;
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LC"_j)));
	}
label_82:;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RC"_j)));
	}
label_83:;
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LP"_j)));
	}
label_84:;
	{
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RP"_j)));
	}
label_85:;
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"COMMA"_j)));
	}
label_86:;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN"_j)));
	}
label_87:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_BITOR"_j)));
	}
label_88:;
	{
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_BITXOR"_j)));
	}
label_89:;
	{
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_BITAND"_j)));
	}
label_90:;
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_LSH"_j)));
	}
label_91:;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_RSH"_j)));
	}
label_92:;
	{
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_URSH"_j)));
	}
label_93:;
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_ADD"_j)));
	}
label_94:;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_SUB"_j)));
	}
label_95:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_MUL"_j)));
	}
label_96:;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_DIV"_j)));
	}
label_97:;
	{
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ASSIGN_MOD"_j)));
	}
label_98:;
	{
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"HOOK"_j)));
	}
label_99:;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"COLON"_j)));
	}
label_100:;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"OR"_j)));
	}
label_101:;
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"AND"_j)));
	}
label_102:;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"INC"_j)));
	}
label_103:;
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DEC"_j)));
	}
label_104:;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DOT"_j)));
	}
label_105:;
	{
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"FUNCTION"_j)));
	}
label_106:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EXPORT"_j)));
	}
label_107:;
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"IMPORT"_j)));
	}
label_108:;
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"IF"_j)));
	}
label_109:;
	{
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ELSE"_j)));
	}
label_110:;
	{
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SWITCH"_j)));
	}
label_111:;
	{
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CASE"_j)));
	}
label_112:;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DEFAULT"_j)));
	}
label_113:;
	{
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"WHILE"_j)));
	}
label_114:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DO"_j)));
	}
label_115:;
	{
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"FOR"_j)));
	}
label_116:;
	{
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BREAK"_j)));
	}
label_117:;
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CONTINUE"_j)));
	}
label_118:;
	{
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"VAR"_j)));
	}
label_119:;
	{
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"WITH"_j)));
	}
label_120:;
	{
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CATCH"_j)));
	}
label_121:;
	{
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"FINALLY"_j)));
	}
label_122:;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"VOID"_j)));
	}
label_123:;
	{
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RESERVED"_j)));
	}
label_124:;
	{
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EMPTY"_j)));
	}
label_125:;
	{
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BLOCK"_j)));
	}
label_126:;
	{
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LABEL"_j)));
	}
label_127:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TARGET"_j)));
	}
label_128:;
	{
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOOP"_j)));
	}
label_129:;
	{
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EXPR_VOID"_j)));
	}
label_130:;
	{
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"EXPR_RESULT"_j)));
	}
label_131:;
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JSR"_j)));
	}
label_132:;
	{
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SCRIPT"_j)));
	}
label_133:;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TYPEOFNAME"_j)));
	}
label_134:;
	{
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"USE_STACK"_j)));
	}
label_135:;
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETPROP_OP"_j)));
	}
label_136:;
	{
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETELEM_OP"_j)));
	}
label_137:;
	{
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOCAL_BLOCK"_j)));
	}
label_138:;
	{
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SET_REF_OP"_j)));
	}
label_139:;
	{
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TO_OBJECT"_j)));
	}
label_140:;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"TO_DOUBLE"_j)));
	}
label_141:;
	{
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GET"_j)));
	}
label_142:;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SET"_j)));
	}
label_143:;
	{
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LET"_j)));
	}
label_75:;
	{
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"YIELD"_j)));
	}
label_144:;
	{
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CONST"_j)));
	}
label_145:;
	{
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SETCONST"_j)));
	}
label_146:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ARRAYCOMP"_j)));
	}
label_148:;
	{
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"WITHEXPR"_j)));
	}
label_147:;
	{
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LETEXPR"_j)));
	}
label_149:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DEBUGGER"_j)));
	}
label_150:;
	{
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"COMMENT"_j)));
	}
label_151:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GENEXPR"_j)));
	}
label_152:;
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"METHOD"_j)));
	}
label_153:;
	{
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ARROW"_j)));
	}
label_154:;
	{
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"YIELD_STAR"_j)));
	}
label_76:;
	{
	LINE_NUMBER(553);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[0].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_Token_keywordToName_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token:keywordToName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(563);
	switch((frame[0].i)) {
		case 4: goto label_1;
		case 30: goto label_2;
		case 31: goto label_3;
		case 32: goto label_4;
		case 42: goto label_5;
		case 43: goto label_6;
		case 44: goto label_7;
		case 45: goto label_8;
		case 50: goto label_9;
		case 52: goto label_10;
		case 53: goto label_11;
		case 73: goto label_12;
		case 82: goto label_13;
		case 110: goto label_14;
		case 113: goto label_15;
		case 114: goto label_16;
		case 115: goto label_17;
		case 116: goto label_18;
		case 117: goto label_19;
		case 118: goto label_20;
		case 119: goto label_21;
		case 120: goto label_22;
		case 121: goto label_23;
		case 122: goto label_24;
		case 123: goto label_25;
		case 124: goto label_26;
		case 125: goto label_27;
		case 126: goto label_28;
		case 127: goto label_29;
		case 154: goto label_30;
		case 155: goto label_31;
		case 161: goto label_32;
		default: goto label_33;
	}
	}
label_23:;
	{
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"break"_j)));
	}
label_18:;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"case"_j)));
	}
label_24:;
	{
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"continue"_j)));
	}
label_19:;
	{
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"default"_j)));
	}
label_3:;
	{
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	}
label_21:;
	{
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"do"_j)));
	}
label_16:;
	{
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"else"_j)));
	}
label_7:;
	{
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"false"_j)));
	}
label_22:;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"for"_j)));
	}
label_14:;
	{
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"function"_j)));
	}
label_15:;
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"if"_j)));
	}
label_10:;
	{
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"in"_j)));
	}
label_30:;
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"let"_j)));
	}
label_2:;
	{
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"new"_j)));
	}
label_5:;
	{
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"return"_j)));
	}
label_17:;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"switch"_j)));
	}
label_6:;
	{
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"this"_j)));
	}
label_8:;
	{
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"true"_j)));
	}
label_4:;
	{
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"typeof"_j)));
	}
label_25:;
	{
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"var"_j)));
	}
label_29:;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"void"_j)));
	}
label_20:;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"while"_j)));
	}
label_26:;
	{
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"with"_j)));
	}
label_12:;
	{
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"yield"_j)));
	}
label_27:;
	{
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"catch"_j)));
	}
label_31:;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"const"_j)));
	}
label_32:;
	{
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"debugger"_j)));
	}
label_28:;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"finally"_j)));
	}
label_11:;
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"instanceof"_j)));
	}
label_9:;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	}
label_13:;
	{
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"try"_j)));
	}
label_33:;
	{
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Token_isValidToken_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token:isValidToken", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(639);
	if ((frame[0].i) < (jint(-1))) goto label_1;
	}
	{
	if ((frame[0].i) > (167)) goto label_1;
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

void *vtable_rhino_Token[] {
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

static jclass innerClasses[] {
	&class_rhino_Token$CommentType,
};

static FieldMetadata fields[] {
	{ "printTrees", &class_boolean, (intptr_t) &SF_rhino_Token_printTrees, "Z", 25 },
	{ "printICode", &class_boolean, (intptr_t) &SF_rhino_Token_printICode, "Z", 24 },
	{ "printNames", &class_boolean, (intptr_t) &SF_rhino_Token_printNames, "Z", 24 },
	{ "ERROR", &class_int, (intptr_t) &SF_rhino_Token_ERROR, "I", 25 },
	{ "EOF", &class_int, (intptr_t) &SF_rhino_Token_EOF, "I", 25 },
	{ "EOL", &class_int, (intptr_t) &SF_rhino_Token_EOL, "I", 25 },
	{ "FIRST_BYTECODE_TOKEN", &class_int, (intptr_t) &SF_rhino_Token_FIRST_BYTECODE_TOKEN, "I", 25 },
	{ "ENTERWITH", &class_int, (intptr_t) &SF_rhino_Token_ENTERWITH, "I", 25 },
	{ "LEAVEWITH", &class_int, (intptr_t) &SF_rhino_Token_LEAVEWITH, "I", 25 },
	{ "RETURN", &class_int, (intptr_t) &SF_rhino_Token_RETURN, "I", 25 },
	{ "GOTO", &class_int, (intptr_t) &SF_rhino_Token_GOTO, "I", 25 },
	{ "IFEQ", &class_int, (intptr_t) &SF_rhino_Token_IFEQ, "I", 25 },
	{ "IFNE", &class_int, (intptr_t) &SF_rhino_Token_IFNE, "I", 25 },
	{ "SETNAME", &class_int, (intptr_t) &SF_rhino_Token_SETNAME, "I", 25 },
	{ "BITOR", &class_int, (intptr_t) &SF_rhino_Token_BITOR, "I", 25 },
	{ "BITXOR", &class_int, (intptr_t) &SF_rhino_Token_BITXOR, "I", 25 },
	{ "BITAND", &class_int, (intptr_t) &SF_rhino_Token_BITAND, "I", 25 },
	{ "EQ", &class_int, (intptr_t) &SF_rhino_Token_EQ, "I", 25 },
	{ "NE", &class_int, (intptr_t) &SF_rhino_Token_NE, "I", 25 },
	{ "LT", &class_int, (intptr_t) &SF_rhino_Token_LT, "I", 25 },
	{ "LE", &class_int, (intptr_t) &SF_rhino_Token_LE, "I", 25 },
	{ "GT", &class_int, (intptr_t) &SF_rhino_Token_GT, "I", 25 },
	{ "GE", &class_int, (intptr_t) &SF_rhino_Token_GE, "I", 25 },
	{ "LSH", &class_int, (intptr_t) &SF_rhino_Token_LSH, "I", 25 },
	{ "RSH", &class_int, (intptr_t) &SF_rhino_Token_RSH, "I", 25 },
	{ "URSH", &class_int, (intptr_t) &SF_rhino_Token_URSH, "I", 25 },
	{ "ADD", &class_int, (intptr_t) &SF_rhino_Token_ADD, "I", 25 },
	{ "SUB", &class_int, (intptr_t) &SF_rhino_Token_SUB, "I", 25 },
	{ "MUL", &class_int, (intptr_t) &SF_rhino_Token_MUL, "I", 25 },
	{ "DIV", &class_int, (intptr_t) &SF_rhino_Token_DIV, "I", 25 },
	{ "MOD", &class_int, (intptr_t) &SF_rhino_Token_MOD, "I", 25 },
	{ "NOT", &class_int, (intptr_t) &SF_rhino_Token_NOT, "I", 25 },
	{ "BITNOT", &class_int, (intptr_t) &SF_rhino_Token_BITNOT, "I", 25 },
	{ "POS", &class_int, (intptr_t) &SF_rhino_Token_POS, "I", 25 },
	{ "NEG", &class_int, (intptr_t) &SF_rhino_Token_NEG, "I", 25 },
	{ "NEW", &class_int, (intptr_t) &SF_rhino_Token_NEW, "I", 25 },
	{ "DELPROP", &class_int, (intptr_t) &SF_rhino_Token_DELPROP, "I", 25 },
	{ "TYPEOF", &class_int, (intptr_t) &SF_rhino_Token_TYPEOF, "I", 25 },
	{ "GETPROP", &class_int, (intptr_t) &SF_rhino_Token_GETPROP, "I", 25 },
	{ "GETPROPNOWARN", &class_int, (intptr_t) &SF_rhino_Token_GETPROPNOWARN, "I", 25 },
	{ "SETPROP", &class_int, (intptr_t) &SF_rhino_Token_SETPROP, "I", 25 },
	{ "GETELEM", &class_int, (intptr_t) &SF_rhino_Token_GETELEM, "I", 25 },
	{ "SETELEM", &class_int, (intptr_t) &SF_rhino_Token_SETELEM, "I", 25 },
	{ "CALL", &class_int, (intptr_t) &SF_rhino_Token_CALL, "I", 25 },
	{ "NAME", &class_int, (intptr_t) &SF_rhino_Token_NAME, "I", 25 },
	{ "NUMBER", &class_int, (intptr_t) &SF_rhino_Token_NUMBER, "I", 25 },
	{ "STRING", &class_int, (intptr_t) &SF_rhino_Token_STRING, "I", 25 },
	{ "NULL", &class_int, (intptr_t) &SF_rhino_Token_NULL, "I", 25 },
	{ "THIS", &class_int, (intptr_t) &SF_rhino_Token_THIS, "I", 25 },
	{ "FALSE", &class_int, (intptr_t) &SF_rhino_Token_FALSE, "I", 25 },
	{ "TRUE", &class_int, (intptr_t) &SF_rhino_Token_TRUE, "I", 25 },
	{ "SHEQ", &class_int, (intptr_t) &SF_rhino_Token_SHEQ, "I", 25 },
	{ "SHNE", &class_int, (intptr_t) &SF_rhino_Token_SHNE, "I", 25 },
	{ "REGEXP", &class_int, (intptr_t) &SF_rhino_Token_REGEXP, "I", 25 },
	{ "BINDNAME", &class_int, (intptr_t) &SF_rhino_Token_BINDNAME, "I", 25 },
	{ "THROW", &class_int, (intptr_t) &SF_rhino_Token_THROW, "I", 25 },
	{ "RETHROW", &class_int, (intptr_t) &SF_rhino_Token_RETHROW, "I", 25 },
	{ "IN", &class_int, (intptr_t) &SF_rhino_Token_IN, "I", 25 },
	{ "INSTANCEOF", &class_int, (intptr_t) &SF_rhino_Token_INSTANCEOF, "I", 25 },
	{ "LOCAL_LOAD", &class_int, (intptr_t) &SF_rhino_Token_LOCAL_LOAD, "I", 25 },
	{ "GETVAR", &class_int, (intptr_t) &SF_rhino_Token_GETVAR, "I", 25 },
	{ "SETVAR", &class_int, (intptr_t) &SF_rhino_Token_SETVAR, "I", 25 },
	{ "CATCH_SCOPE", &class_int, (intptr_t) &SF_rhino_Token_CATCH_SCOPE, "I", 25 },
	{ "ENUM_INIT_KEYS", &class_int, (intptr_t) &SF_rhino_Token_ENUM_INIT_KEYS, "I", 25 },
	{ "ENUM_INIT_VALUES", &class_int, (intptr_t) &SF_rhino_Token_ENUM_INIT_VALUES, "I", 25 },
	{ "ENUM_INIT_ARRAY", &class_int, (intptr_t) &SF_rhino_Token_ENUM_INIT_ARRAY, "I", 25 },
	{ "ENUM_INIT_VALUES_IN_ORDER", &class_int, (intptr_t) &SF_rhino_Token_ENUM_INIT_VALUES_IN_ORDER, "I", 25 },
	{ "ENUM_NEXT", &class_int, (intptr_t) &SF_rhino_Token_ENUM_NEXT, "I", 25 },
	{ "ENUM_ID", &class_int, (intptr_t) &SF_rhino_Token_ENUM_ID, "I", 25 },
	{ "THISFN", &class_int, (intptr_t) &SF_rhino_Token_THISFN, "I", 25 },
	{ "RETURN_RESULT", &class_int, (intptr_t) &SF_rhino_Token_RETURN_RESULT, "I", 25 },
	{ "ARRAYLIT", &class_int, (intptr_t) &SF_rhino_Token_ARRAYLIT, "I", 25 },
	{ "OBJECTLIT", &class_int, (intptr_t) &SF_rhino_Token_OBJECTLIT, "I", 25 },
	{ "GET_REF", &class_int, (intptr_t) &SF_rhino_Token_GET_REF, "I", 25 },
	{ "SET_REF", &class_int, (intptr_t) &SF_rhino_Token_SET_REF, "I", 25 },
	{ "DEL_REF", &class_int, (intptr_t) &SF_rhino_Token_DEL_REF, "I", 25 },
	{ "REF_CALL", &class_int, (intptr_t) &SF_rhino_Token_REF_CALL, "I", 25 },
	{ "REF_SPECIAL", &class_int, (intptr_t) &SF_rhino_Token_REF_SPECIAL, "I", 25 },
	{ "YIELD", &class_int, (intptr_t) &SF_rhino_Token_YIELD, "I", 25 },
	{ "STRICT_SETNAME", &class_int, (intptr_t) &SF_rhino_Token_STRICT_SETNAME, "I", 25 },
	{ "REF_MEMBER", &class_int, (intptr_t) &SF_rhino_Token_REF_MEMBER, "I", 25 },
	{ "REF_NS_MEMBER", &class_int, (intptr_t) &SF_rhino_Token_REF_NS_MEMBER, "I", 25 },
	{ "REF_NAME", &class_int, (intptr_t) &SF_rhino_Token_REF_NAME, "I", 25 },
	{ "REF_NS_NAME", &class_int, (intptr_t) &SF_rhino_Token_REF_NS_NAME, "I", 25 },
	{ "LAST_BYTECODE_TOKEN", &class_int, (intptr_t) &SF_rhino_Token_LAST_BYTECODE_TOKEN, "I", 25 },
	{ "TRY", &class_int, (intptr_t) &SF_rhino_Token_TRY, "I", 25 },
	{ "SEMI", &class_int, (intptr_t) &SF_rhino_Token_SEMI, "I", 25 },
	{ "LB", &class_int, (intptr_t) &SF_rhino_Token_LB, "I", 25 },
	{ "RB", &class_int, (intptr_t) &SF_rhino_Token_RB, "I", 25 },
	{ "LC", &class_int, (intptr_t) &SF_rhino_Token_LC, "I", 25 },
	{ "RC", &class_int, (intptr_t) &SF_rhino_Token_RC, "I", 25 },
	{ "LP", &class_int, (intptr_t) &SF_rhino_Token_LP, "I", 25 },
	{ "RP", &class_int, (intptr_t) &SF_rhino_Token_RP, "I", 25 },
	{ "COMMA", &class_int, (intptr_t) &SF_rhino_Token_COMMA, "I", 25 },
	{ "ASSIGN", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN, "I", 25 },
	{ "ASSIGN_BITOR", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_BITOR, "I", 25 },
	{ "ASSIGN_BITXOR", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_BITXOR, "I", 25 },
	{ "ASSIGN_BITAND", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_BITAND, "I", 25 },
	{ "ASSIGN_LSH", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_LSH, "I", 25 },
	{ "ASSIGN_RSH", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_RSH, "I", 25 },
	{ "ASSIGN_URSH", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_URSH, "I", 25 },
	{ "ASSIGN_ADD", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_ADD, "I", 25 },
	{ "ASSIGN_SUB", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_SUB, "I", 25 },
	{ "ASSIGN_MUL", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_MUL, "I", 25 },
	{ "ASSIGN_DIV", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_DIV, "I", 25 },
	{ "ASSIGN_MOD", &class_int, (intptr_t) &SF_rhino_Token_ASSIGN_MOD, "I", 25 },
	{ "FIRST_ASSIGN", &class_int, (intptr_t) &SF_rhino_Token_FIRST_ASSIGN, "I", 25 },
	{ "LAST_ASSIGN", &class_int, (intptr_t) &SF_rhino_Token_LAST_ASSIGN, "I", 25 },
	{ "HOOK", &class_int, (intptr_t) &SF_rhino_Token_HOOK, "I", 25 },
	{ "COLON", &class_int, (intptr_t) &SF_rhino_Token_COLON, "I", 25 },
	{ "OR", &class_int, (intptr_t) &SF_rhino_Token_OR, "I", 25 },
	{ "AND", &class_int, (intptr_t) &SF_rhino_Token_AND, "I", 25 },
	{ "INC", &class_int, (intptr_t) &SF_rhino_Token_INC, "I", 25 },
	{ "DEC", &class_int, (intptr_t) &SF_rhino_Token_DEC, "I", 25 },
	{ "DOT", &class_int, (intptr_t) &SF_rhino_Token_DOT, "I", 25 },
	{ "FUNCTION", &class_int, (intptr_t) &SF_rhino_Token_FUNCTION, "I", 25 },
	{ "EXPORT", &class_int, (intptr_t) &SF_rhino_Token_EXPORT, "I", 25 },
	{ "IMPORT", &class_int, (intptr_t) &SF_rhino_Token_IMPORT, "I", 25 },
	{ "IF", &class_int, (intptr_t) &SF_rhino_Token_IF, "I", 25 },
	{ "ELSE", &class_int, (intptr_t) &SF_rhino_Token_ELSE, "I", 25 },
	{ "SWITCH", &class_int, (intptr_t) &SF_rhino_Token_SWITCH, "I", 25 },
	{ "CASE", &class_int, (intptr_t) &SF_rhino_Token_CASE, "I", 25 },
	{ "DEFAULT", &class_int, (intptr_t) &SF_rhino_Token_DEFAULT, "I", 25 },
	{ "WHILE", &class_int, (intptr_t) &SF_rhino_Token_WHILE, "I", 25 },
	{ "DO", &class_int, (intptr_t) &SF_rhino_Token_DO, "I", 25 },
	{ "FOR", &class_int, (intptr_t) &SF_rhino_Token_FOR, "I", 25 },
	{ "BREAK", &class_int, (intptr_t) &SF_rhino_Token_BREAK, "I", 25 },
	{ "CONTINUE", &class_int, (intptr_t) &SF_rhino_Token_CONTINUE, "I", 25 },
	{ "VAR", &class_int, (intptr_t) &SF_rhino_Token_VAR, "I", 25 },
	{ "WITH", &class_int, (intptr_t) &SF_rhino_Token_WITH, "I", 25 },
	{ "CATCH", &class_int, (intptr_t) &SF_rhino_Token_CATCH, "I", 25 },
	{ "FINALLY", &class_int, (intptr_t) &SF_rhino_Token_FINALLY, "I", 25 },
	{ "VOID", &class_int, (intptr_t) &SF_rhino_Token_VOID, "I", 25 },
	{ "RESERVED", &class_int, (intptr_t) &SF_rhino_Token_RESERVED, "I", 25 },
	{ "EMPTY", &class_int, (intptr_t) &SF_rhino_Token_EMPTY, "I", 25 },
	{ "BLOCK", &class_int, (intptr_t) &SF_rhino_Token_BLOCK, "I", 25 },
	{ "LABEL", &class_int, (intptr_t) &SF_rhino_Token_LABEL, "I", 25 },
	{ "TARGET", &class_int, (intptr_t) &SF_rhino_Token_TARGET, "I", 25 },
	{ "LOOP", &class_int, (intptr_t) &SF_rhino_Token_LOOP, "I", 25 },
	{ "EXPR_VOID", &class_int, (intptr_t) &SF_rhino_Token_EXPR_VOID, "I", 25 },
	{ "EXPR_RESULT", &class_int, (intptr_t) &SF_rhino_Token_EXPR_RESULT, "I", 25 },
	{ "JSR", &class_int, (intptr_t) &SF_rhino_Token_JSR, "I", 25 },
	{ "SCRIPT", &class_int, (intptr_t) &SF_rhino_Token_SCRIPT, "I", 25 },
	{ "TYPEOFNAME", &class_int, (intptr_t) &SF_rhino_Token_TYPEOFNAME, "I", 25 },
	{ "USE_STACK", &class_int, (intptr_t) &SF_rhino_Token_USE_STACK, "I", 25 },
	{ "SETPROP_OP", &class_int, (intptr_t) &SF_rhino_Token_SETPROP_OP, "I", 25 },
	{ "SETELEM_OP", &class_int, (intptr_t) &SF_rhino_Token_SETELEM_OP, "I", 25 },
	{ "LOCAL_BLOCK", &class_int, (intptr_t) &SF_rhino_Token_LOCAL_BLOCK, "I", 25 },
	{ "SET_REF_OP", &class_int, (intptr_t) &SF_rhino_Token_SET_REF_OP, "I", 25 },
	{ "TO_OBJECT", &class_int, (intptr_t) &SF_rhino_Token_TO_OBJECT, "I", 25 },
	{ "TO_DOUBLE", &class_int, (intptr_t) &SF_rhino_Token_TO_DOUBLE, "I", 25 },
	{ "GET", &class_int, (intptr_t) &SF_rhino_Token_GET, "I", 25 },
	{ "SET", &class_int, (intptr_t) &SF_rhino_Token_SET, "I", 25 },
	{ "LET", &class_int, (intptr_t) &SF_rhino_Token_LET, "I", 25 },
	{ "CONST", &class_int, (intptr_t) &SF_rhino_Token_CONST, "I", 25 },
	{ "SETCONST", &class_int, (intptr_t) &SF_rhino_Token_SETCONST, "I", 25 },
	{ "SETCONSTVAR", &class_int, (intptr_t) &SF_rhino_Token_SETCONSTVAR, "I", 25 },
	{ "ARRAYCOMP", &class_int, (intptr_t) &SF_rhino_Token_ARRAYCOMP, "I", 25 },
	{ "LETEXPR", &class_int, (intptr_t) &SF_rhino_Token_LETEXPR, "I", 25 },
	{ "WITHEXPR", &class_int, (intptr_t) &SF_rhino_Token_WITHEXPR, "I", 25 },
	{ "DEBUGGER", &class_int, (intptr_t) &SF_rhino_Token_DEBUGGER, "I", 25 },
	{ "COMMENT", &class_int, (intptr_t) &SF_rhino_Token_COMMENT, "I", 25 },
	{ "GENEXPR", &class_int, (intptr_t) &SF_rhino_Token_GENEXPR, "I", 25 },
	{ "METHOD", &class_int, (intptr_t) &SF_rhino_Token_METHOD, "I", 25 },
	{ "ARROW", &class_int, (intptr_t) &SF_rhino_Token_ARROW, "I", 25 },
	{ "YIELD_STAR", &class_int, (intptr_t) &SF_rhino_Token_YIELD_STAR, "I", 25 },
	{ "LAST_TOKEN", &class_int, (intptr_t) &SF_rhino_Token_LAST_TOKEN, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Token, 0, "()V", 1 },
	{ "name", (intptr_t) SM_rhino_Token_name_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "typeToName", (intptr_t) SM_rhino_Token_typeToName_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "keywordToName", (intptr_t) SM_rhino_Token_keywordToName_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "isValidToken", (intptr_t) SM_rhino_Token_isValidToken_int_R_boolean, 0, "(I)Z", 9 },
};

Class class_rhino_Token{
		.nativeName = (intptr_t) "rhino/Token",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Token),
		.classVtable = (intptr_t) vtable_rhino_Token,
		.staticInitializer = (intptr_t) clinit_rhino_Token,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Token,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 167,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Token = registerClass(&class_rhino_Token);

}
