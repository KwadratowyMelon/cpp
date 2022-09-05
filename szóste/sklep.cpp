#include "sklep.h"
#include <iostream>
#include <list>
using namespace std;

towary::towary(float c,string n){
	cena=c;
	nazwa=n;	
	}
towary::~towary(){
	cout<<"usunieto towar"<<endl;
	}
void towary::przedstaw(){
	cout<<nazwa<<" kosztuje "<<cena<<" zl"<<endl;
	}	
	
pilka::pilka(float c, string n, string k, int r) :towary(c, n){
	cena=c;
	nazwa=n;
	kolor=k;
	rozmiar=r;
	}
pilka::~pilka(){
	cout<<"usunieto pilke"<<endl;
	}	
void pilka::przedstaw(){
	cout<<kolor<<" pilka "<<nazwa<<" w rozmiarze "<<rozmiar<<" kosztuje "<<cena<<endl;
	}	
	
buty::buty(float c, string n, string u) :towary(c, n){
	cena=c;
	nazwa=n;
	uzycie=u;
	}
buty::~buty(){
	cout<<"usunieto buty"<<endl;
	}	
void buty::przedstaw(){
	cout<<"buty "<<uzycie<<" "<<nazwa<<" kosztuja "<<cena<<endl;
	}
		
spodnie::spodnie(float c, string n, string r) :towary(c, n){
	cena=c;
	nazwa=n;
	rodzaj=r;
	}	
spodnie::~spodnie(){
	cout<<"usunieto spodnie"<<endl;
	}	
void spodnie::przedstaw(){
	cout<<rodzaj<<" "<<nazwa<<" kosztuja "<<cena<<endl;
	}
		
koszulka::koszulka(float c, string n,string r, char roz) :towary(c, n){
	cena=c;
	nazwa=n;
	rodzaj=r;
	rozmiar=roz;
	}	
koszulka::~koszulka(){
	}	
void koszulka::przedstaw(){
	cout<<nazwa<<" "<<rodzaj<<" w rozmiarze "<<rozmiar<<" kosztuje "<<cena<<endl;
	}	
deska::deska(float c, string n,string t, float d) :towary(c, n){
	cena=c;
	nazwa=n;
	typ=t;
	dlugosc=d;
	}		
deska::~deska(){
	cout<<"usunieto deske"<<endl;
	}
void deska::przedstaw(){
	cout<<dlugosc<<" metrowa "<<nazwa<<" "<<typ<<" kosztuje "<<cena<<endl;
	}	
	
koszyk::koszyk(list<towary> t){
	wziete=t;
	}	

void koszyk::dodaj(towary t){
	wziete.push_front(t);
	}
void koszyk::wyjmij(towary t){
	for(list<towary>::iterator i=wziete.begin(); i!=wziete.end(); )
      if (i->nazwa == t.nazwa)
         wziete.erase(i);
      else
         i++; 
	}
void koszyk::zrezygnuj(koszyk k){
	delete &k;
	}	
void koszyk::wyswietl(){
	for(list<towary>::iterator i=wziete.begin(); i!=wziete.end(); ){
		i->przedstaw();
		i++;
		}
	}
