#include "zwierzeta.h"
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	zwierze *z1 = new zwierze;
	zwierze *z2= new zwierze("robert",4);
	ryba *r1 = new ryba("darek",5,wody(slonowodne));
	plaz *p1 = new plaz("ludwik",7, 14);
	gad *g1 = new gad("bonifacy",3, 2);
	ptak *pt1 = new ptak("gustaw",1, "niebieskiego");
	ssak *s1 = new ssak("witold",3, 6);
	z1->przedstaw();
	z2->przedstaw();
	r1->przedstaw();
	p1->przedstaw();
	s1->przedstaw();
	pt1->przedstaw();
	g1->przedstaw();
	
	z1 = z2;
	z1->przedstaw();
	z1 = r1;
	z1->przedstaw();
	z1 = p1;
	z1->przedstaw();
	z1 = s1;
	z1->przedstaw();
	z1 = g1;
	z1->przedstaw();
	z1 = pt1;
	z1->przedstaw();
	return 1;
}
