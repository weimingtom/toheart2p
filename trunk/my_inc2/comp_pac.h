#ifndef _PACMAIN_H_
#define _PACMAIN_H_



//�����ļ���ȡ����
typedef struct
{
	DWORD type;			//�����ļ����ͣ�����mov,grp��������0��ʱ�򲻼���
	char fname[24];		//�����ļ���
	DWORD offset;		//�ļ���Ϊfname���ļ�����PAK�ļ���ַ��ƫ����
	DWORD size;			//���ݴ�С
} FILE_INFO;			//PAK�ļ���������Ԫ

typedef struct
{
	FILE_INFO fi;
	int pos;
} OPEN_FILE_INFO;

typedef struct
{
	DWORD head;			//PAK�ļ���־λ�������1346454347  'PACK'
	DWORD famount;		//PAK�ļ��У��ļ��ĸ���
} PAC_FILE_INFO;//PAK�ļ���Ϣ�ṹ��


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
