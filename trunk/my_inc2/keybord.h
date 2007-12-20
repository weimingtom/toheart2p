//keybord.h
//��Ϸ�������


#ifndef _KEYBORD_H_
	#define _KEYBORD_H_

	#define VK_0	'0'
	#define VK_1	'1'
	#define VK_2	'2'
	#define VK_3	'3'
	#define VK_4	'4'
	#define VK_5	'5'
	#define VK_6	'6'
	#define VK_7	'7'
	#define VK_8	'8'
	#define VK_9	'9'


	#define VK_A	'A'
	#define VK_B	'B'
	#define VK_C	'C'
	#define VK_D	'D'
	#define VK_E	'E'
	#define VK_F	'F'
	#define VK_G	'G'
	#define VK_H	'H'
	#define VK_I	'I'
	#define VK_J	'J'
	#define VK_K	'K'
	#define VK_L	'L'
	#define VK_M	'M'
	#define VK_N	'N'
	#define VK_O	'O'
	#define VK_P	'P'
	#define VK_Q	'Q'
	#define VK_R	'R'
	#define VK_S	'S'
	#define VK_T	'T'
	#define VK_U	'U'
	#define VK_V	'V'
	#define VK_W	'W'
	#define VK_X	'X'
	#define VK_Y	'Y'
	#define VK_Z	'Z'

	typedef struct
	{
		char up;		//��
		char down;		//��
		char left;		//��
		char right;		//��

		char enter;		//�س�
		char space;		//�ո�
		char bs;		//����
		char ctrl;		//CTRL��
		char shift;		//SHIFT��
		char alt;		//ALT��
		char tab;		//TAB��
		char esc;		//ESC��

		char pup;		//PageUp��
		char pdown;		//PageDown��
		char end;		//End��
		char home;		//Home��

		char f1;		//F1��
		char f2;		//F2��
		char f3;		//F3��
		char f4;		//F4��
		char f5;		//F5��
		char f6;		//F6��
		char f7;		//F7��
		char f8;		//F8��
		char f9;		//F9��
		char f10;		//F10��
		char f11;		//F11��
		char f12;		//F12��

		char k0;		//С����0��
		char k1;		//С����1��
		char k2;		//С����2��
		char k3;		//С����3��
		char k4;		//С����4��
		char k5;		//С����5��
		char k6;		//С����6��
		char k7;		//С����7��
		char k8;		//С����8��
		char k9;		//С����9��

		char n0;		//С����0��
		char n1;		//С����1��
		char n2;		//С����2��
		char n3;		//С����3��
		char n4;		//С����4��
		char n5;		//С����5��
		char n6;		//С����6��
		char n7;		//С����7��
		char n8;		//С����8��
		char n9;		//С����9��

		//������26����ĸ��
		char a;			//��������ĸA��
		char b;			//��������ĸB��
		char c;			//��������ĸC��
		char d;			//��������ĸD��
		char e;			//��������ĸE��
		char f;			//��������ĸF��
		char g;			//��������ĸG��
		char h;			//��������ĸH��
		char i;			//��������ĸI��
		char j;			//��������ĸJ��
		char k;			//��������ĸK��
		char l;			//��������ĸL��
		char n;			//��������ĸN��
		char m;			//��������ĸM��
		char o;			//��������ĸO��
		char p;			//��������ĸP��
		char q;			//��������ĸQ��
		char r;			//��������ĸR��
		char s;			//��������ĸS��
		char t;			//��������ĸT��
		char u;			//��������ĸU��
		char v;			//��������ĸV��
		char w;			//��������ĸW��
		char x;			//��������ĸX��
		char y;			//��������ĸY��
		char z;			//��������ĸZ��
	} KEY_STRUCT;			//��������״̬�ṹ��

	typedef struct
	{
		KEY_STRUCT btn;		//��ǰ������״̬
		KEY_STRUCT trg;		//��������״̬
		KEY_STRUCT btrg;
	} KEY_CONDITION;		//����״̬�ṹ��

	extern KEY_CONDITION KeyCond;

	extern void KEY_RenewKeybord(int active);
	extern BOOL KEY_KeyCmp(char *str);


#endif
