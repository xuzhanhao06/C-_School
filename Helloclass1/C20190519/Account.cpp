#include "pch.h"
#include "Account.h"


/*
double GetRepayment(Account account)//�ṹ��ĸ���
{
	account.bankName = "����";
	return account.limit - account.billAmount;
}//�ṹ��ĸ�����ִ����Ϻ��ͷ�
*/

double GetRepayment(const Account *account)//����ָ��;
{
//	account->bankName = "��������";  ����const �����޸�����ֵ
	return account->limit - account->billAmount;
}

