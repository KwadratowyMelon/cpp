#include <iostream>
#include "baza.h"
#include <list>

using namespace std;

int main(int argc, char** argv) {
	list<Czlowiek> lst;
	
	Czlowiek c1;
	c1.Dodaj();
	lst.push_back(c1);
	
	Czlowiek c2;
	c2.Dodaj();
	lst.push_back(c2);
	
	Czlowiek c3;
	c3.Dodaj();
	lst.push_back(c3);
	
	list<Czlowiek>::iterator i;
	for (i= lst.begin(); i!=lst.end(); i++) 
		i->Wypisz();
	return 0;
}
