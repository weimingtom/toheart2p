#ifndef _ESC_H__
#define _ESC_H__

//#ifndef ENCODE
typedef struct 
{
	char			*opr;
	unsigned short	code;
} OPRLIST;
//#endif//ENCODE

enum 
{
	ESC_B=64,
	ESC_BT,
	ESC_BC,
	ESC_BCT,
	ESC_BD,
	ESC_BR,
	ESC_BF,
	ESC_V,
	ESC_H,
	//
	ESC_S,
	ESC_Z,
	ESC_FI,
	ESC_FIF,
	ESC_FO,
	ESC_FOF,
	ESC_FB,
	ESC_PFI,
	ESC_PFO,
	ESC_PWI,
	ESC_PWO,
	//
	ESC_Q,
	ESC_F,
	//
	ESC_C,
	ESC_CR,

	ESC_CP,
	ESC_CL,
	ESC_CY,
	ESC_CB,
	ESC_CA,
	ESC_CW,
	ESC_CRW,
	//
	ESC_W,
	ESC_WR,
	//
	ESC_KW,
	ESC_K,
	//
	ESC_M,
	ESC_MS,
	ESC_MP,
	ESC_MV,
	ESC_MW,
	//
	ESC_SE,
	ESC_SEP,
	ESC_SES,
	ESC_SEW,
	ESC_SEV,
	ESC_SEVW,
	//
	ESC_SETVOLUMEVOICECHAR,
	ESC_SETVOLUMEVOICESCRIPT,

	ESC_SV,
	ESC_SVEX,

	ESC_VV,
	ESC_VA,
	ESC_VB,
	ESC_VC,
	ESC_VX,
	ESC_VW,
	ESC_VS,
	ESC_VI,
	//
	ESC_R,
	ESC_RC,
	ESC_RR,
	//
	ESC_LF,
	//
	ESC_WE,
	ESC_WER,

	//**********  �ͥ�٥�����  ***************************************************

	ESC_SETFLAG,
	ESC_GETFLAG,

	ESC_SETGAMEFLAG,
	ESC_GETGAMEFLAG,

	ESC_LOADSCRIPT,
	ESC_GAMEEND,
	ESC_CALLFUNC,

	ESC_VIEWCLOCK,

	ESC_SETWEATHERMODE,

	ESC_SETTIMEMODE,
	ESC_SETTIMEBACK,
	ESC_SETTIMECHAR,

	ESC_SETMATRIX,
	ESC_SHOWCHIPBACK,
	ESC_POSECHIPBACK,
	ESC_PLAYCHIPBACK,

	ESC_SETCHIPBACK,
	ESC_SETCHIPPARTS,
	ESC_SETCHIPSCROLL,
	ESC_SETCHIPSCROLL2,
	ESC_SETCHIPSCROLLSPEED,
	ESC_WAITCHIPSCROLL,
	ESC_WAITCHIPSCROLLSPEED,

	ESC_SETCHIPCHARCASH,
	ESC_RESETCHIPCHARCASH,

	ESC_SETCHIPCHAR,
	ESC_SETCHIPCHARANI,
	ESC_RESETCHIPCHAR,
	ESC_SETCHIPCHARPARAM,
	ESC_SETCHIPCHARBRIGHT,
	ESC_SETCHIPCHARMOVE,
	ESC_SETCHIPCHARMOVE2,
	ESC_SETCHIPCHARMOVESPEED,
	ESC_GETCHIPCHARMOVE,
	ESC_GETCHIPCHARMOVESPEED,
	ESC_COPYCHIPCHARPOS,
	ESC_SETCHIPCHARREV,
	ESC_THROUGHCHIPCHARANI,
	ESC_WAITCHIPCHARREPEAT,
	ESC_WAITCHIPCHARANI,
	ESC_WAITCHIPCHARANILOOP,
	ESC_WAITCHIPCHARAMOVE,

	ESC_GETBACK,
	ESC_SETBACK,
	ESC_SETBACK2,
	ESC_SETCG,
	ESC_SETCG2,
	ESC_SETBACKPOS,
	ESC_SETBACKPOSZ,
	ESC_SETBACKSCROLL,
	ESC_SETBACKSCROLLZ,
	ESC_SETBACKCSCOPE,
	ESC_WAITBACKCSCOPE,
	ESC_LOCKBACKCSCOPE,
	ESC_SETBACKFADEIN,
	ESC_SETBACKFADEOUT,
	ESC_SETBACKFADERGB,

	ESC_SETSHAKE,
	ESC_STOPSHAKE,

	ESC_SETFLASH,

	ESC_SETCHAR,
	ESC_RESETCHAR,
	ESC_SETCHARPOSE,
	ESC_SETCHARLOCATE,
	ESC_SETCHARLAYER,
	ESC_WAITCHAR,

	ESC_SETBLOCK,
	ESC_SETWINDOW,
	ESC_RESETWINDOW,

	ESC_SETMESSAGE,
	ESC_SETMESSAGE2,
	ESC_SETMESSAGEEX,
	ESC_SETCHIPMESSAGE,
	ESC_ADDMESSAGE,
	ESC_ADDMESSAGE2,
	ESC_SETMESSAGEWAIT,
	ESC_RESETMESSAGE,

	ESC_WAITKEY,

	ESC_SETSELECTMES,
	ESC_SETSELECTMESEX,
	ESC_SETSELECT,
	ESC_SETSELECTEX,

	ESC_PLAYBGM,
	ESC_PLAYBGMEX,
	ESC_STOPBGM,
	ESC_STOPBGMEX,
	ESC_SETVOLUMEBGM,
	ESC_SETVOLUMEBGMEX,

	ESC_PLAYSE,
	ESC_PLAYSEEX,
	ESC_STOPSEEX,
	ESC_SETVOLUMESE,

	ESC_SETWEATHER,
	ESC_CHANGEWEATHER,
	ESC_RESETWEATHER,
	ESC_SETLENSFREA,
	ESC_SETWAVEFFECT,
	ESC_RESETWAVEFFECT,

	ESC_SETWARP,
	ESC_RESETWARP,

	ESC_WAITFRAME,

	ESC_SETBMP,
	ESC_SETBMPEX,
	ESC_SETBMP4BMP,
	ESC_SETBMPPRIM,
	ESC_RESETBMP,
	ESC_RESETBMPALL,
	ESC_SETBMPANIME,
	ESC_RESETBMPANIME,
	ESC_WAITBMPANIME,
	ESC_SETTITLE,
	ESC_SETENDING,
	ESC_SETOPENING,

	ESC_SETAVI,
	ESC_RESETAVI,
	ESC_WAITAVI,
	ESC_SETAVIFULL,
	ESC_WAITAVIFULL,

	ESC_SETBMPDISP,
	ESC_SETBMPLAYER,
	ESC_SETBMPPARAM,
	ESC_SETBMPREVPARAM,
	ESC_SETBMPBRIGHT,
	ESC_SETBMPMOVE,
	ESC_SETBMPPOS,
	ESC_SETBMPZOOM,
	ESC_SETBMPZOOM2,

