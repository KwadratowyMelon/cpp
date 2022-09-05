#ifndef _sklep_h
#define _sklep_h
#include <iostream>
#include <list>
#include <stack>
using namespace std;

class towary{
public:
	float cena;
	string nazwa;
	
	towary(float,string);
	~towary();
	virtual void przedstaw();
	};

class pilka : public towary{
protected:
	string kolor;
	int rozmiar;
public:
	pilka(float,string,string,int);
	~pilka();
	void przedstaw();
	};
	
class buty : public towary{
protected:
	string uzycie;
public:
	buty(float,string,string);
	~buty();
	void przedstaw();
	};
	
class spodnie : public towary{
protected:
	string rodzaj;
public:
	spodnie(float,string,string);
	~spodnie();
	void przedstaw();
	};
	
class koszulka : public towary{
protected:
	string rodzaj;
	char rozmiar;
public:
	koszulka(float,string,string,char);
	~koszulka();
	void przedstaw();
	};	
	
class deska : public towary{
protected:
	string typ;
	float dlugosc;
public:
	deska(float,string,string,float);
	~deska();
	void przedstaw();
	};	
	
class koszyk{
protected:
	list<towary> wziete;
public:
	koszyk(list<towary>);
	void dodaj(towary);
	void wyjmij(towary);
	void zrezygnuj(koszyk);
	void wyswietl();
	};		
#endif
