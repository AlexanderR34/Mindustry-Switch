#include "arc/backend/sdl/SdlScanmap.h"
#include "java/lang/Object.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_backend_sdl_SdlScanmap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlScanmap *) object;
}

void clinit_arc_backend_sdl_SdlScanmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlScanmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlScanmap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlScanmap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_backend_sdl_SdlScanmap_getCode_int_R_arc_input_KeyCode(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlScanmap:getCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlScanmap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(8);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_5;
		case 7: goto label_6;
		case 8: goto label_7;
		case 9: goto label_8;
		case 10: goto label_9;
		case 11: goto label_10;
		case 12: goto label_11;
		case 13: goto label_12;
		case 14: goto label_13;
		case 15: goto label_14;
		case 16: goto label_15;
		case 17: goto label_16;
		case 18: goto label_17;
		case 19: goto label_18;
		case 20: goto label_19;
		case 21: goto label_20;
		case 22: goto label_21;
		case 23: goto label_22;
		case 24: goto label_23;
		case 25: goto label_24;
		case 26: goto label_25;
		case 27: goto label_26;
		case 28: goto label_27;
		case 29: goto label_28;
		case 30: goto label_29;
		case 31: goto label_30;
		case 32: goto label_31;
		case 33: goto label_32;
		case 34: goto label_33;
		case 35: goto label_34;
		case 36: goto label_35;
		case 37: goto label_36;
		case 38: goto label_37;
		case 39: goto label_38;
		case 40: goto label_39;
		case 41: goto label_40;
		case 42: goto label_41;
		case 43: goto label_42;
		case 44: goto label_43;
		case 45: goto label_44;
		case 46: goto label_45;
		case 47: goto label_46;
		case 48: goto label_47;
		case 49: goto label_48;
		case 50: goto label_2;
		case 51: goto label_49;
		case 52: goto label_50;
		case 53: goto label_51;
		case 54: goto label_52;
		case 55: goto label_53;
		case 56: goto label_54;
		case 57: goto label_55;
		case 58: goto label_56;
		case 59: goto label_57;
		case 60: goto label_58;
		case 61: goto label_59;
		case 62: goto label_60;
		case 63: goto label_61;
		case 64: goto label_62;
		case 65: goto label_63;
		case 66: goto label_64;
		case 67: goto label_65;
		case 68: goto label_66;
		case 69: goto label_67;
		case 70: goto label_68;
		case 71: goto label_69;
		case 72: goto label_70;
		case 73: goto label_71;
		case 74: goto label_72;
		case 75: goto label_73;
		case 76: goto label_74;
		case 77: goto label_75;
		case 78: goto label_76;
		case 79: goto label_77;
		case 80: goto label_78;
		case 81: goto label_79;
		case 82: goto label_80;
		case 83: goto label_2;
		case 84: goto label_54;
		case 85: goto label_81;
		case 86: goto label_44;
		case 87: goto label_82;
		case 88: goto label_39;
		case 89: goto label_29;
		case 90: goto label_30;
		case 91: goto label_31;
		case 92: goto label_32;
		case 93: goto label_33;
		case 94: goto label_34;
		case 95: goto label_35;
		case 96: goto label_36;
		case 97: goto label_37;
		case 98: goto label_38;
		case 99: goto label_53;
		case 100: goto label_48;
		case 101: goto label_83;
		case 102: goto label_84;
		case 103: goto label_2;
		case 104: goto label_2;
		case 105: goto label_2;
		case 106: goto label_2;
		case 107: goto label_2;
		case 108: goto label_2;
		case 109: goto label_2;
		case 110: goto label_2;
		case 111: goto label_2;
		case 112: goto label_2;
		case 113: goto label_2;
		case 114: goto label_2;
		case 115: goto label_2;
		case 116: goto label_2;
		case 117: goto label_2;
		case 118: goto label_85;
		case 119: goto label_2;
		case 120: goto label_2;
		case 121: goto label_2;
		case 122: goto label_2;
		case 123: goto label_2;
		case 124: goto label_2;
		case 125: goto label_2;
		case 126: goto label_2;
		case 127: goto label_86;
		case 128: goto label_2;
		case 129: goto label_2;
		case 130: goto label_2;
		case 131: goto label_2;
		case 132: goto label_2;
		case 133: goto label_52;
		case 134: goto label_2;
		case 135: goto label_2;
		case 136: goto label_2;
		case 137: goto label_2;
		case 138: goto label_2;
		case 139: goto label_2;
		case 140: goto label_2;
		case 141: goto label_2;
		case 142: goto label_2;
		case 143: goto label_2;
		case 144: goto label_2;
		case 145: goto label_2;
		case 146: goto label_2;
		case 147: goto label_2;
		case 148: goto label_2;
		case 149: goto label_2;
		case 150: goto label_2;
		case 151: goto label_2;
		case 152: goto label_2;
		case 153: goto label_2;
		case 154: goto label_2;
		case 155: goto label_2;
		case 156: goto label_87;
		case 157: goto label_2;
		case 158: goto label_2;
		case 159: goto label_2;
		case 160: goto label_2;
		case 161: goto label_2;
		case 162: goto label_2;
		case 163: goto label_2;
		case 164: goto label_2;
		case 165: goto label_2;
		case 166: goto label_2;
		case 167: goto label_2;
		case 168: goto label_2;
		case 169: goto label_2;
		case 170: goto label_2;
		case 171: goto label_2;
		case 172: goto label_2;
		case 173: goto label_2;
		case 174: goto label_2;
		case 175: goto label_2;
		case 176: goto label_2;
		case 177: goto label_2;
		case 178: goto label_2;
		case 179: goto label_2;
		case 180: goto label_2;
		case 181: goto label_2;
		case 182: goto label_2;
		case 183: goto label_2;
		case 184: goto label_2;
		case 185: goto label_2;
		case 186: goto label_2;
		case 187: goto label_2;
		case 188: goto label_2;
		case 189: goto label_2;
		case 190: goto label_2;
		case 191: goto label_2;
		case 192: goto label_2;
		case 193: goto label_2;
		case 194: goto label_2;
		case 195: goto label_2;
		case 196: goto label_2;
		case 197: goto label_2;
		case 198: goto label_2;
		case 199: goto label_2;
		case 200: goto label_2;
		case 201: goto label_2;
		case 202: goto label_2;
		case 203: goto label_88;
		case 204: goto label_2;
		case 205: goto label_2;
		case 206: goto label_89;
		case 207: goto label_2;
		case 208: goto label_2;
		case 209: goto label_2;
		case 210: goto label_2;
		case 211: goto label_2;
		case 212: goto label_2;
		case 213: goto label_2;
		case 214: goto label_2;
		case 215: goto label_2;
		case 216: goto label_2;
		case 217: goto label_2;
		case 218: goto label_2;
		case 219: goto label_2;
		case 220: goto label_2;
		case 221: goto label_2;
		case 222: goto label_2;
		case 223: goto label_2;
		case 224: goto label_90;
		case 225: goto label_91;
		case 226: goto label_92;
		case 227: goto label_93;
		case 228: goto label_94;
		case 229: goto label_95;
		case 230: goto label_96;
		case 231: goto label_93;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(9);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_unknown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(10);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_backspace;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(11);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_tab;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(13);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_enter;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(14);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_escape;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(15);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_space;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_82:;
	{
	LINE_NUMBER(16);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_plus;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(18);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_comma;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(20);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_minus;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_53:;
	{
	LINE_NUMBER(22);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_period;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(24);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_slash;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_81:;
	{
	LINE_NUMBER(25);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_asterisk;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(27);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num0;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(29);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(31);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num2;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(33);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num3;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(35);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num4;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(37);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num5;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(39);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num6;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(41);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num7;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(43);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num8;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_37:;
	{
	LINE_NUMBER(45);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_num9;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_88:;
	{
	LINE_NUMBER(46);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_colon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_49:;
	{
	LINE_NUMBER(47);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_semicolon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_50:;
	{
	LINE_NUMBER(48);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_apostrophe;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(49);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_equals;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_89:;
	{
	LINE_NUMBER(50);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_at;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(51);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_leftBracket;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(52);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_rightBracket;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(54);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_backslash;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_51:;
	{
	LINE_NUMBER(55);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_backtick;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(56);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_a;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(57);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_b;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(58);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_c;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(59);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_d;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(60);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_e;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(61);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(62);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_g;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(63);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_h;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(64);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_i;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(65);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_j;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(66);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_k;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(67);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_l;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(68);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_m;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(69);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_n;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(70);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_o;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(71);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_p;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(72);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_q;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(73);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_r;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(74);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_s;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(75);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_t;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(76);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_u;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(77);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_v;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(78);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_w;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(79);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_x;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(80);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_y;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(81);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_z;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_93:;
	{
	LINE_NUMBER(83);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_sym;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_90:;
	{
	LINE_NUMBER(84);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_94:;
	{
	LINE_NUMBER(85);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_controlRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_91:;
	{
	LINE_NUMBER(86);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_95:;
	{
	LINE_NUMBER(87);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_shiftRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(88);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_capsLock;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(89);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(90);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f2;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_58:;
	{
	LINE_NUMBER(91);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f3;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(92);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f4;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_60:;
	{
	LINE_NUMBER(93);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f5;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(94);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f6;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(95);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f7;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_63:;
	{
	LINE_NUMBER(96);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f8;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_64:;
	{
	LINE_NUMBER(97);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f9;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(98);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f10;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_66:;
	{
	LINE_NUMBER(99);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f11;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_67:;
	{
	LINE_NUMBER(100);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_f12;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_68:;
	{
	LINE_NUMBER(101);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_printScreen;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_69:;
	{
	LINE_NUMBER(102);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_scrollLock;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_70:;
	{
	LINE_NUMBER(103);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_pause;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_71:;
	{
	LINE_NUMBER(104);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_insert;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_74:;
	{
	LINE_NUMBER(105);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_del;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_72:;
	{
	LINE_NUMBER(106);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_home;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_75:;
	{
	LINE_NUMBER(107);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_end;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_73:;
	{
	LINE_NUMBER(108);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_pageUp;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_76:;
	{
	LINE_NUMBER(109);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_pageDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_77:;
	{
	LINE_NUMBER(110);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_right;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_78:;
	{
	LINE_NUMBER(111);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_left;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_79:;
	{
	LINE_NUMBER(112);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_down;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_80:;
	{
	LINE_NUMBER(113);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_up;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_83:;
	{
	LINE_NUMBER(114);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_application;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_84:;
	{
	LINE_NUMBER(115);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_power;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_85:;
	{
	LINE_NUMBER(116);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_menu;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_86:;
	{
	LINE_NUMBER(117);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_mute;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_87:;
	{
	LINE_NUMBER(118);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_clear;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_92:;
	{
	LINE_NUMBER(119);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_altLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_96:;
	{
	LINE_NUMBER(120);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_altRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(122);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_unknown;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlScanmap[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlScanmap, 0, "()V", 1 },
	{ "getCode", (intptr_t) SM_arc_backend_sdl_SdlScanmap_getCode_int_R_arc_input_KeyCode, 0, "(I)Larc/input/KeyCode;", 9 },
};

Class class_arc_backend_sdl_SdlScanmap{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlScanmap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlScanmap),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlScanmap,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlScanmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlScanmap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlScanmap = registerClass(&class_arc_backend_sdl_SdlScanmap);

}
