#include <mm_std.h>

#include "Comp_LZS.h"
#include "Comp_pac.h"

#define PAC_FILE_ID		'PACK'

#define PAC_LOAD		ON


//-------------------------------------------------------------------------
//��������	PAC_CheckFile
//���ܣ�	���ָ���ļ����͵��ļ��Ƿ���PAK�ļ���
//
//���������			
//			����		������			����
//			char *		pname			Ҫ�����ļ��������ͣ����磺mov,grp
//			char *		fname			Ҫ�����ļ���
//����ֵ��
//			int			ret				����ָ���ļ���PAK�ļ��е�λ�������ţ���1��ʼ���㣩���Ҳ�������0
DWORD PAC_CheckFile(char *pname, char *fname)
{
	int ret;
	char fname2[256];

	if (pname)
	{
		if (PAC_LOAD)
		{
			wsprintf(fname2, "%s.pak", pname);
			if (!(ret = PAC_CheckPackFile(fname2, fname)))
			{
				wsprintf(fname2, "pak\\%s.pak", pname);
				if (!(ret = PAC_CheckPackFile(fname2, fname)))
				{
					if (!(ret = PAC_CheckPackFile("patch.pak", fname)))
					{
						wsprintf(fname2, "%s\\%s", pname, fname);
						ret = STD_CheckFile(fname2);
					}
				}
			}
		}
		else
		{
			wsprintf(fname2, "%s\\%s", pname, fname);
			ret = STD_CheckFile(fname2);
		}
	}
	else
	{
		ret = STD_CheckFile(fname);
	}

	return ret;
}

//-------------------------------------------------------------------------
//��������	PAC_LoadFile
//���ܣ�	��PAK�ļ��м���ָ�����͵��ļ�
//
//���������			
//			����		������			����
//			char *		pname			�ļ����ͣ�����grp
//			char *		fname			Ҫ�򿪵��ļ���
//			char **		buf	�������	����������
//����ֵ��
//			int			ret				���ش��ļ�������󣩵Ĵ�С���򲻿�����0
DWORD PAC_LoadFile(char *pname, char *fname, char **buf)
{
	int ret;
	char fname2[256];

	if (pname)
	{
		if (PAC_LOAD)
		{
			//�����ļ�����·��
			wsprintf(fname2, "%s\\%s", pname, fname);
			if (!(ret = STD_ReadFileMax(fname2, buf)))
			{
				if (!(ret = PAC_OpenPackFile("patch.pak", fname, buf)))
				{
					wsprintf(fname2, "%s.pak", pname);
					if (!(ret = PAC_OpenPackFile(fname2, fname, buf)))
					{
						wsprintf(fname2, "pak\\%s.pak", pname);
						ret = PAC_OpenPackFile(fname2, fname, buf);
					}
				}
			}
		}
		else
		{
			wsprintf(fname2, "%s\\%s", pname, fname);
			ret = STD_ReadFileMax(fname2, buf);
		}
		if (!ret)
		{
			DebugBox(NULL, "�ե����뤬�_���ޤ���[%s,%s]", pname, fname);
		}

	}
	else
	{
		ret = STD_ReadFileMax(fname, buf);
		if (!ret)
		{
			DebugBox(NULL, "�ե����뤬�_���ޤ���[%s]", fname);
		}

	}
	return ret;
}

//-------------------------------------------------------------------------

DWORD PAC_AllFilecheck(char *pname)
{
	HANDLE fh;
	int i, ret = 0;
	UINT size = 0;
	FILE_INFO *fi = NULL;
	PAC_FILE_INFO pfi;
	char *buf = NULL;
	char PackFname[128];

	wsprintf(PackFname, "%s.pak", pname);

	fh = CREATE_READ_FILE(PackFname);
	if (fh != INVALID_HANDLE_VALUE)
	{
		ReadFile(fh, &pfi, sizeof(PAC_FILE_INFO), (unsigned long*) &size, NULL);
		if (pfi.head == PAC_FILE_ID)
		{
			fi = (FILE_INFO*)GAlloc(sizeof(FILE_INFO) *pfi.famount);
			ReadFile(fh, fi, sizeof(FILE_INFO) *pfi.famount, (unsigned long*) &size, NULL);

			for (i = 0; i < (int)pfi.famount; i++)
			{
				PAC_LoadFile(pname, fi[i].fname, &buf);
				GFree(buf);
				DebugPrintf("%s\n", fi[i].fname);
			}
			GFree(fi);
		}
		CloseHandle(fh);
	}
	return ret;
}

