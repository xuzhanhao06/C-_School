#include "pch.h"
#include "Account.h"


/*
double GetRepayment(Account account)//结构体的副本
{
	account.bankName = "招商";
	return account.limit - account.billAmount;
}//结构体的副本，执行完毕后释放
*/

double GetRepayment(const Account *account)//传递指针;
{
//	account->bankName = "招商银行";  加了const 不让修改其中值
	return account->limit - account->billAmount;
}

