#include "pch.h"
#include"Person.h"
#include "teacher.h"
#include"student.h"
#include <string>
#include <iostream>
using namespace std;


void person_talk(Person* p)
{
	p->talk();
}

void person_talk(Person& p)
{
	p.talk();
}



int main()
{
	/*Person* s = new Student(10, "aaa", z85160128);
	person_talk(s);
	delete s;*/

	Teacher* t = new Teacher(11, "bbb", "professor");
	//	t->set_age(-18);
	t->research();
	//	t->research("to be or not to be");
	//	t->research("panda", 3);
	//  t->research(4, "tiger");
	cout << t->student.get_age() << endl;
	t->student.set_number(38);
	//	cout << t->get_age() << endl;

	t->mate->set_name("kate");

	/*person_talk(t);*/
	delete t;
}