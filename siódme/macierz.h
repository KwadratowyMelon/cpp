#ifndef _macierz_h
#define _macierz_h
#include <iostream>
using namespace std;


class Macierz{
	int *N;
	int *M;
	public:
	Macierz();
	Macierz(int*, int*);
	Macierz(const Macierz&);
	~Macierz();
	Macierz& operator=(const Macierz&);
	friend Macierz& operator+(Macierz, Macierz);
	friend Macierz& operator-(Macierz, Macierz);
	friend Macierz& operator*(Macierz, Macierz);
	friend ostream& operator<<(ostream&, Macierz&);
};

Macierz& operator+(Macierz, Macierz);
Macierz& operator-(Macierz, Macierz);
Macierz& operator*(Macierz, Macierz);
ostream& operator<<(ostream&, Macierz&);

#endif
