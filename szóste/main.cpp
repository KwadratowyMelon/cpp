#include "sklep.h"
#include <iostream>
#include <list>
using namespace std;

int main() {
	list<towary> lista;
	int petla=0;
	int x;
	float suma=0;
	towary *t = new towary(0,"");
	pilka *p1 = new pilka(5.99,"pilka","czerwona",4);
	pilka *p2 = new pilka(15.99,"pilka","brazowa",5);
	buty *b1 = new buty(49.99,"buty","do biegania");
	buty *b2 = new buty(129.99,"buty","zimowe");
	spodnie *s1 = new spodnie(59.99,"spodnie","dresy");
	spodnie *s2 = new spodnie(89.99,"spodnie","jeansy");
	koszulka *k1 = new koszulka(69.99,"koszulka","t-shirt",'L');
	koszulka *k2 = new koszulka(99.99,"koszulka","polo",'M');
	deska *d1 = new deska(59.99,"deska","surfingowa",2.6);;
	deska *d2 = new deska(39.99,"deska","skatingowa",1.1);
	koszyk *kosz = new koszyk(lista);
	while(petla < 100){
	cout<<"do dzialu z jakimi produktami chcesz przejsc?"<<endl;
	cout<<"1.pilkami"<<endl;
	cout<<"2.butami"<<endl;
	cout<<"3.spodniami"<<endl;
	cout<<"4.koszulkami"<<endl;
	cout<<"5.deskami"<<endl;
	cout<<"6.sprawdz co masz w koszyku"<<endl;
	cout<<"7.koniec zakupow ide do kasy"<<endl;
	cout<<"8.wychodze ze sklepu"<<endl;
	cin>>x;
	if(x==1){
		cout<<"na polkach sa:"<<endl;
		p1->przedstaw();
		p2->przedstaw();
		cout<<"czy ktorys z produktow spakowac do koszyka?"<<endl;
		cout<<"tak-wybierz numer wedlug rozpiski, nie-wcisnij 0"<<endl;
		int p;
		cin>>p;
		if(p==1){
			t = p1;
			kosz->dodaj(*t);
			suma+=5.99;}
		else if(p==2){
			t = p2;
			kosz->dodaj(*t);
			suma+=15.99;}
		else{
			petla++;}
		}
	else if(x==2){
		cout<<"na polkach sa:"<<endl;
		b1->przedstaw();
		b2->przedstaw();
		cout<<"czy ktorys z produktow spakowac do koszyka?"<<endl;
		cout<<"tak-wybierz numer wedlug rozpiski, nie-wcisnij 0"<<endl;
		int b;
		cin>>b;
		if(b==1){
			t = b1;
			kosz->dodaj(*t);
			suma+=59.99;}
		else if(b==2){
			t = b2;
			kosz->dodaj(*t);
			suma+=129.99;}
		else{
			petla++;}
			}
	else if(x==3){
		cout<<"na polkach sa:"<<endl;
		s1->przedstaw();
		s2->przedstaw();
		cout<<"czy ktorys z produktow spakowac do koszyka?"<<endl;
		cout<<"tak-wybierz numer wedlug rozpiski, nie-wcisnij 0"<<endl;
		int s;
		cin>>s;
		if(s==1){
			t = s1;
			kosz->dodaj(*t);
			suma+=59.99;}
		else if(s==2){
			t = s2;
			kosz->dodaj(*t);
			suma+=89.99;}
		else{
			petla++;}
			}
	else if(x==4){
		cout<<"na polkach sa:"<<endl;
		k1->przedstaw();
		k2->przedstaw();
		cout<<"czy ktorys z produktow spakowac do koszyka?"<<endl;
		cout<<"tak-wybierz numer wedlug rozpiski, nie-wcisnij 0"<<endl;
		int k;
		cin>>k;
		if(k==1){
			t = k1;
			kosz->dodaj(*t);
			suma+=69.99;}
		else if(k==2){
			t = k2;
			kosz->dodaj(*t);
			suma+=99.99;}
		else{
			petla++;}
			}
	else if(x==5){
		cout<<"na polkach sa:"<<endl;
		d1->przedstaw();
		d2->przedstaw();
		cout<<"czy ktorys z produktow spakowac do koszyka?"<<endl;
		cout<<"tak-wybierz numer wedlug rozpiski, nie-wcisnij 0"<<endl;
		int d;
		cin>>d;
		if(d==1){
			t = d1;
			kosz->dodaj(*t);
			suma+=59.99;}
		else if(d==2){
			t = d2;
			kosz->dodaj(*t);
			suma+=39.99;}
		else{
			petla++;}
			}
	else if(x==6){
		kosz->wyswietl();}	
	else if(x==7){
		cout<<"jestes przy kasie za wszystkie produkty wyszlo "<<suma<<" zl"<<endl;
		cout<<"y-placisz czy n-rezygnujesz?"<<endl;
		char decyzja;
		cin>>decyzja;
		if(decyzja == 'y'){
			cout<<"dziekujemy za zakupy"<<endl;
			x+=1000;
			petla+=1000;
			return 0;}
		else if(decyzja == 'n'){
			kosz->zrezygnuj(*kosz);
			cout<<"zapraszamy ponownie"<<endl;
			return 0;}
			}
	else if(x==8){
		petla+=1000;
		x+=1000;}		
	}
		return 0;
}
