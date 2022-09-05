#include <iostream>
#include "wektor.h"
using namespace std;

int main() {
	char anwser;
	do
	{
		cout<<"prosze o podanie wspolrzednych xyz dwoch punktow, ktore okresla wlasciwosci wektora"<<endl;
		float X, Y, Z;
		cin>>X>>Y>>Z;
		Punkt P(X,Y,Z);
		cin>>X>>Y>>Z;
		Punkt R(X,Y,Z);
		P.Przedstaw();
		R.Przedstaw();
		Wektor W(P,R);
		W.Przedstaw();
		cout<<"Dlugosc wektora wynosi:"<<W.Dlugosc()<<endl;
		cout <<"\nCzy chcesz policzyc nowy wektor: y/n? ";
        cin >> anwser;
        system ("cls");
	}
	while(anwser == 'y');
	return 0;
}
