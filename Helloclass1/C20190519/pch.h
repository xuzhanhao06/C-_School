// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
#define _CRT_SECURE_NO_WARNINGS   
#ifndef PCH_H
#define PCH_H

// TODO: 添加要在此处预编译的标头

#endif //PCH_H
#include<iostream>
#include<stdlib.h>
#include<conio.h>

typedef struct _job
{
	int id;
const	char* name;//职业名称
const	char* desc;//描述
}Job;
typedef struct _abillity
{
	int id;
	char* name;
	char* intro;//特殊能力说明；
}Abillity;
typedef struct _pubTime
{
	int year;
	int month;
	int day;
}PubTime;
typedef struct _myTime
{
	int year;
	int month;
	int day;
}MyTime;
typedef struct _hero
{
	int id;
	char* name;//指针需要动态开辟空间
	char sex;


	Job job;
//	char job[20];
	double hp;
//	int life;
	double speed;
//	char abillity[20];
	Abillity abillity;
	PubTime pubTime;
//	MyTime pubTime;
}Hero;
void InputHero();
void ShowHero();
