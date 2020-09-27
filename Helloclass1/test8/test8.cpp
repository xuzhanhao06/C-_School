#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;
//文件读写 -2018/12/24 11：32

//作业：文件模拟系统 当作数据库，学生信息管理 。喜欢的球星。 业余爱好等~（适当添加框框 美化！~）
//要求：1.更新文件
//		2.读取其中一行数据

//某个管理系统，在命令行模拟界面，每次操作后进行刷新界面，数据要写到文件中
//实现增删改查，可对某行数据即某条数据进行查询
int main()
{	
	ofstream ofs("ofs.data");
	if (ofs.is_open())
	{
		//写入
		ofs << "hello word ！" << endl;
		ofs << "hello c++ ！";
		ofs.close();

		//读取
		ifstream ifs("ofs.data", ios::ate);
		if (ifs.is_open())
		{
			long size = ifs.tellg();
			ifs.seekg(0, ios::beg);
			char* buf = new char[size - 1];
			ifs.read(buf, size -1);
			ifs.close();
			cout << buf<<endl;
			delete[] buf;
		}



	}




}