//-------------------------------------------------------------------------
//��������	PAC_CheckPackFile
//���ܣ�	���ָ���ļ��Ƿ���PAK�ļ���
//
//���������			
//			����		������			����
//			char *		pname			PAK�ļ���
//			char *		fname			Ҫ�����ļ���
//����ֵ��
//			int			ret				����ָ���ļ���PAK�ļ��е�λ�������ţ���1��ʼ���㣩���Ҳ�������0
int PAC_CheckPackFile(char *pname, char *fname)
{
	HANDLE fh;
	int i, ret = 0;
	UINT size = 0;			//��ȡ���ֽ���
	FILE_INFO *fi = NULL;	//�ļ�������
	PAC_FILE_INFO pfi;		//PAK�ļ�ͷ��Ϣ

	fh = CREATE_READ_FILE(pname);
	if (fh != INVALID_HANDLE_VALUE)
	{
		//��ȡPAK�ļ���Ϣ�����浽pfi��
		ReadFile(fh, &pfi, sizeof(PAC_FILE_INFO), (unsigned long*) &size, NULL);

		//�Ϸ��Լ��
		if (pfi.head == PAC_FILE_ID)
		{
			//��fi����pfi.famount����ַ�ռ䣬ÿ���ռ��С��sizeof(FILE_INFO)
			fi = (FILE_INFO*)GAlloc(sizeof(FILE_INFO) *pfi.famount);
			//��PAK�ļ��ж�ȡ�ļ���������fiָ����
			ReadFile(fh, fi, sizeof(FILE_INFO) *pfi.famount, (unsigned long*) &size, NULL);
			for (i = 0; i < (int)pfi.famount; i++)
			{
				//����ļ���ƥ��
				if (!lstrcmpi(fi[i].fname, fname))
				{
					ret = i + 1;	//������ֵ��ֵ
					break;
				}
			}
			GFree(fi);
		}
		CloseHandle(fh);
	}
	return ret;
}

//-------------------------------------------------------------------------
//��������	PAC_OpenPackFile
//���ܣ�	��PAK�ļ��д�ָ���ļ�
//
//���������			
//			����		������			����
//			char *		pname			PAK�ļ���
//			char *		fname			Ҫ�򿪵��ļ���
//			char **		buf	�������	����������
//����ֵ��
//			int			size			���ش��ļ�������󣩵Ĵ�С���򲻿�����0
int PAC_OpenPackFile(char *pname, char *fname, char **buf)
{
	HANDLE fh;
	int i, size = 0, ret = 0;
	char *src = NULL;
	FILE_INFO *fi = NULL;	//�ļ�������
	PAC_FILE_INFO pfi;		//PAK�ļ�ͷ��Ϣ

	fh = CREATE_READ_FILE(pname);
	if (fh != INVALID_HANDLE_VALUE)
	{
		//��ȡPAK�ļ���Ϣ
		ReadFile(fh, &pfi, sizeof(PAC_FILE_INFO), (unsigned long*) &size, NULL);
		if (pfi.head == PAC_FILE_ID)
		{
			//��PAK�ļ����б�
			fi = (FILE_INFO*)GAlloc(sizeof(FILE_INFO) *pfi.famount);
			ReadFile(fh, fi, sizeof(FILE_INFO) *pfi.famount, (unsigned long*) &size, NULL);
			for (i = 0; i < (int)pfi.famount; i++)
			{
				//ƥ��ָ�����ļ�������ȡָ���ļ��������ݵ��ڴ�
				if (!lstrcmpi(fi[i].fname, fname))
				{
					SetFilePointer(fh, fi[i].offset, NULL, FILE_BEGIN);
					if (fi[i].type == 0)//δ����״̬ʱ��ֱ�Ӷ���
					{
						*buf = (char*)GAlloc(fi[i].size);
						ReadFile(fh,  *buf, fi[i].size, (unsigned long*) &size, NULL);
					}
					else		//����״̬ʱ���ȶ���������ݣ�Ȼ�����
					{
						src = (char*)GAlloc(fi[i].size);
						ReadFile(fh, src, fi[i].size, (unsigned long*) &size, NULL);
						//������ռ�������4�ֽ��ڴ�
						*buf = (char*)GAlloc(*(DWORD*)(src + 4));
						
						//�����������
						size = LZS_DecodeMemory(*buf, &src[8], fi[i].size - 8, *(DWORD*)(src + 4));

						////�������ʧ�ܣ�ָ��������ֽ�+4�����ڽ����ֽ���
						if (*(DWORD*)(src + 4) != (DWORD)size)
						{
							DebugBox(NULL, "�i���z�ߥǩ`���ˮ������J����ޤ�����HDD�ޤ��ϥ���Ȥ˥���`����������Ԥ�����ޤ���\n\n���`�Щ`����å��Ȥθ����ʩ���Ƥ�����Ϥϡ�������������¤�����\n�ޤ����ޥ���h���ˆ��}���줤��˼������Ϥϡ�HDD�Υ���`�����å��򤷤��Ϥǡ�\n���`����٥��󥹥ȩ`���ԇ�����¤�����\n�ե���������[%s]", fname);
						}

						GFree(src);
					}
					ret = i + 1;
					break;
				}
			}
			if (!ret)
			{
				size = 0;
			}

			GFree(fi);
		}
		CloseHandle(fh);
	}
	return size;
}

