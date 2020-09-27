
#include "pch.h"
#include "Account.h"
#include <iostream>

int main()
{
	Account account = {"建设银行","机甲师",30000,28000};
	//double result = GetRepayment(account);
	double result = GetRepayment(&account);

/*	printf("should repayment:%.2lf \n",result);
	printf("default: %s \n",account.bankName);*/
	InputHero();
}
