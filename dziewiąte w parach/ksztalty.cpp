#include "ksztalty.h"
#include <iostream>
#include <cmath>
using namespace std;

float PI = 3.141592653;

punkt::punkt(float X, float Y) {
	this->x = X;
	this->y = Y;
}
punkt::~punkt() {
	cout << "destruktor unicestwil punkt" << endl;
}
float punkt::dlugoscOdcinka(punkt* a, punkt* b) {
	float AB = sqrt(pow((b->x - a->x), 2) + pow((b->y - a->y), 2));
	return AB;
}

figura2D::figura2D(float pole, float obwod) {
	this->P = pole;
	this->L = obwod;
}
figura2D::~figura2D() {
	cout << "destruktor unicestwil figure" << endl;
}
void figura2D::pole() {
	cout << "pole tej figury to " << P << endl;
}
void figura2D::obwod() {
	cout << "obwod tej figury to " << L << endl;
}
void figura2D::druk() {
	// trzeba sie wykazac wyjatkowym sprytem i pomyslowoscia chyba
}

kolo::kolo(float pole, float obwod, float promien) :figura2D(pole, obwod) {
	this->R = promien;
}
kolo::~kolo() {
	cout << "destruktor unicestwil kolo" << endl;
}
void kolo::pole() {
	P = 2 * PI * pow(R, 2);
	cout << "pole tego kola to " << P << endl;
}
void kolo::obwod() {
	L = 2 * PI * R;
	cout << "obwod tego kola to " << L << endl;
}
void kolo::druk() {

}

koloAnalit::koloAnalit(float pole, float obwod, punkt* srodek) :kolo(pole, obwod) {
	this->srodek = *srodek;
	this->obw = obwod;
}
koloAnalit::~koloAnalit() {
	cout << "destruktor unicestwil kolo analityczne" << endl;
}
void koloAnalit::pole() {
	P = pow(obw, 2) / (2 * PI);
	cout << "pole tego kola analitycznego to " << P << endl;
}
void koloAnalit::obwod() {
	L = 2*sqrt(P*PI);
	cout << "obwod tego kola analitycznego to " << L << endl;
}
void koloAnalit::druk() {

}

prostokat::prostokat(float pole, float obwod, float a, float b) :figura2D(pole, obwod) {
	this-> A = a;
	this-> B = b;
}
prostokat::~prostokat() {
	cout << "destruktor unicestwil prostokat" << endl;
}
void prostokat::pole() {
	P = A*B;
	cout << "pole tego prostokata to " << P << endl;
}
void prostokat::obwod() {
	L = 2*(A + B);
	cout << "obwod tego prostokata to " << L << endl;
}
void prostokat::druk() {

}

prostokatAnalit::prostokatAnalit(float pole, float obwod, punkt* a, punkt* b, punkt* c, punkt* d) :prostokat(pole, obwod) {
	if (a != NULL)
		this->a = *a;
	else
		this->a = *new punkt();
	if (b != NULL)
		this->b = *b;
	else
		this->b = *new punkt();
	if (c != NULL)
		this->c = *c;
	else
		this->c = *new punkt();
	if (d != NULL)
		this->d = *d;
	else
		this->d = *new punkt();
}
prostokatAnalit::~prostokatAnalit() {
	cout << "destruktor unicestwil prostokat analityczny" << endl;
}
void prostokatAnalit::pole() {
	float A = a.dlugoscOdcinka(&a, &b);
	float B = b.dlugoscOdcinka(&b, &c);
	P = A * B;
	cout << "pole tego prostokata analitycznego to " << P << endl;
}
void prostokatAnalit::obwod() {
	float A = a.dlugoscOdcinka(&a, &b);
	float B = b.dlugoscOdcinka(&b, &c);
	L = 2 * (A + B);
	cout << "obwod tego prostokata analitycznego to " << L << endl;
}
void prostokatAnalit::druk() {

}

trojkat::trojkat(float pole, float obwod, float podstawa, float wysokosc) :figura2D(pole, obwod) {
	this->A = podstawa;
	this->H = wysokosc;
	
}
trojkat::~trojkat() {
	cout << "destruktor unicestwil trojkat" << endl;
}
void trojkat::pole() {
	P = (A * H)/ 2;
	cout << "pole tego trojkata to " << P << endl;
}
void trojkat::obwod() {

	cout << "nie da sie policzyc obwodu trojkata majac tylko wysokosc i podstawe" << endl;
}
void trojkat::druk() {

}

trojkatAnalit::trojkatAnalit(float pole, float obwod, punkt* A, punkt* B, punkt* C) :trojkat(pole, obwod) {
	this->a = A->dlugoscOdcinka(A, B);
	this->b = B->dlugoscOdcinka(B, C);
	this->c = C->dlugoscOdcinka(C, A);
	pole = P;
	obwod = L;
}
trojkatAnalit::~trojkatAnalit() {
	cout << "destruktor unicestwil trojkat analityczny" << endl;
}
void trojkatAnalit::pole() {
	float p = (a+b+c)/2;
	P = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "pole tego trojkata analitycznego to " << P << endl;
}
void trojkatAnalit::obwod() {
	L = a + b + c;
	cout << "obwod tego trojkata analitycznego to " << L << endl;
}
void trojkatAnalit::druk() {

}
