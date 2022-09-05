#include "wektor.h"
#include <iostream>
#include <math.h>
using namespace std;

Punkt::Punkt(){
	mX = 0.0;
	mY = 0.0;
	mZ = 0.0;
	}
Punkt::Punkt(float X, float Y, float Z){
	mX = X;
	mY = Y;
	mZ = Z;
	}
Punkt::~Punkt(){
	delete &mX;
	delete &mY;
	delete &mZ;
	}

void Punkt::Przedstaw(){
	cout<<"Podano punkt o wspolrzednych ("<<mX<<","<<mY<<","<<mZ<<")"<<endl;
	}
	
Wektor::Wektor(){
	mA = 0.0;
	mB = 0.0;
	mC = 0.0;
	}
Wektor::Wektor(Punkt P,Punkt R){
	mA = P.mX - R.mX;
	mB = P.mY - R.mY;
	mC = P.mZ - R.mZ;
	}
Wektor::~Wektor(){
	delete &mA;
	delete &mB;
	delete &mC;
	}
void Wektor::Przedstaw(){
	cout<<"Wektor ma wartosci["<<mA<<","<<mB<<","<<mC<<"]"<<endl;
	}
float Wektor::Dlugosc(){
	float dlugosc = sqrt((mA*mA) + (mB*mB) + (mC*mC));
	return dlugosc;
	}	
