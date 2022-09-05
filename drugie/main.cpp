#include <iostream>
#include "daty.h"

using namespace std;

int main() {

	char anwser;
	do
	{
		Date d1, d2;
		int d, m, r;
		cin>>d>>m>>r;
		d1.readDate(d,m,r);
		cin>>d>>m>>r;
		d2.readDate(d,m,r);
		d1.printDate();
		d2.printDate();
		d2.WhoWasFirst(d1,d2);
		cout<<d2.difference(d1,d2)<<endl;
		cout <<"\nCzy chcesz zakonczyc prace petli: y/n? ";
        cin >> anwser;
        system ("cls");
	}
	while(anwser == 'y');
	return 0;
}
