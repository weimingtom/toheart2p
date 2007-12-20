//keybord.h
//ÓÎÏ·ÊäÈë¿ØÖÆ


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
		char up;		//ÉÏ
		char down;		//ÏÂ
		char left;		//×ó
		char right;		//ÓÒ

		char enter;		//»Ø³µ
		char space;		//¿Õ¸ñ
		char bs;		//ºóÍË
		char ctrl;		//CTRL¼ü
		char shift;		//SHIFT¼ü
		char alt;		//ALT¼ü
		char tab;		//TAB¼ü
		char esc;		//ESC¼ü

		char pup;		//PageUp¼ü
		char pdown;		//PageDown¼ü
		char end;		//End¼ü
		char home;		//Home¼ü

		char f1;		//F1¼ü
		char f2;		//F2¼ü
		char f3;		//F3¼ü
		char f4;		//F4¼ü
		char f5;		//F5¼ü
		char f6;		//F6¼ü
		char f7;		//F7¼ü
		char f8;		//F8¼ü
		char f9;		//F9¼ü
		char f10;		//F10¼ü
		char f11;		//F11¼ü
		char f12;		//F12¼ü

		char k0;		//Ğ¡¼üÅÌ0¼ü
		char k1;		//Ğ¡¼üÅÌ1¼ü
		char k2;		//Ğ¡¼üÅÌ2¼ü
		char k3;		//Ğ¡¼üÅÌ3¼ü
		char k4;		//Ğ¡¼üÅÌ4¼ü
		char k5;		//Ğ¡¼üÅÌ5¼ü
		char k6;		//Ğ¡¼üÅÌ6¼ü
		char k7;		//Ğ¡¼üÅÌ7¼ü
		char k8;		//Ğ¡¼üÅÌ8¼ü
		char k9;		//Ğ¡¼üÅÌ9¼ü

		char n0;		//Ğ¡¼üÅÌ0¼ü
		char n1;		//Ğ¡¼üÅÌ1¼ü
		char n2;		//Ğ¡¼üÅÌ2¼ü
		char n3;		//Ğ¡¼üÅÌ3¼ü
		char n4;		//Ğ¡¼üÅÌ4¼ü
		char n5;		//Ğ¡¼üÅÌ5¼ü
		char n6;		//Ğ¡¼üÅÌ6¼ü
		char n7;		//Ğ¡¼üÅÌ7¼ü
		char n8;		//Ğ¡¼üÅÌ8¼ü
		char n9;		//Ğ¡¼üÅÌ9¼ü

		//¼üÅÌÉÏ26¸ö×ÖÄ¸¼ü
		char a;			//¼üÅÌÉÏ×ÖÄ¸A¼ü
		char b;			//¼üÅÌÉÏ×ÖÄ¸B¼ü
		char c;			//¼üÅÌÉÏ×ÖÄ¸C¼ü
		char d;			//¼üÅÌÉÏ×ÖÄ¸D¼ü
		char e;			//¼üÅÌÉÏ×ÖÄ¸E¼ü
		char f;			//¼üÅÌÉÏ×ÖÄ¸F¼ü
		char g;			//¼üÅÌÉÏ×ÖÄ¸G¼ü
		char h;			//¼üÅÌÉÏ×ÖÄ¸H¼ü
		char i;			//¼üÅÌÉÏ×ÖÄ¸I¼ü
		char j;			//¼üÅÌÉÏ×ÖÄ¸J¼ü
		char k;			//¼üÅÌÉÏ×ÖÄ¸K¼ü
		char l;			//¼üÅÌÉÏ×ÖÄ¸L¼ü
		char n;			//¼üÅÌÉÏ×ÖÄ¸N¼ü
		char m;			//¼üÅÌÉÏ×ÖÄ¸M¼ü
		char o;			//¼üÅÌÉÏ×ÖÄ¸O¼ü
		char p;			//¼üÅÌÉÏ×ÖÄ¸P¼ü
		char q;			//¼üÅÌÉÏ×ÖÄ¸Q¼ü
		char r;			//¼üÅÌÉÏ×ÖÄ¸R¼ü
		char s;			//¼üÅÌÉÏ×ÖÄ¸S¼ü
		char t;			//¼üÅÌÉÏ×ÖÄ¸T¼ü
		char u;			//¼üÅÌÉÏ×ÖÄ¸U¼ü
		char v;			//¼üÅÌÉÏ×ÖÄ¸V¼ü
		char w;			//¼üÅÌÉÏ×ÖÄ¸W¼ü
		char x;			//¼üÅÌÉÏ×ÖÄ¸X¼ü
		char y;			//¼üÅÌÉÏ×ÖÄ¸Y¼ü
		char z;			//¼üÅÌÉÏ×ÖÄ¸Z¼ü
	} KEY_STRUCT;			//¼üÅÌÊäÈë×´Ì¬½á¹¹Ìå

	typedef struct
	{
		KEY_STRUCT btn;		//µ±Ç°µÄÊäÈë×´Ì¬
		KEY_STRUCT trg;		//²îÒìÊäÈë×´Ì¬
		KEY_STRUCT btrg;
	} KEY_CONDITION;		//ÊäÈë×´Ì¬½á¹¹Ìå

	extern KEY_CONDITION KeyCond;

	extern void KEY_RenewKeybord(int active);
	extern BOOL KEY_KeyCmp(char *str);


#endif
