#include <string>
#include <iostream>

class Date {
	int year; 
	int month;
	int day;
	public:
	void readDate(int& , int& , int&); 
	void printDate(); 
	int count(int x);
	int count(int y, int z);
	int WhoWasFirst(Date egg, Date chicken);
	int difference(Date a, Date b);

};
