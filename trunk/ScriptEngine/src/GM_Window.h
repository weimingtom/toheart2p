//------------------------------------------------------------------------
//  Project Name   :  δ��������
//  File Name      :  GM_Window.h
//  Copyright      :  AQUA (Leaf)  since 2000 - 
//                                 Programd by.  Miyakusa Masakazu
//------------------------------------------------------------------------
// �異�ɥ٥����`�����ƥ�������`��Ĥ꣩ �إå�

#ifndef	_GM_WINDOW_H_
#define _GM_WINDOW_H_


typedef struct
{
	int		flag;
	int		type;		//����ģʽ����ȡģʽ

	int		cnt;
	int		mode;		//��ǰ���ڵ�״̬��SAV_NOT, SAV_OPEN, SAV_CLOSE, SAV_LOAD_OPEN, SAV_LOAD_CLOSE, SAV_LOAD_CHECK, SAV_NORMAL, 

	int		page;		//��ǰ��ҳ��
	int		select;		//�浵���ڸ�����ʾ����������ţ�ͨ��0-9��ʾ��0����9�Ŵ浵��

	int		load_flag;	//���ش浵ģʽ��־  ON  OFF
	int		save_flag;	//����浵ģʽ��־  ON  OFF

	BOOL	file[10];
	int		new_no;		//���´浵�Ĵ浵������
}SAVE_WINDOW;		//�浵�����趨��

extern SAVE_WINDOW		SaveWindow;

#define SW_SAVE_MODE	0			//�򿪽��ȴ���ģʽ������ģʽ
#define SW_LOAD_MODE	1			//�򿪽��ȴ���ģʽ������ģʽ
#define SW_LOAD_MODE2	2			//�򿪽��ȴ���ģʽ������ģʽ2

extern void GWIN_SetSaveLoadWindow( int type, int bmp_set, int grp_set, int txt_set, int grp_bak, int txt_bak, int mus_lay, int mus_bak );
extern int  GWIN_ControlSaveLoadWindow(void);

extern void GWIN_SetSideBarWindow( int bmp_set, int grp_set, int txt_set, int mus_lay, int mus_bak );
extern int GWIN_ControlSideBarWindow(void);


extern void GWIN_SetSettingWindow( int bmp_set, int grp_set, int txt_set, int grp_bak, int txt_bak, int mus_lay, int mus_bak, int title );
extern BOOL GWIN_ControlSettingWindow(void);

#endif//_GM_WINDOW_H_
