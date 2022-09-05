#include "liczby.h"
#include <iostream>
using namespace std;


int main() {
	long n;
	long a, c, m, s;
	cout<<"Podaj ile liczb ma zostac wygenerowane, wspolczynniki generatora oraz jego ziarno:"<<endl;
	cin>>n>>a>>c>>m>>s;
	Generator gen(n, a,c,m,s);
	gen.PrintGenerator(); //tutaj wypisują się wygenerowane liczby pseudolosowe z przedzialu [0, 1]
	Histogram h1(gen);
	int grupy;
//	h1.Fill(gen);
	cout<<"na ile grup rozlozyc histogram?"<<endl;
	cin>>grupy;
	h1.PrintHisto(gen, grupy);
	return 0;
}
