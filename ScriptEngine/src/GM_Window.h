//------------------------------------------------------------------------
//  Project Name   :  未定（仮）
//  File Name      :  GM_Window.h
//  Copyright      :  AQUA (Leaf)  since 2000 - 
//                                 Programd by.  Miyakusa Masakazu
//------------------------------------------------------------------------
// ★アドベンチャーシステム管理（ゲーム寄り） ヘッダ

#ifndef	_GM_WINDOW_H_
#define _GM_WINDOW_H_


typedef struct
{
	int		flag;
	int		type;		//保存模式；读取模式

	int		cnt;
	int		mode;		//当前窗口的状态　SAV_NOT, SAV_OPEN, SAV_CLOSE, SAV_LOAD_OPEN, SAV_LOAD_CLOSE, SAV_LOAD_CHECK, SAV_NORMAL, 

	int		page;		//当前的页号
	int		select;		//存档窗口高亮显示对象的索引号（通常0-9表示第0至第9号存档）

	int		load_flag;	//加载存档模式标志  ON  OFF
	int		save_flag;	//保存存档模式标志  ON  OFF

	BOOL	file[10];
	int		new_no;		//最新存档的存档索引号
}SAVE_WINDOW;		//存档窗口设定类

extern SAVE_WINDOW		SaveWindow;

#define SW_SAVE_MODE	0			//打开进度窗口模式：保存模式
#define SW_LOAD_MODE	1			//打开进度窗口模式：加载模式
#define SW_LOAD_MODE2	2			//打开进度窗口模式：加载模式2

extern void GWIN_SetSaveLoadWindow( int type, int bmp_set, int grp_set, int txt_set, int grp_bak, int txt_bak, int mus_lay, int mus_bak );
extern int  GWIN_ControlSaveLoadWindow(void);

extern void GWIN_SetSideBarWindow( int bmp_set, int grp_set, int txt_set, int mus_lay, int mus_bak );
extern int GWIN_ControlSideBarWindow(void);


extern void GWIN_SetSettingWindow( int bmp_set, int grp_set, int txt_set, int grp_bak, int txt_bak, int mus_lay, int mus_bak, int title );
extern BOOL GWIN_ControlSettingWindow(void);

#endif//_GM_WINDOW_H_
