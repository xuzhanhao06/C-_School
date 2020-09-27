#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

/*
struct Hero    
{
	int id;
	const char *name;
	char skill[50];
}hero1;
*/

/*门派*/
struct Martial
{
	int id;
	char name[50];//门派名称
	int count; //门派人数
	int type;//门派类型 1正 2中 3反 派
};

struct Player
{
	int id;
	char name[50];
	char pass[50];//玩家登陆密码
	char sex; //玩家性别
	struct Martial martial;//玩家所属门派

}player1,player2;


int main()
{
	player1 = { 1,"和尚洗头用飘柔","123456",'f',{1,"鲁克萨斯",500,3} };
	player2 = { 2,"开心麻瓜","123456",'m',{1,"麻瓜派",500,3} };
	struct Player *ptr_player2 = &player2;
	printf("%s\t%s\n",player2.name,player2.martial.name);
//使用指针访问
	printf("%s\t%s\n", (*ptr_player2).name, (*ptr_player2).martial.name);
	printf("%s\t%s\n", ptr_player2->name, ptr_player2->martial.name);

/*	hero1 = { 5,"二狗","圣药" };
//	struct Hero1 hero1 = {5,"二狗","圣药"};	
	 printf("请输入英雄的名称：");
	 hero1.name = (char*)malloc(50);
	 scanf_s("%s",hero1.name);
	 printf("%d\t%s\t%s\t",hero1.id,hero1.name,hero1.skill);
*/
/*	const char* words = "My heart is still." ;
	words += 9;
	puts(words);//输出 is still.
   */ 
}

