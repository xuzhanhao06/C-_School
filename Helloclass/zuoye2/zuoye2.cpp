// zuoye2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"

#include"nature.h"
#include"animal.h"
#include"plant.h"
#include"cat.h"
#include"dog.h"
#include"tree.h"
#include"grass.h"
#include <iostream>
using namespace std;

/////////////////////////////////////////////




int main()
{
	//animal* s = new animal(10, "aaa", "z85160128");
	// nature_talk(s);
	//delete s;

	plant* t = new plant(11, "bbb", "professor");
	//	t->set_age(-18);

	t->research();
	t->research("to be or not to be");
	t->research("panda", 3);
	t->research(4, "tiger");
	//	cout << t->get_age() << endl;
	
	/*	nature_talk(t);*/
	delete t;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
