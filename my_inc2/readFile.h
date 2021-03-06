#ifndef _LEAFLIB_CREADFILE

#include <vector>

using namespace std;

struct file_info
{
	char fname[31];		//源数据文件名
	char bCompress;		//文件是否压缩
	int pack_size;		//当前文件大小
	int seekPoint;		//当前文件在PAK文件的偏移地址
};	//源数据文件信息结构体

struct stream_info
{
	int num;
	int seekPoint;
};

struct arc_file_info
{
	HANDLE handle;
	int fileCount;
	char dirName[24];
	file_info *pack_file;

	vector < stream_info > streamInfo;
	int streamMax;
	arc_file_info()
	{
		streamMax = 0;
		pack_file = NULL;
	} 
};	//ARC数据文件信息结构体

class ClReadFile
{
public:

	ClReadFile();
	~ClReadFile();


	int OpenPackFile(LPCSTR packName, int packNum =  - 1);
	int ReadPackFile(int arcFileNum, LPCSTR decFile, char **fileBuf);
	int ReadPackFileNum(int arcFileNum, int num, char **fileBuf);
	int StreamOpenFile(int arcFileNum, LPCSTR decFile, int &size);
	int StreamOpenFileNum(int arcFileNum, int num, int &size);

	ClResult StreamCloseFile(int arcFileNum, int streamNum);

	int StreamReadFile(int arcFileNum, int streamNum, char *read_buf, int size);

	ClResult StreamSeekFile(int arcFileNum, int streamNum, int seekSize, int moveMethod);
	ClResult ExtractFile(int srcFileNum, LPCSTR decFile, LPCSTR newFile);

	char *GetFileName(int arcFileNum, int num);
	char *GetArcDirName(int arcFileNum)
	{
			return ArcFile[arcFileNum].dirName;
	}

	int DecodePackFile(int read_size, BYTE *readFile, char **fileBuf);
	int SearchFile(int arcFileNum, LPCSTR decFile, BOOL errcheck = FALSE);
	int SequentialSearchFile(int arcFileNum, LPCSTR decFile);
	int GetSeekPoint(int arcFileNum, int num)
	{
		return ArcFile[arcFileNum].pack_file[num].seekPoint;
	}
private:

	vector < arc_file_info > ArcFile;
	int openFileNum;

};

int ReadPackFileFromMem(char *decFile, char *packMem, char **fileBuf);

extern ClReadFile *readFile;

#define _LEAFLIB_CREADFILE
#endif _LEAFLIB_CREADFILE
