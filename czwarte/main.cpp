#include "Punkty.h"
#include <iostream>
using namespace std;

int main(){
	//1.
	float a,b,c,d,e,f;
	cout<<"prosze podac wspolrzedne x i y pierwszego punktu:"<<endl;
	cin>>a;
	cin>>b;
	point* one;
	cout<<"prosze podac wspolrzedne x i y drugiego punktu:"<<endl;
	cin>>c;
	cin>>d;
	point* two;
	cout<<"prosze podac wspolrzedne x i y trzeciego punktu:"<<endl;
	cin>>e;
	cin>>f;
	point* three;
	one->info();
	two->info();
	three->info();
	cout<<"istnieja obecnie "<<point::licznik()<<" punkty"<<endl;
	//2.
	one -> check(*one,*two,*three);
	//3.
	parabola* Parabola;
	Parabola->factor(*one,*two,*three);
	Parabola->info();
	//4.
	float xx,yy;
	cout<<"prosze podac rzedna punktu przez ktory bedzie poprowadzona styczna do paraboli"<<endl;
	cin>>xx;
	point* przeciecie;
	yy = przeciecie->value(xx,*Parabola);
	cout<<"wspolrzedne przeciecia stycznej i paraboli to ("<<xx<<","<<yy<<")"<<endl;
	//5.
	float aaa,bbb;
	line* styczna = new line(aaa,bbb);
	styczna->factor(*Parabola, *przeciecie, xx);
	styczna->info(*przeciecie);
	return 0;
}
