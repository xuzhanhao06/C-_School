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
//���ݽṹ����ʱ���Ǹ��������ṹ������ֵ�������У�Ч�ʵ�
 double GetRepayment(Account account);
 //*/

//�������ݵ��ǽ�Ŷ��ָ��-����Ƭ
//����������const�󣬻���ָ����Ӱ�ȫ
//double GetRepayment(Account *account);
double GetRepayment(const Account *account);


