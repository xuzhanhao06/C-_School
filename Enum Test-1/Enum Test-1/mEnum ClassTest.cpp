#include "pch.h"

#include <iostream>

using namespace std;



enum class Eruit { apple, strawberry, melon = 100 };
enum class Vegetable { tomato, cucumber, onion };

void foo()
{
	if (Vegetable::tomato == Vegetable::onion)
	{
		cout << "Hurra" << endl;
	}
	cout <<(int)Eruit::melon << endl;
/*	cout << Vegetable::melon * Vegetable::onion << endl;*/
}
/*
int main()
{

	foo();
}*/