#include <iostream>
#include <fstream>
#include <conio.h>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

template <class type>
void wypisz(type tab[], int N) {
for (int j=0; j<N; j++)
cout<<tab[j]<<" ";
cout<<endl<<endl;
}
template <class type>
void sortowanie_rosnace(type tab[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(tab[j-1]>tab[j])
			swap(tab[j-1], tab[j]);
}
template <class type>
void sortowanie_malejace(type tab[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(tab[j-1]<tab[j])
			swap(tab[j-1], tab[j]);
}

int tablica[10];
int liczba_liczb;
char tab[10];
int liczba_znakow;
int tab1[10];


int main() {
	//liczby
fstream fout;
fout.open("int.dat");
fout>>liczba_liczb;
for(int i=0;i<11;i++){
		fout>>tablica[i];
	}
fout.close();
cout<<"w pliku int.dat sa nastepujace liczby"<<endl;
wypisz(tablica,liczba_liczb);
fstream fin;
sortowanie_malejace(tablica,liczba_liczb);
fin.open("liczby.txt");
for(int i=0; i<liczba_liczb+1; i++){
fin<<tablica[i]<<" ";
}
fin.close();

cout<<"liczby posortowano od najwiekszej do najmniejszej i wpisano do pliku liczby.txt"<<endl;
wypisz(tablica,liczba_liczb);
	//znaki
fstream fout2;
fout2.open("char.dat");
fout2>>liczba_znakow;
for(int i=0;i<10;i++){
		fout2>>tab[i];
	}
cout<<"w pliku char.dat sa nastepujace litery"<<endl;
wypisz(tab,liczba_znakow);
fstream fin2;
fout2.close();
//sort(tab,tab + liczba_znakow);
fin2.open("znaki.txt");
for(int i=0; i<liczba_znakow+1; i++){
fin2<<tab[i]<<" ";
}
fin2.close();
cout<<"znaki posortowano alfabetycznie wpisano do pliku znaki.txt"<<endl;
wypisz(tab,10);
	// losowe
cout<<"jaka ilosc liczb z przedzialu [0,1] wylosowac?"<<endl;
int x;
cin>>x;
double losowane[x];
for(int a,i=0;i<x+1;i++){
	a = (rand() % 18);
	losowane[i]={(double)a/17};
	}
wypisz(losowane,x);
fstream fin3;
fin3.open("wylosowane.txt");
for(int i=0; i<x+1; i++){
fin3<<losowane[i]<<" ";
}
fin3.close();
cout<<"posortowac liczby malejaco - 0 czy rosnaco - 1 ?"<<endl;
int y;
cin>>y;
if(y==0){
	sortowanie_malejace(losowane,x);
	cout<<"liczby posortowano malejaco i wpisano do pliku znaki.txt"<<endl;}
	else if(y==1){
		sortowanie_rosnace(losowane,x);
		cout<<"liczby posortowano rosnaco i wpisano do pliku znaki.txt"<<endl;}
	else{
		cout<<"nie wybrano zadnej opcji liczby zostana wpisane do pliku tak jak zostaly wylosowane"<<endl;}
fin3.open("wylosowane_posortowane.txt");
for(int i=0; i<x+1; i++){
fin3<<losowane[i]<<" ";
}
fin3.close();
wypisz(losowane,x);
return 0;
}
