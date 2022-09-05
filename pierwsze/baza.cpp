#include "baza.h"
#include <iostream>
using namespace std;


void Czlowiek::Dodaj() {
	this->Imie = "Jan";
	this->Nazwisko = "Kowalski";
	this->Rok = 1;
	this->Grupa = 1;
}
void Czlowiek::Wypisz() {
	cout<<"Imie: "<<this->Imie<<endl;
	cout<<"Nazwisko: "<<this->Nazwisko<<endl;
	cout<<"Rok: "<<this->Rok<<endl;
	cout<<"Grupa: "<<this->Grupa<<endl;
}
