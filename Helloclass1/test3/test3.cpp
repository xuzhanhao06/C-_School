#include "pch.h"
#include"Animal.h"
#include "Cats.h"
#include"Dogs.h"
#include "Fox.h"
#include"Wolf.h"
#include "Lion.h"
#include"Tiger.h"
#include <string>
#include "test3.h"
using namespace std;



int main()
{
	Cats* c = new Cats("Cats", "男");
	c->talk();

	Dogs* d = new Dogs("Dogs", "男");
	d->talk();

	Fox* f = new Fox("FOX", 5, "male");
	f->talk();
	
	Wolf* t = new Wolf("Tiger", 6, "male");
	t->talk();

	f->Dog->set_Age("fox1");
	f->talk();
}

