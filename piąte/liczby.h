#ifndef _liczby_h
#define _liczby_h
#include <iostream>

class Generator {
	long N;
	long w1, w2, w3;
	long seed;
	double *tab;	
	public:
	Generator(long &N, long &w1, long &w2, long &w3, long &seed);
	~Generator();
	void PrintGenerator();
	friend class Histogram;
};

class Histogram {
	int liczbagrup;
	double *histo;
	int *grupy;
	public:
	Histogram(Generator);
	~Histogram();
	void Fill(Generator);
	int PrintHisto(Generator G, int liczbagrup);
};


#endif