	ESC_SETDEMOFLAG,
	ESC_SETSCENENO,
	ESC_SETENDINGNO,
	ESC_SETREPLAYNO,

	ESC_SETSOUNDEVENT,
	ESC_SETSOUNDEVENTVOLUME,

	ESC_SETPOTAPOTA,

	ESC_GETTIME,
	ESC_WAITTIME,

	ESC_SETTEXTFORMAT,
	ESC_SETTEXTSYNC,
	ESC_SETTEXT,
	ESC_SETTEXTEX,
	ESC_RESETTEXT,
	ESC_WAITTEXT,
	ESC_RESETTEXTALL,

	ESC_SETDEMOFADEFLAG,

	ESC_MOV2,
	ESC_SIN,
	ESC_COS,
	ESC_ABS,

	ESC_SETCUTCUT,

	ESC_SETNOISE,
	ESC_T,

	ESC_SETUSOERR,
	ESC_LOADSCRIPTNUM,

	ESC_SETRIPPLE,
	ESC_SETRIPPLESET,
	ESC_WAITRIPPLE,

	ESC_SETRIPPLELOST,
	ESC_MLW,
	ESC_VT,
	ESC_HT,

	ESC_SETMAPEVENT,
	ESC_VIB,


	ESC_VIEWCALENDER,

	ESC_SETSAKURA,
	ESC_STOPSAKURA,

	ESC_SKIPDATE,

	ESC_SETMOVIE,
	ESC_DEBUGBOX,

	ESC_VHFLAG,

	ESC_GETSYSTEMTIME,

	ESC_OPR_MAX,
};

