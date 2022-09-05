#include "liczby.h"
#include <iostream>
#include <cmath>
using namespace std;

Generator::Generator(long &N, long &w1, long &w2, long &w3, long &seed){
	this -> N = N;
	this -> w1 = w1;
	this -> w2 = w2;
	this -> w3 = w3;
	this -> seed = seed;
	tab = new double[N];
	tab[0]=(w1*seed+w2) % w3;
	for(int i = 1; i < N+1; i++){		
		tab[i]=(lround(w1*tab[i-1]+w2) % w3);
	}
}
void Generator::PrintGenerator(){
	double najwieksza = 0;
	double wlasciwa;
	for (int i=0;i<=N;i++){
		if (tab[i] > najwieksza){
		najwieksza= tab[i];}
	}
	for (int i=0;i<=N;i++){
		wlasciwa = tab[i]/(double)najwieksza;
		tab[i] = wlasciwa;
		cout<<tab[i]<<endl;
	}
}
Generator::~Generator(){
	cout<<"destruktor unicestwil obiekt"<<endl;
}
Histogram::Histogram(Generator G){
	histo = G.tab;
	}

void Histogram::Fill(Generator G){
	
}	
int Histogram::PrintHisto(Generator G, int liczbagrup){
	grupy = new int[liczbagrup]();
	for (int a = 1; a <= liczbagrup; a++){
		for (int i = 0; i < G.N; i++){
			if ((histo[i] < (a/liczbagrup)) && (histo[i] > ((a-1)/liczbagrup))){
			grupy[a-1] +=1;
			}
		}
	}
	for (int i = 0; i <= liczbagrup; i++){
		cout<<i<<" grupa "<<grupy[i-1]<<" liczb"<<endl;}	
	
	return 0;}	
Histogram::~Histogram(){
	cout<<"destruktor unicestwil histogram"<<endl;
	}
