#include "ksztalty.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float Alfa, Bravo, Charlie, Delta, Echo, Foxtrot, Golf, Hotel, India, Juliett, Kilo, Lima, Mike, November, Oscar, Papa, Quebec, Romeo, Sierra, Tango;
	figura2D *z1 = new figura2D;
	figura2D *z2= new figura2D(5,4);
	cout<<"podaj promien kola"<<endl;
	cin>>Alfa;
	kolo *k1 = new kolo(0,0,Alfa);
	z1=k1;
	k1->pole();
	k1->obwod();
	cout<<"podaj obwod kola"<<endl;
	cin>>Bravo;
	cout<<"podaj wspolrzedne srodka kola"<<endl;
	cin>>Charlie;
	cin>>Delta;
	punkt *p4 = new punkt(Charlie, Delta);
	koloAnalit *k2 = new koloAnalit(0,Bravo,p4);
	z2 = k2;
	z2->pole();
	z2->obwod();
	// z2->druk();
	cout<<"podaj dlugosci bokow prostokata"<<endl;
	cin>>Echo;
	cin>>Foxtrot;
	prostokat *pr = new prostokat(0,0,Echo,Foxtrot);
	z1 = pr;
	z1->pole();
	z1->obwod();
	// z1->druk();
	cout<<"podaj 3 wierzcholki prostokata"<<endl;
	cin>>Golf;
	cin>>Hotel;
	cin>>India;
	cin>>Juliett;
	cin>>Kilo;
	cin>>Lima;
	punkt *p1 = new punkt(Golf, Hotel);
	punkt *p2 = new punkt(India, Juliett);
	punkt *p3 = new punkt(Kilo, Lima);
	prostokatAnalit *pra = new prostokatAnalit(0,0,p1,p2,p3);
	z1 = pra;
	z1->pole();
	z1->obwod();
	// z1->druk();
	cout<<"podaj podstawe i wysokosc trojkata"<<endl;
	cin>>Mike;
	cin>>November;
	trojkat *t = new trojkat(0,0,Mike,November);
	z1 = t;
	z1->pole();
	z1->obwod();
	// z1->druk();
	cout<<"podaj 3 wierzcholki trojkata"<<endl;
	cin>>Oscar;
	cin>>Papa;
	cin>>Quebec;
	cin>>Romeo;
	cin>>Sierra;
	cin>>Tango;
	punkt *p5 = new punkt(Oscar, Papa);
	punkt *p6 = new punkt(Quebec, Romeo);
	punkt *p7 = new punkt(Sierra, Tango);
	trojkatAnalit *ta = new trojkatAnalit(0,0,p5,p6,p7);
	z1 = ta;
	z1->pole();
	z1->obwod();
	// z1->druk(); 

	return 0;
}
