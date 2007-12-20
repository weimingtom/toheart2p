#include <mm_std.h>

#include "Comp_LZS.h"
#include "Comp_pac.h"

#define PAC_FILE_ID		'PACK'

#define PAC_LOAD		ON


//-------------------------------------------------------------------------
//函数名：	PAC_CheckFile
//功能：	检查指定文件类型的文件是否在PAK文件中
//
//输入参数：			
//			类型		参数名			意义
//			char *		pname			要检查的文件名的类型，例如：mov,grp
//			char *		fname			要检查的文件名
//返回值：
//			int			ret				返回指定文件在PAK文件中的位置索引号（从1开始计算），找不到返回0
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
//函数名：	PAC_LoadFile
//功能：	从PAK文件中加载指定类型的文件
//
//输入参数：			
//			类型		参数名			意义
//			char *		pname			文件类型，例如grp
//			char *		fname			要打开的文件名
//			char **		buf	（输出）	读出的数据
//返回值：
//			int			ret				返回打开文件（解码后）的大小，打不开返回0
DWORD PAC_LoadFile(char *pname, char *fname, char **buf)
{
	int ret;
	char fname2[256];

	if (pname)
	{
		if (PAC_LOAD)
		{
			//查找文件所在路径
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
			DebugBox(NULL, "ファイルが開けません[%s,%s]", pname, fname);
		}

	}
	else
	{
		ret = STD_ReadFileMax(fname, buf);
		if (!ret)
		{
			DebugBox(NULL, "ファイルが開けません[%s]", fname);
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
//函数名：	PAC_CheckPackFile
//功能：	检查指定文件是否在PAK文件中
//
//输入参数：			
//			类型		参数名			意义
//			char *		pname			PAK文件名
//			char *		fname			要检查的文件名
//返回值：
//			int			ret				返回指定文件在PAK文件中的位置索引号（从1开始计算），找不到返回0
int PAC_CheckPackFile(char *pname, char *fname)
{
	HANDLE fh;
	int i, ret = 0;
	UINT size = 0;			//读取的字节数
	FILE_INFO *fi = NULL;	//文件名索引
	PAC_FILE_INFO pfi;		//PAK文件头信息

	fh = CREATE_READ_FILE(pname);
	if (fh != INVALID_HANDLE_VALUE)
	{
		//读取PAK文件信息，保存到pfi中
		ReadFile(fh, &pfi, sizeof(PAC_FILE_INFO), (unsigned long*) &size, NULL);

		//合法性检查
		if (pfi.head == PAC_FILE_ID)
		{
			//给fi分配pfi.famount个地址空间，每个空间大小是sizeof(FILE_INFO)
			fi = (FILE_INFO*)GAlloc(sizeof(FILE_INFO) *pfi.famount);
			//从PAK文件中读取文件名索引到fi指针中
			ReadFile(fh, fi, sizeof(FILE_INFO) *pfi.famount, (unsigned long*) &size, NULL);
			for (i = 0; i < (int)pfi.famount; i++)
			{
				//如果文件名匹配
				if (!lstrcmpi(fi[i].fname, fname))
				{
					ret = i + 1;	//给返回值赋值
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
//函数名：	PAC_OpenPackFile
//功能：	从PAK文件中打开指定文件
//
//输入参数：			
//			类型		参数名			意义
//			char *		pname			PAK文件名
//			char *		fname			要打开的文件名
//			char **		buf	（输出）	读出的数据
//返回值：
//			int			size			返回打开文件（解码后）的大小，打不开返回0
int PAC_OpenPackFile(char *pname, char *fname, char **buf)
{
	HANDLE fh;
	int i, size = 0, ret = 0;
	char *src = NULL;
	FILE_INFO *fi = NULL;	//文件名索引
	PAC_FILE_INFO pfi;		//PAK文件头信息

	fh = CREATE_READ_FILE(pname);
	if (fh != INVALID_HANDLE_VALUE)
	{
		//读取PAK文件信息
		ReadFile(fh, &pfi, sizeof(PAC_FILE_INFO), (unsigned long*) &size, NULL);
		if (pfi.head == PAC_FILE_ID)
		{
			//读PAK文件名列表
			fi = (FILE_INFO*)GAlloc(sizeof(FILE_INFO) *pfi.famount);
			ReadFile(fh, fi, sizeof(FILE_INFO) *pfi.famount, (unsigned long*) &size, NULL);
			for (i = 0; i < (int)pfi.famount; i++)
			{
				//匹配指定的文件名，读取指定文件名的数据到内存
				if (!lstrcmpi(fi[i].fname, fname))
				{
					SetFilePointer(fh, fi[i].offset, NULL, FILE_BEGIN);
					if (fi[i].type == 0)//未加密状态时，直接读入
					{
						*buf = (char*)GAlloc(fi[i].size);
						ReadFile(fh,  *buf, fi[i].size, (unsigned long*) &size, NULL);
					}
					else		//加密状态时，先读入加密数据，然后解码
					{
						src = (char*)GAlloc(fi[i].size);
						ReadFile(fh, src, fi[i].size, (unsigned long*) &size, NULL);
						//给解码空间多分配了4字节内存
						*buf = (char*)GAlloc(*(DWORD*)(src + 4));
						
						//解码加密数据
						size = LZS_DecodeMemory(*buf, &src[8], fi[i].size - 8, *(DWORD*)(src + 4));

						////如果解码失败，指定解码的字节+4不等于解码字节数
						if (*(DWORD*)(src + 4) != (DWORD)size)
						{
							DebugBox(NULL, "読み込みデータに異常が認められました。HDDまたはメモリ等にエラーがある可能性があります。\n\nオーバークロック等の改造を施している場合は、それを解除して下さい。\nまた、マシン環境に問題が殪いと思われる場合は、HDDのエラーチェックをした上で、\nゲームの再インストールを試して下さい。\nファイル名：[%s]", fname);
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
