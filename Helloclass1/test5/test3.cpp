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

void Animal_s(Animal& shout)
{
	shout.talk();
}

int main()
{
	Wolf w;
	w.name = "WOLF";
	Animal_s(w);

	Tiger t;
	t.name = "TIGER";
	Animal_s(t);
	
	Fox f;
	f.name ="FOX";
	Animal_s(f);
	
	Lion l;
	l .name = "LION";
	Animal_s(l);
}

