// BodyMeasurementManagementSystem.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include<math.h>
using namespace std;

/***************************
显示所有信息
****************************/

string search()
{
	cout << "------------------------------------------------------------------------\n" << endl;
	cout << "\t姓名\t" << "性别\t" << "成绩 \t" << endl;

	ifstream in;

	in.open("BodyMeasurement.data");
	if (in.is_open())
	{

		string s = "";			//作为临时变量，保存每行数据

		string strCount = "";		//将每行数据串起来，最后返回

		cout << "\n" << endl;					//换行

		while (getline(in, s))   //每行进行查找，将每行的数据放入s中
		{
			strCount += s + " " + "\n";   //将每行读到的数据串起来
		}

		in.close();

		return strCount;  //返回string类型的数据
	}
	else
	{
		return "文件不存在！";
	}

}

/***************************
查询指定信息
****************************/

void search(string info)  //传过来需要查找的信息
{

	ifstream in;

	in.open("BodyMeasurement.data");
	if (in.is_open())
	{

		string outInfo;	  //用来存储每行信息

		cout << "\n" << endl;					//换行


		int begin = -1;

		while (getline(in, outInfo))
		{
			if ((begin = outInfo.find(info)) != string::npos)   //将每行的信息与要查找的信息相匹配
			{
				cout << "------------------------------------------------------------------------\n" << endl;
				cout << "\t*查找信息如下： " << endl;
				cout << "\t*\t姓名\t" << "性别\t" << "成绩 \t*" << endl;
				cout << "\t*" << outInfo << "\t*" << endl;    //打印查找到的那行信息

			}
		}
		in.close();
	}
	else
	{
		cout << "文件不存在！" << endl;
	}

}


/***************************
写入数据
****************************/
void writeData()
{
	ifstream in;
	in.open("BodyMeasurement.data");
	if (in.is_open())
	{

		string mingzi = "";

		string xingbie = "";

		string chengji = "";

		string strCount = "";

		int test = -1;

		while (true)
		{
			cout << "------------------------------------------------------------------------\n" << endl;
			cout << "\t*\t请输入数据：(退出按q )  \t*" << endl;

			cout << "\t*\t姓名：";

			cin >> mingzi;

			if ((test = mingzi.find("q")) != string::npos)
			{
				cout << "结束！" << endl;

				in.close();

				cout << search() << endl;   //退出时再查找，显示出所有数据

				return;
			}

			cout << "\t*\t性别：";

			cin >> xingbie;
			cout << "\t*\t成绩：";

			cin >> chengji;
			cout << "\t*";
			strCount = search() + "\t" + mingzi + "\t" + xingbie + "\t" + chengji;
			strCount += "\n";

			ofstream out;

			out.open("BodyMeasurement.data");

			out.flush();

			out << strCount;

			out.close();

		}

	}
	else
	{
		cout << "文件不存在！" << endl;
	}

}


/***************************
修改
****************************/
void search(string info, string change)
{

	ifstream in;

	in.open("BodyMeasurement.data");
	if (in.is_open())
	{
		string outInfo;
		string strFileData = "";

		cout << "\n" << endl;					//换行



		int begin = -1;

		while (getline(in, outInfo))
		{
			if ((begin = outInfo.find(info)) != string::npos)
			{ 
				if(change =="")//s删除操作
			{
					strFileData += change;
			}
			else
			{ 
				strFileData += change + "\n";	
			}			//查找到后，将新的信息写进去，原始信息不写进去
			}
			else
			{
				strFileData += outInfo + "\n";   //将每行的信息进行追加
			}

		}
		in.close();

		//重新将数据写入文件

		ofstream changeInfo;

		changeInfo.open("BodyMeasurement.data");

		changeInfo.flush();

		changeInfo << strFileData;

		changeInfo.close();

		cout << "\n" << endl;
	}
	else
	{
		cout << "文件不存在！" << endl;
	}

}



/***************************
主菜单
****************************/

void manage()
{
	/*
	主页 菜单项
	每次处理完后，
	就调用查找的方法，显示所有数据
	最后调用一次主页
	*/
	cout << "------------------------------------------------------------------------" << endl;
	cout << "命令：0:显示所有信息  1：查询  2：添加  3：修改  4:删除" << endl;
	cout << "------------------------------------------------------------------------\n" << endl;

	int content = -1;
	cin >> content;
	string info = "";
	string change = "";
	switch (content)
	{
	case 0:
		cout << search() << endl;;
		manage();
		break;

	case 1:
		cout << "\t输入要查找的信息： \n\t";
		cin >> info;
		search(info);
		manage();
		break;

	case 2:
		writeData();
		manage();
		break;

	case 3:
		cout << "\t输入要修改的信息： \n\t";
		cin >> info;
		cout << "\t\n输入信息： \n\t";
		cin >> change;
		search(info, change);
		cout << search() << endl;;
		manage();
		break;

	case 4:
		cout << "\t输入要删除的信息： \n\t";
		cin >> info;
		search(info, "");
		cout << search() << endl;;
		manage();
		break;

	default:
		cout << "\t输入无效！请重新输入！" << endl;
		manage();
		break;
	}

}


int main()
{
	cout << "***********************欢迎使用，学生学习成绩系统 ***********************\n" << endl;

	manage();			//入口，进入主页

}
