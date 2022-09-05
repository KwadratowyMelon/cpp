#include "wrzesinski.h"
#include <iostream>
#include <list>
using namespace std;

zderzacz::zderzacz(unsigned int E,string T,double C,long D){
	energia=E;
	typ=T;
	zderzenia=C;
	data=D;
	
	}
void zderzacz::wyswietl(){
	cout<<"energia "<<energia<<"GeV typ "<<typ<<" ilosc zderzen "<<zderzenia<<" milionow o godzinei"<<data<<endl;
	}	
/* baza::baza(){
	dane= ;    konstruktor domyslny nie dziala wiec pozniej inicjalizujemy juz na jakiejs stworzonej liscie
	} */
	
baza::baza(list<zderzacz> Dane){
	dane=Dane;
	}

baza* baza::operator+(const zderzacz& z){
	this->dane.push_front(z); // dodaje pomiar na poczatek listy
	return this;
	}
baza* baza::operator-(const zderzacz& z){
	for(list<zderzacz>::iterator i=this->dane.begin(); i!=this->dane.end(); )
      if (i->data == z.data)
         this->dane.erase(i); // szuka pomiaru z taka sama godzina wykonania i usuwa
      else
         i++; 
    return this; 
	}
ostream& operator<<(ostream& os,baza& b){
	for(list<zderzacz>::iterator i=b.dane.begin(); i!=b.dane.end(); ){
		os<<"energia "<<i->energia<<"GeV typ "<<i->typ<<" ilosc zderzen "<<i->zderzenia<<" milionow o godzinei"<<i->data<<endl; //uzywa funkcji wyswietlajacej dane na kazzdym elemencie listy od poczatku do konca listy
		i++;
		}
	return os;
	}