//#ifdef MODE
OPRLIST EventOprList[] = {
	/*EventOprList_Start*/

	//�����v��
	{	"B",					ESC_B			},	//
	{	"BT",					ESC_BT			},	//
	{	"BC",					ESC_BC			},	//
	{	"BCT",					ESC_BCT			},	//
	{	"BD",					ESC_BD			},	//
	{	"BR",					ESC_BR			},	//
	{	"BF",					ESC_BF			},	//
	{	"V",					ESC_V			},	//
	{	"H",					ESC_H			},	//

	{	"S",					ESC_S			},	//
	{	"Z",					ESC_Z			},	//
	{	"FI",					ESC_FI			},	//
	{	"FIF",					ESC_FIF			},	//
	{	"FO",					ESC_FO			},	//
	{	"FOF",					ESC_FOF			},	//
	{	"FB",					ESC_FB			},	//
	{	"PFI",					ESC_PFI			},	//
	{	"PFO",					ESC_PFO			},	//
	{	"PWI",					ESC_PWI			},	//
	{	"PWO",					ESC_PWO			},	//

	{	"Q",					ESC_Q			},	//
	{	"F",					ESC_F			},	//

	{	"C",					ESC_C			},	//
	{	"CR",					ESC_CR			},	//
	{	"CP",					ESC_CP			},	//
	{	"CL",					ESC_CL			},	//
	{	"CY",					ESC_CY			},	//
	{	"CB",					ESC_CB			},	//
	{	"CA",					ESC_CA			},	//
	{	"CW",					ESC_CW			},	//
	{	"CRW",					ESC_CRW			},	//

	{	"W",					ESC_W			},	//
	{	"WR",					ESC_WR			},	//

	{	"KW",					ESC_KW			},	//
	{	"K",					ESC_K			},	//

	{	"M",					ESC_M			},	//
	{	"MS",					ESC_MS			},	//
	{	"MP",					ESC_MP			},	//
	{	"MV",					ESC_MV			},	//
	{	"MW",					ESC_MW			},	//

	{	"SE",					ESC_SE			},	//
	{	"SEP",					ESC_SEP			},	//
	{	"SES",					ESC_SES			},	//
	{	"SEW",					ESC_SEW			},	//
	{	"SEV",					ESC_SEV			},	//
	{	"SEVW",					ESC_SEVW		},	//

	{	"SetVolumeVoiceChar",	ESC_SETVOLUMEVOICECHAR	},
	{	"SetVolumeVoiceScript",	ESC_SETVOLUMEVOICESCRIPT	},
	{	"SV",					ESC_SV			},	//
	{	"SVEX",					ESC_SVEX		},	//

	{	"VV",					ESC_VV			},	//
	{	"VA",					ESC_VA			},	//
	{	"VB",					ESC_VB			},	//
	{	"VC",					ESC_VC			},	//
	{	"VX",					ESC_VX			},	//
	{	"VW",					ESC_VW			},	//
	{	"VS",					ESC_VS			},	//
	{	"VI",					ESC_VI			},	//

	{	"R",					ESC_R			},	//
	{	"RC",					ESC_RC			},	//
	{	"RR",					ESC_RR			},	//

	{	"LF",					ESC_LF			},	//

	{	"WE",					ESC_WE			},	//
	{	"WER",					ESC_WER			},	//

	//�ͥ�٥��v��
	{	"SetFlag",				ESC_SETFLAG			},	//
	{	"GetFlag",				ESC_GETFLAG			},	//

	{	"SetGameFlag",			ESC_SETGAMEFLAG		},	//
	{	"GetGameFlag",			ESC_GETGAMEFLAG		},	//

	{	"LoadScript",			ESC_LOADSCRIPT		},	//
	{	"GameEnd",				ESC_GAMEEND			},	//
	{	"CallFunc",				ESC_CALLFUNC		},	//


	{	"ViewClock",		ESC_VIEWCLOCK	},	//

	{	"SetWeatherMode",		ESC_SETWEATHERMODE	},	//

	{	"SetTimeMode",			ESC_SETTIMEMODE		},	//
	{	"SetTimeBack",			ESC_SETTIMEBACK		},	//
	{	"SetTimeChar",			ESC_SETTIMECHAR		},	//

	{	"SetMatrix",			ESC_SETMATRIX		},	//
	{	"ShowChipBack",			ESC_SHOWCHIPBACK	},	//
	{	"PoseChipBack",			ESC_POSECHIPBACK	},	//
	{	"PlayChipBack",			ESC_PLAYCHIPBACK	},	//

	{	"SetChipBack",			ESC_SETCHIPBACK		},	//
	{	"SetChipParts",			ESC_SETCHIPPARTS	},	//
	{	"SetChipScroll",		ESC_SETCHIPSCROLL	},	//
	{	"SetChipScroll2",		ESC_SETCHIPSCROLL2	},	//
	{	"SetChipScrollSpeed",	ESC_SETCHIPSCROLLSPEED	},	//
	{	"WaitChipScroll",		ESC_WAITCHIPSCROLL		},	//
	{	"WaitChipScrollSpeed",	ESC_WAITCHIPSCROLLSPEED	},	//

	{	"SetChipCharCash",		ESC_SETCHIPCHARCASH		},	//
	{	"ResetChipCharCash",	ESC_RESETCHIPCHARCASH	},	//

	{	"SetChipChar",			ESC_SETCHIPCHAR			},	//
	{	"SetChipCharAni",		ESC_SETCHIPCHARANI		},	//
	{	"ResetChipChar",		ESC_RESETCHIPCHAR		},	//
	{	"SetChipCharParam",		ESC_SETCHIPCHARPARAM	},	//
	{	"SetChipCharBright",	ESC_SETCHIPCHARBRIGHT	},	//
	{	"SetChipCharMove",		ESC_SETCHIPCHARMOVE		},	//
	{	"SetChipCharMove2",		ESC_SETCHIPCHARMOVE2	},	//
	{	"SetChipCharMoveSpeed",	ESC_SETCHIPCHARMOVESPEED},	//
	{	"GetChipCharMove",		ESC_GETCHIPCHARMOVE		},	//
	{	"GetChipCharMoveSpeed",	ESC_GETCHIPCHARMOVESPEED},	//
	{	"CopyChipCharPos",		ESC_COPYCHIPCHARPOS		},	//
	{	"SetChipCharRev",		ESC_SETCHIPCHARREV		},	//
	{	"ThroughChipCharAni",	ESC_THROUGHCHIPCHARANI	},	//

	{	"WaitChipCharRepeat",	ESC_WAITCHIPCHARREPEAT	},	//
	{	"WaitChipCharAni",		ESC_WAITCHIPCHARANI		},	//
	{	"WaitChipCharAniLoop",	ESC_WAITCHIPCHARANILOOP	},	//
	{	"WaitChipCharMove",		ESC_WAITCHIPCHARAMOVE	},	//

	{	"GetBack",				ESC_GETBACK			},	//
	{	"SetBack",				ESC_SETBACK			},	//
	{	"SetBack2",				ESC_SETBACK2		},	//
	{	"SetCg",				ESC_SETCG			},	//
	{	"SetCg2",				ESC_SETCG2			},	//
	{	"SetBackPos",			ESC_SETBACKPOS		},	//
	{	"SetBackPosZ",			ESC_SETBACKPOSZ		},	//
	{	"SetBackScroll",		ESC_SETBACKSCROLL	},	//
	{	"SetBackScrollZ",		ESC_SETBACKSCROLLZ	},	//
	{	"SetBackCScope",		ESC_SETBACKCSCOPE	},	//
	{	"WaitBackCScope",		ESC_WAITBACKCSCOPE	},	//
	{	"LockBackCScope",		ESC_LOCKBACKCSCOPE	},	//
	{	"SetBackFadeIn",		ESC_SETBACKFADEIN	},	//
	{	"SetBackFadeOut",		ESC_SETBACKFADEOUT	},	//
	{	"SetBackFadeRGB",		ESC_SETBACKFADERGB	},	//

	{	"SetShake",				ESC_SETSHAKE		},	//
	{	"StopShake",			ESC_STOPSHAKE		},	//

	{	"SetFlash",				ESC_SETFLASH		},	//

	{	"SetChar",				ESC_SETCHAR			},	//
	{	"ResetChar",			ESC_RESETCHAR		},	//
	{	"SetCharPose",			ESC_SETCHARPOSE		},	//
	{	"SetCharLocate",		ESC_SETCHARLOCATE	},	//
	{	"SetCharLayer",			ESC_SETCHARLAYER	},	//
	{	"WaitChar",				ESC_WAITCHAR		},	//

	{	"SetBlock",				ESC_SETBLOCK		},	//
	{	"SetWindow",			ESC_SETWINDOW		},	//
	{	"ResetWindow",			ESC_RESETWINDOW		},	//
	{	"SetMessage",			ESC_SETMESSAGE		},	//
	{	"SetMessage2",			ESC_SETMESSAGE2		},	//
	{	"SetMessageEx",			ESC_SETMESSAGEEX	},	//
	{	"SetChipMessage",		ESC_SETCHIPMESSAGE	},	//

	{	"AddMessage",			ESC_ADDMESSAGE		},	//
	{	"AddMessage2",			ESC_ADDMESSAGE2		},	//
	{	"SetMessageWait",		ESC_SETMESSAGEWAIT	},	//
	{	"ResetMessage",			ESC_RESETMESSAGE	},	//

	{	"WaitKey",				ESC_WAITKEY			},	//

	{	"SetSelectMes",			ESC_SETSELECTMES	},	//
	{	"SetSelectMesEx",		ESC_SETSELECTMESEX	},	//
	{	"SetSelect",			ESC_SETSELECT		},	//
	{	"SetSelectEx",			ESC_SETSELECTEX		},	//

	{	"PlayBgm",				ESC_PLAYBGM			},	//
	{	"PlayBgmEx",			ESC_PLAYBGMEX		},	//
	{	"StopBgm",				ESC_STOPBGM			},	//
	{	"StopBgmEx",			ESC_STOPBGMEX		},	//
	{	"SetVolumeBgm",			ESC_SETVOLUMEBGM	},	//
	{	"SetVolumeBgmEx",		ESC_SETVOLUMEBGMEX	},	//

	{	"PlaySe",				ESC_PLAYSE			},	//
	{	"PlaySeEx",				ESC_PLAYSEEX		},	//
	{	"StopSeEx",				ESC_STOPSEEX		},	//
	{	"SetVolumeSe",			ESC_SETVOLUMESE		},	//

	{	"SetWeather",			ESC_SETWEATHER		},	//
	{	"ChangeWeather",		ESC_CHANGEWEATHER	},	//
	{	"ResetWeather",			ESC_RESETWEATHER	},	//
	{	"SetLensFrea",			ESC_SETLENSFREA		},	//
	{	"SetWavEffect",			ESC_SETWAVEFFECT	},	//
	{	"ResetWavEffect",		ESC_RESETWAVEFFECT	},	//

	{	"SetWarp",				ESC_SETWARP			},	//
	{	"ResetWarp",			ESC_RESETWARP		},	//

	{	"WaitFrame",			ESC_WAITFRAME		},	//

	{	"SetBmp",				ESC_SETBMP			},	//
	{	"SetBmpEx",				ESC_SETBMPEX		},	//
	{	"SetBmp4Bmp",			ESC_SETBMP4BMP		},	//
	{	"SetBmpPrim",			ESC_SETBMPPRIM		},	//
	{	"ResetBmp",				ESC_RESETBMP		},	//
	{	"ResetBmpAll",			ESC_RESETBMPALL		},	//
	{	"SetBmpAnime",			ESC_SETBMPANIME		},	//
	{	"ResetBmpAnime",		ESC_RESETBMPANIME	},	//
	{	"WaitBmpAnime",			ESC_WAITBMPANIME	},	//
	{	"SetTitle",				ESC_SETTITLE		},	//
	{	"SetEnding",			ESC_SETENDING		},	//
	{	"SetOpening",			ESC_SETOPENING		},	//

	{	"SetAvi",				ESC_SETAVI			},	//
	{	"ResetAvi",				ESC_RESETAVI		},	//
	{	"WaitAvi",				ESC_WAITAVI			},	//
	{	"SetAviFull",			ESC_SETAVIFULL		},	//
	{	"WaitAviFull",			ESC_WAITAVIFULL		},	//

	{	"SetBmpDisp",			ESC_SETBMPDISP		},	//
	{	"SetBmpLayer",			ESC_SETBMPLAYER		},	//
	{	"SetBmpParam",			ESC_SETBMPPARAM		},	//
	{	"SetBmpRevParam",		ESC_SETBMPREVPARAM	},	//
	{	"SetBmpBright",			ESC_SETBMPBRIGHT	},	//
	{	"SetBmpMove",			ESC_SETBMPMOVE		},	//
	{	"SetBmpPos",			ESC_SETBMPPOS		},	//
	{	"SetBmpZoom",			ESC_SETBMPZOOM		},	//
	{	"SetBmpZoom2",			ESC_SETBMPZOOM2		},	//

	{	"SetDemoFlag",			ESC_SETDEMOFLAG		},	//
	{	"SetSceneNo",			ESC_SETSCENENO		},	//
	{	"SetEndingNo",			ESC_SETENDINGNO		},	//
	{	"SetReplayNo",			ESC_SETREPLAYNO		},	//

	{	"SetSoundEvent",		ESC_SETSOUNDEVENT	},	//
	{	"SetSoundEventVolume",	ESC_SETSOUNDEVENTVOLUME	},	//

	{	"SetPotaPota",			ESC_SETPOTAPOTA		},	//

	{	"GetTime",				ESC_GETTIME			},	//
	{	"WaitTime",				ESC_WAITTIME		},	//

	{	"SetTextFormat",		ESC_SETTEXTFORMAT	},	//
	{	"SetTextSync",			ESC_SETTEXTSYNC		},	//		
	{	"SetText",				ESC_SETTEXT			},	//
	{	"SetTextEx",			ESC_SETTEXTEX		},	//
	{	"ResetText",			ESC_RESETTEXT		},	//
	{	"WaitText",				ESC_WAITTEXT		},	//
	{	"ResetTextAll",			ESC_RESETTEXTALL	},	//

	{	"SetDemoFadeFlag",		ESC_SETDEMOFADEFLAG	},	//

	{	"Mov2",					ESC_MOV2			},	//
	{	"Sin",					ESC_SIN				},	//
	{	"Cos",					ESC_COS				},	//
	{	"Abs",					ESC_ABS				},	//

	{	"SetCutCut",			ESC_SETCUTCUT		},	//


	{	"SetNoise",				ESC_SETNOISE		},	//
	{	"T",					ESC_T				},	//
	{	"SetUsoErr",			ESC_SETUSOERR		},	//
	{	"LoadScriptNum",		ESC_LOADSCRIPTNUM	},	//

	{	"SetRipple",			ESC_SETRIPPLE		},	//
	{	"SetRippleSet",			ESC_SETRIPPLESET	},	//
	{	"WaitRipple",			ESC_WAITRIPPLE		},	//
	{	"SetRippleLost",		ESC_SETRIPPLELOST	},	//
	{	"MLW",					ESC_MLW				},	//

	{	"VT",					ESC_VT				},	//
	{	"HT",					ESC_HT				},	//

	{	"SetMapEvent",			ESC_SETMAPEVENT		},	//
	{	"VIB",					ESC_VIB				},	//

	{	"ViewCalender",			ESC_VIEWCALENDER	},	//

	{	"SetSakura",			ESC_SETSAKURA		},
	{	"StopSakura",			ESC_STOPSAKURA		},

	{	"SkipDate",				ESC_SKIPDATE		},

	{	"SetMovie",				ESC_SETMOVIE		},	//
	{	"DebugBox",				ESC_DEBUGBOX		},	//

	{	"VHFlag",				ESC_VHFLAG			},	//

	{	"GetSystemTime",		ESC_GETSYSTEMTIME	},	//


	{	NULL,	ESC_OPR_MAX	},
};
//#endif//MODE

