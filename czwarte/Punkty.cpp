#include "Punkty.h"
#include <iostream>
#include <cmath>
using namespace std;

int point::counter = 0;
point::point(float a, float b){
	*x = a;
	*y = b;
	counter++;
	}
point::point(point &g){
	*x=*g.x;
	*y=*g.y;
	}
	
void point::info(){
	cout<<"wspolrzedne punktu ("<<x<<","<<y<<")"<<endl;
	licznik();
	}
void point::check(point A,point B,point C){
	if(A.x == B.x || B.x == C.x || C.x == A.x)
	cout<<"nie da sie poprowadzic paraboli przez podane punkty zegnam"<<endl;
		delete A.x;
		delete A.y;
		delete B.x;
		delete B.y;
		delete C.x;
		delete C.y;
	}
point::~point(){
	counter--;
	}	
float point::value(float xx, parabola p){
	float y = (*p.a)*(xx*xx) + (*p.b)*xx + (*p.c);
	this->y = &y;
	return y;
	}
point &point::operator =(point& p){
	delete x;
	delete y;
	x = new float;
	y = new float;
	*x = *p.x;
	*y = *p.y;
	return *this;
	}	

int point::licznik(){
	return counter;
	}
	
parabola::factor(point first,point second,point third){
	*a = ((*second.y - *third.y)/(*second.x - *third.x) - (*first.y - *second.y)/(*first.x - *second.x))/(*third.x - *first.x);
	*b = (*first.y - *second.y)/(*first.x - *second.x) - (*a)*((*first.x) + (*second.x));
	*c = *first.y - (*a)*((*first.x) * (*first.x)) - *b*(*first.x);
	counter++;
	return 0;
	}
void parabola::info(){
	cout<<"wzor funkcji ma sie nastepujaco y="<<a<<"x^2 + "<<b<<"x"<<" + "<<c<<endl;
	}
parabola::parabola(float x, float y, float z){
	*a =x;
	*b =y;
	*c =z;
	counter++;
	}	
parabola::parabola(parabola &p){
	*a = *p.a;
	*b = *p.b;
	*c = *p.c;
	 }	
	
parabola::~parabola(){
	counter--;
	}	
int parabola::counter = 0;
int parabola::licznik(){
	return counter;
	}
	
line::line(float &A,float &B){
	this -> A = A;
	this -> B = B;
	counter++;
	}	
line::~line(){
	counter--;
	}
void line::factor(parabola p,point pkt,float xx){
	A = 2*(*p.a) * xx + (*p.b);
	B = pkt.value(xx,p) - A*xx;
	}	
void line::info(point Punkcik){
	cout<<"rownanie stycznej w punkcie ("<<Punkcik.x<<","<<Punkcik.y<<") to \n y="<<A<<"x + "<<B<<endl;
	//										(	x		,		y	)
	}	
int line::counter = 0;
int line::licznik(){
	return counter;
	}
