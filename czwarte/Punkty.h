#ifndef _Punkty_h
#define _Punkty_h
#include <iostream>

class parabola;
class point {
	private:
	float *x;
	float *y;
	static int counter;	
	public:
	point(float,float);
	point(point&);
	~point();
	void info();
	float value(float xx, parabola);
	void check(point,point,point);
	point &operator = (point&);
	point operator << (point&);
	static int licznik();
	
	friend class parabola;
	friend class line;
	};

class parabola {
	private:
	float *a;
	float *b;
	float *c;
	static int counter;
	public:
	parabola(float,float,float);
	parabola(parabola&);
	~parabola();
	void info();
	int factor(point ,point ,point );
	parabola operator = (parabola&);
	parabola operator << (parabola&);
	static int licznik();
	
	friend class point;
	friend class line;
	};
	
class line {
	private:
	float A;
	float B;
	static int counter;
	public:
	line(float &A,float &B);
	~line();
	void info(point);
	void factor(parabola ,point ,float xx);
	static int licznik();
	};
#endif
