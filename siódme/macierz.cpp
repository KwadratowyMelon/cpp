#include "macierz.h"
#include <iostream>
#include <cmath>
using namespace std;

Macierz::Macierz(){
	N=0;
	M=0;
	}

Macierz::Macierz(int* n, int* m){
	this -> N = n;
	this -> M = m;
	}
	
Macierz::Macierz(const Macierz& M){
	this -> N = M.N;
	this -> M = M.M;
	}

Macierz::~Macierz(){
	cout<<"uzyto destruktora"<<endl;
	}
	
Macierz& operator+(Macierz o, Macierz t){
	Macierz d;
	return d = o + t;
	}

Macierz& operator-(Macierz o, Macierz t){
	Macierz d;
	return d = o - t;

	}

Macierz& operator*(Macierz o, Macierz t){
	Macierz d;
	return d = o * t;
	}		