#define ESC_NOT		0	//��δʹ��
#define ESC_ASC		1	//��ֱ�����������`���`�ɣ�
#define ESC_NUM		2	//������or�쥸����
#define ESC_STR		3	//��������
#define ESC_STR2	4	//���٥�������
#define ESC_REG		5	//���쥸������ȡ��
#define ESC_CMP		6	//������ʽ
#define ESC_ADD		7	//��ADD�ե饰
#define ESC_CNT		8	//  ����ƥ󥹥�����
#define ESC_VCNT	9	//  

#define ESC_WAIT	0	//��
#define ESC_NOWAIT	1	//��

//#ifndef MODE

//�������
typedef struct
{
	char	type[15];		//����������
	char	ret;			//ESC_NOWAIT / ESC_WAIT
	char	default_num;	//�ǥե������������
}ESCRIPT_OPR;

ESCRIPT_OPR		EScroptOpr[] = {
	/*EScroptOpr_Start*/
	{//	ESC_B
		{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
			ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
			ESC_WAIT, 5
	},
	{//	ESC_BT
		{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
			ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
			ESC_WAIT, 5
	},
		{//	ESC_BC
			{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
				ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
				ESC_WAIT, 5
		},
		{//	ESC_BCT
			{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
				ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
				ESC_WAIT, 5
		},
			{//	ESC_BD
				{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
					ESC_NOWAIT, 0
			},
			{//	ESC_BR
				{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
					ESC_WAIT, 2
			},
				{//	ESC_BF
					{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
						ESC_WAIT, 2
				},
				{//	ESC_V
					{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
						ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
						ESC_WAIT, 6
				},
					{//	ESC_H
						{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
							ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
							ESC_WAIT, 6
					},

					{//	ESC_S
						{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
							ESC_WAIT, 0
					},
						{//	ESC_Z
							{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
								ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
								ESC_WAIT, 0
						},
						{//	ESC_FI
							{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
								ESC_WAIT, 0
						},
							{//	ESC_FIF
								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
									ESC_WAIT, 0
							},
							{//	ESC_FO
								{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
									ESC_WAIT, 0
							},
								{//	ESC_FOF
									{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
										ESC_WAIT, 0
								},
								{//	ESC_FB
									{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
										ESC_WAIT, 0
								},
									{//	ESC_PFI
										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
											ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
											ESC_WAIT, 2
									},
									{//	ESC_PFO
										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
											ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
											ESC_WAIT, 2
									},
										{//	ESC_PWI
											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
												ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
												ESC_WAIT, 2
										},
										{//	ESC_PWO
											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
												ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
												ESC_WAIT, 2
										},

											{//	ESC_Q
												{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
													ESC_WAIT, 0
											},
											{//	ESC_F
												{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
													ESC_WAIT, 0
											},

												{//	ESC_C
													{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
														ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
														ESC_WAIT, 6
												},
												{//	ESC_CR
													{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
														ESC_WAIT, 2
												},
													{//	ESC_CP
														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
															ESC_WAIT, 1
													},
													{//	ESC_CL
														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
															ESC_WAIT, 1
													},
														{//	ESC_CY
															{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																ESC_WAIT, 0
														},
														{//	ESC_CB
															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																ESC_WAIT, 0
														},
															{//	ESC_CA
																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																	ESC_WAIT, 0
															},
															{//	ESC_CW
																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																	ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																	ESC_NOWAIT, 4
															},
																{//	ESC_CRW
																	{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																		ESC_NOWAIT, 1
																},

																{//	ESC_W
																	{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																		ESC_WAIT, 1
																},
																	{//	ESC_WR
																		{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																			ESC_WAIT, 1
																	},

																	{//	ESC_KW
																		{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																			ESC_NOWAIT, 0
																	},
																		{//	ESC_K
																			{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																				ESC_WAIT, 0
																		},

																		{//	ESC_M
																			{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																				ESC_NOWAIT, 3
																		},
																			{//	ESC_MS
																				{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																					ESC_NOWAIT, 1
																			},
																			{//	ESC_MP
																				{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																					ESC_NOWAIT, 0
																			},
																				{//	ESC_MV
																					{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																						ESC_NOWAIT, 0
																				},
																				{//	ESC_MW
																					{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																						ESC_WAIT, 0
																				},

																					{//	ESC_SE
																						{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																							ESC_NOWAIT, 1
																					},
																					{//	ESC_SEP
																						{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																							ESC_NOWAIT, 3
																					},
																						{//	ESC_SES
																							{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																								ESC_NOWAIT, 1
																						},
																						{//	ESC_SEW
																							{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																								ESC_WAIT, 0
																						},
																							{//	ESC_SEV
																								{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																									ESC_NOWAIT, 0
																							},
																							{//	ESC_SEVW
																								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																									ESC_WAIT, 0
																							},

																								{//	ESC_SETVOLUMEVOICECHAR
																									{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																										ESC_NOWAIT, 0
																								},
																								{//	ESC_SETVOLUMEVOICESCRIPT
																									{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																										ESC_NOWAIT, 0
																								},

																									{//	ESC_SV
																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_VCNT, ESC_NUM,
																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																											ESC_NOWAIT, 5
																									},
																									{//	ESC_SVEX
																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																											ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																											ESC_NOWAIT, 5
																									},

																										{//	ESC_VV
																											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_VCNT, ESC_NUM,
																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																												ESC_NOWAIT, 4
																										},
																										{//	ESC_VA
																											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_VCNT, ESC_NUM,
																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																												ESC_NOWAIT, 4
																										},
																											{//	ESC_VB
																												{ESC_NUM, ESC_NUM, ESC_NUM, ESC_VCNT, ESC_NUM,
																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																													ESC_NOWAIT, 4
																											},
																											{//	ESC_VC
																												{ESC_NUM, ESC_NUM, ESC_NUM, ESC_VCNT, ESC_NUM,
																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																													ESC_NOWAIT, 4
																											},

																												{//	ESC_VX
																													{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																														ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																														ESC_NOWAIT, 3
																												},
																												{//	ESC_VW
																													{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																														ESC_WAIT, 1
																												},
																													{//	ESC_VS
																														{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																															ESC_NOWAIT, 1
																													},
																													{//	ESC_VI
																														{ESC_VCNT, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																															ESC_NOWAIT, 3
																													},


																														{//	ESC_R
																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																ESC_WAIT, 0
																														},
																														{//	ESC_RC
																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																ESC_WAIT, 0
																														},
																															{//	ESC_RR
																																{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																	ESC_WAIT, 0
																															},

																															{//	ESC_LF
																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																	ESC_NOWAIT, 0
																															},

																																{//	ESC_WE
																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																		ESC_WAIT, 1
																																},
																																{//	ESC_WER
																																	{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																		ESC_NOWAIT, 0
																																},

																																	{//	ESC_SETFLAG
																																		{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																			ESC_NOWAIT, 0
																																	},
																																	{//	ESC_GETFLAG
																																		{ESC_NUM, ESC_REG, ESC_NOT, ESC_NOT, ESC_NOT,
																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																			ESC_NOWAIT, 0
																																	},

																																		{//ESC_SETGAMEFLAG
																																			{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																				ESC_NOWAIT, 0
																																		},
																																		{//ESC_GETGAMEFLAG
																																			{ESC_NUM, ESC_REG, ESC_NOT, ESC_NOT, ESC_NOT,
																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																				ESC_NOWAIT, 0
																																		},

																																			{//	ESC_LOADSCRIPT
																																				{ESC_STR, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																					ESC_WAIT, 0
																																			},
																																			{//	ESC_GAMEEND
																																				{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																					ESC_WAIT, 1
																																			},
																																				{//	ESC_CALLFUNC
																																					{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																						ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																						ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM},
																																						ESC_NOWAIT, 14
																																				},

																																				{//	ESC_VIEWCLOCK
																																					{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																						ESC_WAIT, 2
																																				},

																																					{//	ESC_SETWEATHERMODE
																																						{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																							ESC_NOWAIT, 1
																																					},

																																					{//	ESC_SETTIMEMODE
																																						{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																							ESC_NOWAIT, 2
																																					},
																																						{//	ESC_SETTIMEBACK
																																							{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																								ESC_NOWAIT, 2
																																						},
																																						{//	ESC_SETTIMECHAR
																																							{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																								ESC_NOWAIT, 2
																																						},
																																						//�����v�B
																																							{//	ESC_SETMATRIX
																																								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																									ESC_NOWAIT, 0
																																							},
																																							{//	ESC_SHOWCHIPBACK
																																								{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																									ESC_WAIT, 2
																																							},
																																								{//	ESC_POSECHIPBACK
																																									{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																										ESC_NOWAIT, 0
																																								},
																																								{//	ESC_PLAYCHIPBACK
																																									{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																										ESC_NOWAIT, 0
																																								},

																																									{//	ESC_SETCHIPBACK
																																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																											ESC_NOWAIT, 0
																																									},
																																									{//	ESC_SETCHIPPARTS
																																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																											ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																											ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT},
																																											ESC_NOWAIT, 2
																																									},
																																										{//	ESC_SETCHIPSCROLL
																																											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																												ESC_NOWAIT, 0
																																										},
																																										{//	ESC_SETCHIPSCROLL2
																																											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																												ESC_NOWAIT, 0
																																										},

																																											{//	ESC_SETCHIPSCROLLSPEED
																																												{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																													ESC_NOWAIT, 0
																																											},
																																											{//	ESC_WAITCHIPSCROLL
																																												{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																													ESC_WAIT, 0
																																											},
																																												{//	ESC_WAITCHIPSCROLLSPEED
																																													{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																														ESC_WAIT, 0
																																												},

																																												{//	ESC_SETCHIPCHARCASH,
																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																														ESC_NOWAIT, 0
																																												},
																																													{//	ESC_RESETCHIPCHARCASH,
																																														{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																															ESC_NOWAIT, 0
																																													},

																																													{//	ESC_SETCHIPCHAR,
																																														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																															ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																															ESC_NOWAIT, 0
																																													},
																																														{//	ESC_SETCHIPCHARANI,
																																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																ESC_NOWAIT, 0
																																														},
																																														{//	ESC_RESETCHIPCHAR,
																																															{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																ESC_NOWAIT, 0
																																														},
																																															{//	ESC_SETCHIPCHARPARAM
																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																	ESC_NOWAIT, 0
																																															},
																																															{//	ESC_SETCHIPCHARBRIGHT
																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																	ESC_NOWAIT, 0
																																															},
																																																{//	ESC_SETCHIPCHARMOVE,
																																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																		ESC_NOWAIT, 0
																																																},
																																																{//	ESC_SETCHIPCHARMOVE2,
																																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																		ESC_NOWAIT, 0
																																																},
																																																	{//	ESC_SETCHIPCHARMOVESPEED,
																																																		{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																			ESC_NOWAIT, 0
																																																	},
																																																	{//	ESC_GETCHIPCHARMOVE,
																																																		{ESC_NUM, ESC_REG, ESC_REG, ESC_NOT, ESC_NOT,
																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																			ESC_NOWAIT, 0
																																																	},
																																																		{//	ESC_GETCHIPCHARMOVESPEED,
																																																			{ESC_NUM, ESC_REG, ESC_REG, ESC_NOT, ESC_NOT,
																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																				ESC_NOWAIT, 0
																																																		},

																																																		{//ESC_COPYCHIPCHARPOS
																																																			{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																				ESC_NOWAIT, 0
																																																		},
																																																			{//	ESC_SETCHIPCHARREV,
																																																				{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																					ESC_NOWAIT, 0
																																																			},

																																																			{//	ESC_THROUGHCHIPCHARANI,
																																																				{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																					ESC_NOWAIT, 0
																																																			},
																																																				{//	ESC_WAITCHIPCHARREPEAT,
																																																					{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																						ESC_WAIT, 1
																																																				},
																																																				{//	ESC_WAITCHIPCHARANI,
																																																					{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																						ESC_WAIT, 1
																																																				},
																																																					{//	ESC_WAITCHIPCHARANILOOP,
																																																						{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																							ESC_WAIT, 1
																																																					},
																																																					{//	ESC_WAITCHIPCHARAMOVE,
																																																						{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																							ESC_WAIT, 0
																																																					},

																																																						{//	ESC_GETBACK
																																																							{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																								ESC_WAIT, 0
																																																						},
																																																						{//	ESC_SETBACK
																																																							{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																								ESC_WAIT, 0
																																																						},
																																																							{//	ESC_SETBACK2
																																																								{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																									ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																									ESC_WAIT, 0
																																																							},
																																																							{//	ESC_SETCG
																																																								{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																									ESC_WAIT, 0
																																																							},
																																																								{//	ESC_SETCG2
																																																									{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																										ESC_WAIT, 0
																																																								},
																																																								{//	ESC_SETBACKPOS
																																																									{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																										ESC_NOWAIT, 0
																																																								},
																																																									{//	ESC_SETBACKPOSZ
																																																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																											ESC_NOWAIT, 0
																																																									},
																																																									{//	ESC_SETBACKSCROLL
																																																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																											ESC_WAIT, 0
																																																									},
																																																										{//	ESC_SETBACKSCROLLZ
																																																											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																												ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																												ESC_WAIT, 0
																																																										},
																																																										{//	ESC_SETBACKCSCOPE
																																																											{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																												ESC_NOWAIT, 0
																																																										},
																																																											{//	ESC_WAITBACKCSCOPE
																																																												{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																													ESC_WAIT, 0
																																																											},
																																																											{//	ESC_LOCKBACKCSCOPE
																																																												{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																													ESC_NOWAIT, 0
																																																											},

																																																												{//	ESC_SETBACKFADEIN
																																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																														ESC_WAIT, 1
																																																												},
																																																												{//	ESC_SETBACKFADEOUT
																																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																														ESC_WAIT, 1
																																																												},
																																																													{//	ESC_SETBACKFADERGB
																																																														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																															ESC_WAIT, 1
																																																													},
																																																													{//	ESC_SETSHAKE
																																																														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																															ESC_WAIT, 1
																																																													},
																																																														{//	ESC_STOPSHAKE
																																																															{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																ESC_WAIT, 0
																																																														},
																																																														{//	ESC_SETFLASH
																																																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																ESC_WAIT, 0
																																																														},
																																																														//�����v�B
																																																															{//	ESC_SETCHAR
																																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																	ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																	ESC_NOWAIT, 6
																																																															},
																																																															{//	ESC_RESETCHAR
																																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																	ESC_NOWAIT, 2
																																																															},
																																																																{//	ESC_SETCHARPOSE
																																																																	{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																		ESC_NOWAIT, 0
																																																																},
																																																																{//	ESC_SETCHARLOCATE
																																																																	{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																		ESC_NOWAIT, 0
																																																																},
																																																																	{//	ESC_SETCHARLAYER
																																																																		{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																			ESC_NOWAIT, 0
																																																																	},
																																																																	{//	ESC_WAIT, 0CHAR
																																																																		{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																			ESC_WAIT, 0
																																																																	},
																																																																	//Window�v�B
																																																																		{//	ESC_SETBLOCK
																																																																			{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																				ESC_NOWAIT, 0
																																																																		},
																																																																		{//	ESC_SETWINDOW
																																																																			{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																				ESC_WAIT, 1
																																																																		},
																																																																			{//	ESC_RESETWINDOW
																																																																				{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																					ESC_WAIT, 1
																																																																			},
																																																																			{//	ESC_SETMESSAGE
																																																																				{ESC_NUM, ESC_STR, ESC_CNT, ESC_NOT, ESC_NOT,
																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																					ESC_WAIT, 0
																																																																			},
																																																																				{//	ESC_SETMESSAGE2
																																																																					{ESC_STR2,ESC_ADD, ESC_CNT, ESC_NOT, ESC_NOT,
																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																						ESC_WAIT, 0
																																																																				},
																																																																				{//	ESC_SETMESSAGEEX
																																																																					{ESC_NUM, ESC_NUM, ESC_STR, ESC_NUM, ESC_CNT,
																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																						ESC_WAIT, 0
																																																																				},
																																																																					{//	ESC_SETCHIPMESSAGE
																																																																						{ESC_STR, ESC_CNT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																							ESC_NOWAIT, 0
																																																																					},

																																																																					{//	ESC_ADDMESSAGE
																																																																						{ESC_NUM, ESC_STR, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																							ESC_WAIT, 0
																																																																					},
																																																																						{//	ESC_ADDMESSAGE2
																																																																							{ESC_STR2,ESC_ADD, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																								ESC_WAIT, 0
																																																																						},
																																																																						{//	ESC_SETMESSAGEWAIT, 0
																																																																							{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																								ESC_WAIT, 0
																																																																						},
																																																																							{//	ESC_RESETMESSAGE
																																																																								{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																									ESC_WAIT, 0
																																																																							},

																																																																							{//	ESC_WAIT, 0KEY
																																																																								{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																									ESC_WAIT, 0
																																																																							},

																																																																								{//	ESC_SETSELECTMESSAGE
																																																																									{ESC_STR, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																										ESC_NOWAIT, 3
																																																																								},
																																																																								{//	ESC_SETSELECTMESSAGEEX
																																																																									{ESC_STR, ESC_STR, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																										ESC_NOWAIT, 2
																																																																								},
																																																																									{//	ESC_SETSELECT
																																																																										{ESC_REG, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																											ESC_WAIT, 0
																																																																									},
																																																																									{//	ESC_SETSELECTEX
																																																																										{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																											ESC_WAIT, 0
																																																																									},
																																																																									//��������v�B
																																																																										{//	ESC_PLAYBGM
																																																																											{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																												ESC_NOWAIT, 0
																																																																										},
																																																																										{//	ESC_PLAYBGMEX
																																																																											{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																												ESC_NOWAIT, 0
																																																																										},
																																																																											{//	ESC_STOPBGM
																																																																												{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																													ESC_NOWAIT, 0
																																																																											},
																																																																											{//	ESC_STOPBGMEX
																																																																												{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																													ESC_NOWAIT, 0
																																																																											},
																																																																												{//	ESC_SETVOLUMEBGM
																																																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																														ESC_NOWAIT, 0
																																																																												},
																																																																												{//	ESC_SETVOLUMEBGMEX
																																																																													{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																														ESC_NOWAIT, 0
																																																																												},
																																																																													{//	ESC_PLAYSE
																																																																														{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																															ESC_NOWAIT, 0
																																																																													},
																																																																													{//	ESC_PLAYSEEX
																																																																														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																															ESC_NOWAIT, 0
																																																																													},
																																																																														{//	ESC_STOPSEEX
																																																																															{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																ESC_NOWAIT, 0
																																																																														},
																																																																														{//	ESC_SETVOLUMESE
																																																																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																ESC_NOWAIT, 0
																																																																														},
																																																																														//������
																																																																															{//	ESC_SETWEATHER
																																																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																	ESC_NOWAIT, 0
																																																																															},
																																																																															{//	ESC_CHANGEWEATHER
																																																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																	ESC_NOWAIT, 0
																																																																															},
																																																																																{//	ESC_RESETWEATHER
																																																																																	{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																		ESC_WAIT, 0
																																																																																},
																																																																																{//	ESC_SETLENSFREA
																																																																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																		ESC_NOWAIT, 0
																																																																																},
																																																																																	{//	ESC_SETWAVEFFECT
																																																																																		{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																			ESC_WAIT, 3
																																																																																	},
																																																																																	{//	ESC_RESETWAVEFFECT
																																																																																		{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																			ESC_NOWAIT, 0
																																																																																	},

																																																																																		{//	ESC_SETWARP
																																																																																			{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																				ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																				ESC_WAIT, 8
																																																																																		},
																																																																																		{//	ESC_RESETWARP
																																																																																			{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																				ESC_WAIT, 1
																																																																																		},

																																																																																			{//	ESC_WAIT, 0FRAME
																																																																																				{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																					ESC_WAIT, 0
																																																																																			},

																																																																																			{//	ESC_SETBMP
																																																																																				{ESC_NUM, ESC_NUM, ESC_STR, ESC_NUM, ESC_NUM,
																																																																																					ESC_STR, ESC_NUM, ESC_NUM, ESC_STR, ESC_NOT,
																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																					ESC_NOWAIT, 4
																																																																																			},
																																																																																				{//	ESC_SETBMPEX
																																																																																					{ESC_NUM, ESC_NUM, ESC_STR, ESC_NUM, ESC_NUM,
																																																																																						ESC_NUM, ESC_STR, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																						ESC_NOWAIT, 2
																																																																																				},
																																																																																				{//	ESC_SETBMP4BMP
																																																																																					{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																						ESC_NOWAIT, 0
																																																																																				},
																																																																																					{//ESC_SETBMPPRIM
																																																																																						{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																							ESC_NOWAIT, 0
																																																																																					},
																																																																																					{//	ESC_RESETBMP
																																																																																						{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																							ESC_NOWAIT, 0
																																																																																					},
																																																																																						{//	ESC_RESETBMPALL
																																																																																							{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																								ESC_NOWAIT, 0
																																																																																						},
																																																																																						{//	ESC_SETBMPANIME
																																																																																							{ESC_NUM, ESC_STR, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																								ESC_NOWAIT, 3
																																																																																						},
																																																																																							{//	ESC_RESETBMPANIME
																																																																																								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																									ESC_NOWAIT, 0
																																																																																							},
																																																																																							{//	ESC_WAITBMPANIME
																																																																																								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																									ESC_WAIT, 0
																																																																																							},

																																																																																								{//	ESC_SETTITLE
																																																																																									{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																										ESC_WAIT, 0
																																																																																								},
																																																																																								{//	ESC_SETENDING
																																																																																									{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																										ESC_WAIT, 0
																																																																																								},

																																																																																									{//	ESC_SETOPENING
																																																																																										{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																											ESC_WAIT, 0
																																																																																									},

																																																																																									{//	ESC_SETAVI,
																																																																																										{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_STR,
																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																											ESC_NOWAIT, 0
																																																																																									},
																																																																																										{//	ESC_RESETAVI,
																																																																																											{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																												ESC_NOWAIT, 0
																																																																																										},
																																																																																										{//	ESC_WAITAVI,
																																																																																											{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																												ESC_WAIT, 0
																																																																																										},
																																																																																											{//	ESC_SETAVIFULL,
																																																																																												{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																													ESC_NOWAIT, 0
																																																																																											},
																																																																																											{//	ESC_WAITAVIFULL,
																																																																																												{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																													ESC_WAIT, 0
																																																																																											},

																																																																																												{//	ESC_SETBMPDISP
																																																																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																														ESC_NOWAIT, 0
																																																																																												},
																																																																																												{//	ESC_SETBMPLAYER
																																																																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																														ESC_NOWAIT, 0
																																																																																												},
																																																																																													{//	ESC_SETBMPPARAM
																																																																																														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																															ESC_NOWAIT, 1
																																																																																													},
																																																																																													{//	ESC_SETBMPREVPARAM
																																																																																														{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																															ESC_NOWAIT, 0
																																																																																													},
																																																																																														{//	ESC_SETBMPBRIGHT
																																																																																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																ESC_NOWAIT, 2
																																																																																														},
																																																																																														{//	ESC_SETBMPMOVE
																																																																																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																ESC_NOWAIT, 0
																																																																																														},
																																																																																															{//	ESC_SETBMPPOS
																																																																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																	ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																	ESC_NOWAIT, 0
																																																																																															},
																																																																																															{//	ESC_SETBMPZOOM
																																																																																																{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																	ESC_NOWAIT, 0
																																																																																															},
																																																																																																{//	ESC_SETBMPZOOM2
																																																																																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																		ESC_NOWAIT, 0
																																																																																																},
																																																																																																{//	ESC_SETDEMOFLAG
																																																																																																	{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																		ESC_NOWAIT, 0
																																																																																																},
																																																																																																	{//	ESC_SETSCENENO
																																																																																																		{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																			ESC_NOWAIT, 0
																																																																																																	},
																																																																																																	{//	ESC_SETENDINGNO
																																																																																																		{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																			ESC_NOWAIT, 0
																																																																																																	},
																																																																																																		{//	ESC_SETREPLAYNO
																																																																																																			{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																				ESC_NOWAIT, 0
																																																																																																		},

																																																																																																		{//	ESC_SETSOUNDEVENT
																																																																																																			{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																				ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																				ESC_NOWAIT, 5
																																																																																																		},

																																																																																																			{//	ESC_SETSOUNDEVENTVOLUME
																																																																																																				{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT,
																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																					ESC_NOWAIT, 2
																																																																																																			},

																																																																																																			{//	ESC_SETPOTAPOTA
																																																																																																				{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																					ESC_WAIT, 3
																																																																																																			},

																																																																																																				{//	ESC_GETTIME
																																																																																																					{ESC_REG, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																						ESC_NOWAIT, 0
																																																																																																				},
																																																																																																				{//	ESC_WAITTIME
																																																																																																					{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																						ESC_WAIT, 0
																																																																																																				},

																																																																																																					{//	ESC_SETTEXTFORMAT
																																																																																																						{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																							ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																							ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																							ESC_NOWAIT, 10
																																																																																																					},
																																																																																																					{//	ESC_SETTEXTSYNC
																																																																																																						{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																							ESC_NOWAIT, 0
																																																																																																					},
																																																																																																						{//	ESC_SETTEXT
																																																																																																							{ESC_NUM, ESC_STR, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																								ESC_WAIT, 0
																																																																																																						},
																																																																																																						{//	ESC_SETTEXTEX
																																																																																																							{ESC_STR, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																								ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																								ESC_WAIT, 0
																																																																																																						},
																																																																																																							{//	ESC_RESETTEXT
																																																																																																								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																									ESC_NOWAIT, 0
																																																																																																							},
																																																																																																							{//	ESC_WAITTEXT
																																																																																																								{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																									ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																									ESC_WAIT, 0
																																																																																																							},
																																																																																																								{//	ESC_RESETTEXTALL
																																																																																																									{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																										ESC_NOWAIT, 0
																																																																																																								},

																																																																																																								{//	ESC_SETDEMOFADEFLAG
																																																																																																									{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																										ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																										ESC_NOWAIT, 0
																																																																																																								},

																																																																																																									{//	ESC_MOV2
																																																																																																										{ESC_REG, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																											ESC_NOWAIT, 0
																																																																																																									},
																																																																																																									{//	ESC_SIN
																																																																																																										{ESC_REG, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																											ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																											ESC_NOWAIT, 1
																																																																																																									},
																																																																																																										{//	ESC_COS
																																																																																																											{ESC_REG, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																												ESC_NOWAIT, 1
																																																																																																										},
																																																																																																										{//	ESC_ABS
																																																																																																											{ESC_REG, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																												ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																												ESC_NOWAIT, 0
																																																																																																										},
																																																																																																											{//	ESC_SETCUTCUT
																																																																																																												{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																													ESC_NOWAIT, 0
																																																																																																											},
																																																																																																											{//	ESC_SETNOISE
																																																																																																												{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																													ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																													ESC_WAIT, 2
																																																																																																											},
																																																																																																												{//	ESC_T
																																																																																																													{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																														ESC_NOWAIT, 1
																																																																																																												},
																																																																																																												{//	ESC_SETUSOERR
																																																																																																													{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																														ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																														ESC_NOWAIT, 0
																																																																																																												},
																																																																																																													{//	ESC_LOADSCRIPTNUM
																																																																																																														{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																															ESC_WAIT, 0
																																																																																																													},
																																																																																																													{//	ESC_SETRIPPLE
																																																																																																														{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																															ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																															ESC_NOWAIT, 0
																																																																																																													},
																																																																																																														{//	ESC_SETRIPPLESET
																																																																																																															{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																ESC_NOWAIT, 1
																																																																																																														},
																																																																																																														{//	ESC_WAITRIPPLE
																																																																																																															{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																ESC_WAIT, 0
																																																																																																														},
																																																																																																															{//	ESC_SETRIPPLELOST
																																																																																																																{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																	ESC_WAIT, 0
																																																																																																															},
																																																																																																															{//	ESC_MLW
																																																																																																																{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																	ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																	ESC_WAIT, 0
																																																																																																															},
																																																																																																																{//	ESC_VT
																																																																																																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																																		ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																		ESC_WAIT, 6
																																																																																																																},
																																																																																																																{//	ESC_HT
																																																																																																																	{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM, ESC_NUM,
																																																																																																																		ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																																		ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																		ESC_WAIT, 6
																																																																																																																},

																																																																																																																	{//	ESC_SETMAPEVENT
																																																																																																																		{ESC_NUM, ESC_NUM, ESC_NUM, ESC_STR, ESC_NOT,
																																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																			ESC_NOWAIT, 0
																																																																																																																	},
																																																																																																																	{//	ESC_VIB
																																																																																																																		{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																			ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																			ESC_NOWAIT, 0
																																																																																																																	},
																																																																																																																		{//	ESC_VIEWCALENDER
																																																																																																																			{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																				ESC_WAIT, 2
																																																																																																																		},

																																																																																																																		{//	ESC_SETSAKURA
																																																																																																																			{ESC_NUM, ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT,
																																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																				ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																				ESC_NOWAIT, 0
																																																																																																																		},
																																																																																																																			{//	ESC_STOPSAKURA
																																																																																																																				{ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																					ESC_WAIT, 0
																																																																																																																			},
																																																																																																																			{//	ESC_SKIPDATE
																																																																																																																				{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																					ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																					ESC_NOWAIT, 0
																																																																																																																			},

																																																																																																																				{//	ESC_SETMOVIE
																																																																																																																					{ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																						ESC_WAIT, 0
																																																																																																																				},
																																																																																																																				{//	ESC_DEBUGBOX
																																																																																																																					{ESC_NUM, ESC_STR, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																						ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																						ESC_NOWAIT, 1
																																																																																																																				},

																																																																																																																					{//	ESC_VHFLAG
																																																																																																																						{ESC_NUM, ESC_NUM, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																							ESC_NOWAIT, 0
																																																																																																																					},
																																																																																																																					{//	ESC_GETSYSTEMTIME
																																																																																																																						{ESC_REG, ESC_REG, ESC_REG, ESC_REG, ESC_NOT,
																																																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT,
																																																																																																																							ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT, ESC_NOT},
																																																																																																																							ESC_NOWAIT, 0
																																																																																																																					},

};

//#endif//MODE

#endif //_ESC_H__