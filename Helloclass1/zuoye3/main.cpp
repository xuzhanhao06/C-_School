#include "pch.h"
#include <iostream>
#include"nature.h"
#include"plant.h"
#include"animal.h"
#include"cat.h"
#include"dog.h"
#include"grass.h"
#include"tree.h"
using namespace std;
/////////////////////////////////////////////
int main()
{
	animal* t0 = new animal( "51", "爸爸一号", "打儿子1");
	t0->talk();
	delete t0;

	plant* t1 = new plant("52", "爸爸二号", "打儿子2");
	t1->talk();
	delete t1;

	cat* t2 = new cat("11", "一号爸爸的第一个儿子", "打自己1","大鱼幼儿园1");
	t2->talk();
	delete t2;

	dog* t3 = new dog("12", "一号爸爸的第二个儿子", "打自己2", "大肉幼儿园2");
	t3->talk();
	delete t3;

	grass* t4 = new grass("21", "二号爸爸的第一个儿子", "打自己1", "阳光幼儿园1");
	t4->talk();
	delete t4;

	tree* t5 = new tree("22", "二号爸爸的第二个儿子", "打自己2", "月光幼儿园2");
	t5->talk();
	delete t5;
}