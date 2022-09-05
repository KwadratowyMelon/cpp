#include "zwierzeta.h"
#include <iostream>
#include <cmath>
using namespace std;

zwierze::zwierze(string a, unsigned int b){
	this -> imie = a;
	this -> wiek = b;
	}

zwierze::~zwierze(){
	cout<<"usunieto obiekt pochodzenia zwierzecego"<<endl;
	}

void zwierze::przedstaw(){
	cout<<"zwierze ma na imie "<<imie<<" ma "<<wiek<<" lat"<<endl;
	}

ryba::ryba(string a,unsigned int b,enum wody c):zwierze(a,b){
	this -> woda = c;
	}
	
ryba::~ryba(){
	cout<<"usunieto obiekt pochodzenia rybnego"<<endl;
	}
	
void ryba::przedstaw(){
	string typ;
	if(woda == 0){
		typ = "nieokreslone";}
	else if (woda == 1){
		typ = "slodkowodna";}
	else if (woda == 2){
		typ = "slonowodna";}
	else {
		}
	cout<<"zwierze ma na imie "<<imie<<" ma "<<wiek<<" lat "<<endl;
	cout<<"i jest ryba "<<typ<<endl;
	}	

plaz::plaz(string a,unsigned int b,unsigned int c):zwierze(a,b){
	this -> dlugosc = c;
	}
	
plaz::~plaz(){
	cout<<"usunieto obiekt pochodzenia plaza"<<endl;
	}
	
void plaz::przedstaw(){
	cout<<"zwierze ma na imie "<<imie<<" ma "<<wiek<<" lat "<<endl;
	cout<<"i jest plazem o dlugosci "<<dlugosc<<"cm"<<endl;
	}

gad::gad(string a,unsigned int b,unsigned int c):zwierze(a,b){
	this -> dlugosc_zycia= c;
	}
	
gad::~gad(){
	cout<<"usunieto obiekt pochodzenia gada"<<endl;
	}
	
void gad::przedstaw(){
	cout<<"zwierze ma na imie "<<imie<<" ma "<<wiek<<" lat "<<endl;
	cout<<"i jest gadem o dlugosci zycia "<<dlugosc_zycia<<" lat"<<endl;
	}

ptak::ptak(string a,unsigned int b,string c):zwierze(a,b){
	this -> kolor = c;
	}
	
ptak::~ptak(){
	cout<<"usunieto obiekt pochodzenia ptaka"<<endl;
	}
	
void ptak::przedstaw(){
	cout<<"zwierze ma na imie "<<imie<<" ma "<<wiek<<" lat "<<endl;
	cout<<"i jest ptakiem o kolorze "<<kolor<<endl;
	}	
	
ssak::ssak(string a,unsigned int b,unsigned int c):zwierze(a,b){
	this -> ciaza = c;
	}
	
ssak::~ssak(){
	cout<<"usunieto obiekt pochodzenia plaza"<<endl;
	}
	
void ssak::przedstaw(){
	cout<<"zwierze ma na imie "<<imie<<" ma "<<wiek<<" lat "<<endl;
	cout<<"i jest ssakiem w "<<ciaza<<" tygodniu caizy"<<endl;
	}
