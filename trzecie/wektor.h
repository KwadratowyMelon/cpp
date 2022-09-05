#include <string>
#include <iostream>

class Punkt {
	friend class Wektor;
	float mX, mY, mZ;
	public:
	Punkt();
	Punkt(float X, float Y, float Z);
	~Punkt();
	void Przedstaw();
	
};
class Wektor {
	float mA, mB, mC;
	public:
	Wektor();
	Wektor(Punkt, Punkt);
	~Wektor();
	void Przedstaw();
	float Dlugosc();
};
