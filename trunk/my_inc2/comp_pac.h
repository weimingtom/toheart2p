#ifndef _PACMAIN_H_
#define _PACMAIN_H_



//数据文件读取属性
typedef struct
{
	DWORD type;			//数据文件类型，例如mov,grp　　等于0的时候不加密
	char fname[24];		//数据文件名
	DWORD offset;		//文件名为fname的文件，在PAK文件地址的偏移量
	DWORD size;			//数据大小
} FILE_INFO;			//PAK文件名索引单元

typedef struct
{
	FILE_INFO fi;
	int pos;
} OPEN_FILE_INFO;

typedef struct
{
	DWORD head;			//PAK文件标志位，恒等于1346454347  'PACK'
	DWORD famount;		//PAK文件中，文件的个数
} PAC_FILE_INFO;//PAK文件信息结构体


extern DWORD PAC_CheckFile(char *pname, char *fname);
extern DWORD PAC_LoadFile(char *pname, char *fname, char **buf);

extern DWORD PAC_AllFilecheck(char *pname);

extern int PAC_CheckPackFile(char *pname, char *fname);
extern int PAC_OpenPackFile(char *pname, char *fname, char **buf);

extern OPEN_FILE_INFO PAC_OpenFileHandle(char *pname, char *fname, HANDLE *fh);
extern void PAC_OpenFileHandle(HANDLE *fh);
extern DWORD PAC_SeekFileHandle(HANDLE *fh, OPEN_FILE_INFO *fi, int pos);
extern DWORD PAC_ReedFileHandle(HANDLE *fh, OPEN_FILE_INFO *fi, BYTE *buf, int size);


#endif
