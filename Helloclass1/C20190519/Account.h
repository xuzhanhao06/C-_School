#pragma once
#include<iostream>
#include<stdlib.h>
#include<conio.h>

typedef struct _account
{
	const char *bankName;
	const char *userName;
	double limit;
	double billAmount;
}Account;

/*
//传递结构变量时，是复制整个结构变量的值到函数中，效率低
 double GetRepayment(Account account);
 //*/

//参数传递的是接哦古指针-递名片
//参数中增加const后，会让指针更加安全
//double GetRepayment(Account *account);
double GetRepayment(const Account *account);


