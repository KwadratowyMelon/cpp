#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
class Wielomian {
	T* rzecz;
	T* uroj;
	T nr;
	T nu;

public:
	Wielomian(T* rzecz, T* uroj, T nr, T nu) {
		this->rzecz = rzecz;
		this->uroj = uroj;
		this->nu = nu;
		this->nr = nr;
	}

	void Wypisz() {
		cout << "y(x) =";
		if (nr > 0) {
			//jezeli stopien wielomianu wynosi 0 to go nie wypisuj
			cout<<" (";
			//wypisanie kolejnych wartosci wielomianu
			for (int i = nr - 1; i >= 0; i--) {			
				//jezeli wspolczynnik wynosi 0, pomin
				if (rzecz[i] == 0)
					continue;
				//jezeli jest to pierwszy element, nie wypisuj symoblu +
				if (i != nr - 1)
					cout << " + ";
				//wypisanie wspolczynnika wielomianu
				cout << rzecz[i];
				if (i != 0)
					cout << "x^" << i;
			}
			cout << ") +";
		}
		//jezeli stopien wielomianu wynosi 0 to go nie wypisuj
		if (nu > 0) {
			cout << " i(";
			for (int i = nu - 1; i >= 0; i--) {
				//jezeli wspolczynnik wynosi 0, pomin
				if (uroj[i] == 0)
					continue;
				//jezeli jest to pierwszy element, nie wypisuj symoblu +
				if (i != nu - 1)
					cout << " + ";
				cout << uroj[i];
				//wypisanie wspolczynnika wielomianu
				if (i != 0)
					cout << "x^" << i;
			}
			cout << ")" << endl;
		}
	}

	void Rozniczka() {
		nr--;
		//obliczanie kolejnych wspolczynnikow wielomianu rzeczywistego
		for (int i = 0; i < nr; i++) {
			rzecz[i] = rzecz[i + 1] * (i+1);
		}
		nu--;
		//obliczanie kolejnych wspolczynnikow wielomianu urojonego
		for (int i = 0; i < nu; i++) {
			uroj[i] = uroj[i + 1] * (i + 1);
		}
	}
};

int main() {
	int nr;
	cout << "Podaj stopien czesci rzeczywistej wielomianu: ";
	cin >> nr;
	nr++;
	cout << "Podaj wspolczynniki wielomianu:" << endl;
	//utworzenie tablicy z wspolczynnikami czesci rzeczywistej wielomianu
	int* rzecz = new int[nr];
	//pobieranie kolejnych wspolczynnikow czesci rzeczywistej  wielomianu
	for (int i = nr-1; i >= 0; i--) {
		cin >> rzecz[i];
	}


	int nu;
	cout << "Podaj stopien czesci urojonej wielomianu: ";
	cin >> nu;
	nu++;
	cout << "Podaj wspolczynniki wielomianu:" << endl;
	//utworzenie tablicy z wspolczynnikami czesci urojonej wielomianu
	int* uroj = new int[nu];
	//pobieranie kolejnych wspolczynnikow czesci urojonej wielomianu
	for (int i = nu - 1; i >= 0; i--) {
		cin >> uroj[i];
	}
	
	//utworzenie wielomianu o podanych wlasciwosciach
	Wielomian<int>* wielomian = new Wielomian<int>(rzecz, uroj, nr, nu); 
	cout << "Wielomian przed rozniczkowaniem: " << endl;
	wielomian->Wypisz();
	//rozniczkowanie
	wielomian->Rozniczka();
	//wypisanie wielomianu po rozniczkowaniem
	cout << "Wielomian po rozniczkowaniu: " << endl;

	wielomian->Wypisz();

}
