#ifndef _wrzesinski_h
#define _wrzesinski_h
#include <iostream>
#include <list>
using namespace std;

class baza;
class zderzacz{
	public:
	unsigned int energia;
	string typ;
	double zderzenia;
	long data;
	
	zderzacz(unsigned int,string,double,long);
	void wyswietl();
	friend baza& operator+(zderzacz);
	friend baza& operator-(zderzacz);
	friend baza;
	};
	
class baza{
	public:
	list<zderzacz> dane;
	
	baza();
	baza(list<zderzacz>);
	baza* operator+(const zderzacz&);
	baza* operator-(const zderzacz&);
	friend ostream& operator<<(ostream&,baza&);
	};	
ostream& operator<<(ostream&,baza&);
	
#endif
