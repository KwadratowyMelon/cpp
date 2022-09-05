#include "wrzesinski.h"
#include <iostream>
#include <list>
using namespace std;

int main() {
	
list<zderzacz> pierwsza;
list<zderzacz> druga;	
	
zderzacz dane1(900, "pp", 1.5, 1402051215);
zderzacz dane2(5500, "PbPb", 0.5, 1404051000);
zderzacz dane3(900, "pp", 2.1, 1402071215);
//tu wypisuje się informacja o ilości baz danych
// tu wypisuje się informacja o tym ile miejsca zajmują zgromadzone w danej chwili dane
baza pp(pierwsza), PbPb(druga);
pp+dane1;
pp+dane3;
cout<<pp;
//tu wypisuje się informacja o ilości baz danych
// tu wypisuje się informacja o tym ile miejsca zajmują zgromadzone w danej chwili dane
PbPb+dane2;
cout<<PbPb;
pp-dane1;
cout<<pp;
//tu wypisuje się informacja o ilości baz danych
// tu wypisuje się informacja o tym ile miejsca zajmują zgromadzone w danej chwili dane
return 0;
}