//-------------------------------------------------------------------------

OPEN_FILE_INFO PAC_OpenFileHandle(char *pname, char *fname, HANDLE *fh)
{
	char fpath[256];
	PAC_FILE_INFO fpi;
	OPEN_FILE_INFO ofi;
	DWORD count = 0, size = 0;

	ZeroMemory(&fpi, sizeof(PAC_FILE_INFO));
	ZeroMemory(&ofi, sizeof(OPEN_FILE_INFO));
	if (*fh)
	{
		CloseHandle(*fh);
	}
	*fh = NULL;

	wsprintf(fpath, "%s\\%s", pname, fname);
	*fh = CREATE_READ_FILE(fpath);
	if (*fh == INVALID_HANDLE_VALUE)
	{
		wsprintf(fpath, "%s.pak", pname);
		*fh = CREATE_READ_FILE(fpath);
		if (*fh != INVALID_HANDLE_VALUE)
		{
			ReadFile(*fh, &fpi, sizeof(PAC_FILE_INFO), &size, NULL);
			if (fpi.head != PAC_FILE_ID)
			{
				if (*fh)
				{
					CloseHandle(*fh);
				}
				 *fh = NULL;
				return ofi;
			}
			while (count < fpi.famount)
			{
				ReadFile(*fh, &ofi.fi, sizeof(FILE_INFO), &size, NULL);

				if (!lstrcmpi(ofi.fi.fname, fname))
				{
					SetFilePointer(*fh, ofi.fi.offset, NULL, FILE_BEGIN);
					size = ofi.fi.size;
					break;
				}
				count++;
			}
			if (count == fpi.famount)
			{
				if (*fh)
				{
					CloseHandle(*fh);
					*fh = NULL;
				}
			}
		}
	}
	else
	{
		ofi.fi.size = size = GetFileSize(*fh, NULL);
	}

	if (size == 0)
	{
		if (*fh)
		{
			CloseHandle(*fh);
		}
		*fh = NULL;
	}
	return ofi;
}

//-------------------------------------------------------------------------

void PAC_OpenFileHandle(HANDLE *fh)
{
	if (*fh)
	{
		CloseHandle(*fh);
	}
	*fh = NULL;
}

//-------------------------------------------------------------------------

DWORD PAC_SeekFileHandle(HANDLE *fh, OPEN_FILE_INFO *ofi, int pos)
{
	ofi->pos = SetFilePointer(*fh, ofi->fi.offset + pos, NULL, FILE_BEGIN);
	return 0;
}

//-------------------------------------------------------------------------


DWORD PAC_ReedFileHandle(HANDLE *fh, OPEN_FILE_INFO *ofi, BYTE *buf, int size)
{
	DWORD size2 = 0;
	if (*fh != INVALID_HANDLE_VALUE)
	{
		size = min(size, (int)ofi->fi.size - ofi->pos);
		if (size != 0)
		{
			ReadFile(*fh, buf, size, (DWORD*) &size2, NULL);
		}
		else
		{
			size = 0;
			size2 = 0;
		}
		ofi->pos += size2;
	}
	if (size2 == 0 || ofi->fi.size == ofi->pos)
	{
		if (*fh)
		{
			CloseHandle(*fh);
		}
		*fh = NULL;
	}
	return size2;
}
