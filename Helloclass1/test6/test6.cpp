
#include"pch.h"
#include"test6.h"

int main()
{
	MyQueue<int> msi;
	msi.enque(123);
	msi.enque(456);
	msi.enque(789);
	cout << msi.deque() << endl;
	cout << msi.deque() << endl;
	cout << msi.deque() << endl;
	cout << msi.is_empty() << endl;
	cout << msi.size() << endl;
}
