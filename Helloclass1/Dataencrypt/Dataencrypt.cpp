#include "pch.h"
#include <iostream>
#define KEY 5
//************************************************************************************************************
//加密解密
//
//************************************************************************************************************
char* encrypt(char[]);
char* dencrypt(char[]);
int main()
{
	char password[50] = "123456";
	encrypt(password);
	printf("加密的字符串为：%s \n", password);
	dencrypt(password);
	printf("解密的字符串为：%s \n", password);
}

char* encrypt(char password[])
{
	int count = strlen(password);//字符长度
	for (int i = 0; i < count; i++)
	{
		password[i] = password[i] + i + KEY;
	}
	return password;
}
char* dencrypt(char password[])
{
	int count = strlen(password);//字符长度
	for (int i = 0; i < count; i++)
	{
		password[i] = password[i] - i - KEY;
	}
	return password;

}