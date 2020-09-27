
#include "pch.h"
#include <iostream>
#include	<string.h>
#define USER_NAME "admin"
#define PASSWORD  "admin"

int login(char[], char[]);

int main()
{
	char userName[50] ;
	char password[50] ;
	printf("请输入用户名：");
//	fgets(userName,50, stdin);
	gets_s(userName);
	printf("请输入密码：");
//	fgets(password,50, stdin);
	gets_s(password);
	if (login(userName, password) == 1)
	{
		printf("恭喜，登陆成功！\n");
	}
	else
	{
		printf("密码输入错误@\n");
	}

//	printf("%d\n", login("admin", "admin"));
    
}
int login(char userName[], char password[])
{
	int result = 0;
	if (strcmp(USER_NAME, userName) == 0 && strcmp(PASSWORD, password) == 0) //比较两个一样
	{
		//验证合法
		result = 1;
	}

	return result;

}
