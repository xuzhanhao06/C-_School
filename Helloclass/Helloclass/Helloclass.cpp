#include "pch.h"
#include <iostream>
#include"person age.h"
#include"teacher.h"
#include"student.h"

using namespace std;

/////////////////////////////////////////////




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
    cout<<t->student.get_age()<<endl;
    t->student.set_number(38);
//	cout << t->get_age() << endl;

	t->mate->set_name("kaite");
	//cout<< <<endl;


	/*person_talk(t);*/
	delete t;
}