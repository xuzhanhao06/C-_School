#include "pch.h"
#include "MyStack.h"


int main()
{
		MyStack < int >msi;	
		cout <<  msi.size() << endl;//
		for (int i =0;i<1000000;i++)
		{
			msi.push(i);
		}

		msi.push(123);
		msi.push(456);
		msi.push(789);//
		cout << "栈顶" << msi.top() << endl;
		cout << msi.size() << endl;//
		try 
		{
		cout << msi.pop() << endl;
		cout << msi.pop() << endl;
		cout << msi.pop() << endl;
		cout << msi.pop() << endl;
		}
		catch(out_of_range)
		{
			cout << "栈为空" << endl;
		}	
		MyStack<string> mss;
		mss.push("aaa");
		mss.push("bbb");
		mss.push("ccc");
		cout << mss.pop() << endl;
		cout << mss.pop() << endl;
		cout << mss.pop() << endl;

		
}

