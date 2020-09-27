// PaiSheng.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "Grandpa.h"
#include "Father_one.h"
#include "Son_one.h"
#include"Son_two.h"
using namespace std;


int main()
{
	Father_one* f1 = new Father_one("张三","男","跑步");
	f1->like();

	Son_one* s1 = new Son_one("李四",23,"女","羽毛球");
	s1->like();

	Son_two* s2 = new Son_two("王五", "男", "足球", "南京师范大学中北学院");
	s2->like();
	
}
