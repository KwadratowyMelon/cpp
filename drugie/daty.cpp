#include "daty.h"
#include <iostream>
using namespace std;

void Date::readDate(int& d, int& m, int& r) {
	this->year = r;
	this->month = m;
	this->day = d;
	
}
void Date::printDate() {
	cout<<"Year: "<<this->year<<endl;
	cout<<"Month: "<<this->month<<endl;
	cout<<"Day: "<<this->day<<endl;

}
int Date::count(int x) {
	
	if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
		x = 31 - this->day;
		}
	else if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
		x = 30 - this->day;
		}
	else if(this->month == 2 && this->year%4==0){
		x = 29 - this->day;
		}
	else {
		x = 28 - this->day;
		}
		return x;
}
int Date::count(int y, int z){
	y = z = this->day;
	return y;
}
int Date::WhoWasFirst(Date egg, Date chicken){
	if(egg.year == chicken.year){
		if(egg.month == chicken.month){
			if(egg.day == chicken.day){
				cout<<"ta sama data"<<endl;
				return 0;}
			else if(egg.day < chicken.day){
				cout<<"data 1 starsza"<<endl;
				return 1;}
			else{ 
				cout<<"data 2 starsza"<<endl;
				return 2;
				}
			}
		else if(egg.month < chicken.month){
			cout<<"data 1 starsza"<<endl;
			return 1;}
		else{
			cout<<"data 2 starsza"<<endl;
			return 2;}
		}
	else if(egg.year < chicken.year){
		cout<<"data 1 starsza"<<endl;
		return 1;}
	else {
		cout<<"data 2 starsza"<<endl;
		return 2;}
}
int Date::difference(Date a, Date b){
	int Who = this->WhoWasFirst(a, b);
	int result = 0;
	int MonthlyDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int TotalMonthlyDays = 0;
	int TotalMonthlyDays2 = 0;
	int YearlyDays = 0 ;
	if(this->year%4 == 0){
		MonthlyDays[2]=29;
		}	
	
	if(Who == 0){
		return 0;
	}
	else if(Who == 1){
		
		for (int i = a.month; i < 13; i++){
			TotalMonthlyDays += MonthlyDays[i];}
		for (int i = b.month; i > 0; i--){
			TotalMonthlyDays2 += MonthlyDays[i];}
		for (int i = a.year + 1; i < b.year; i++){
			if((a.year+1)%4 == 0)
				{YearlyDays += 366;}
			else
				{YearlyDays +=365;}
			}
	
		result = count(a.day) + b.day  + TotalMonthlyDays + TotalMonthlyDays2 + YearlyDays;
	}
	else if(Who == 2){
		for (int i = b.month; i < 13; i++){
			TotalMonthlyDays += MonthlyDays[i];}
		for (int i = a.month; i > 0; i--){
			TotalMonthlyDays2 += MonthlyDays[i];}
		for (int i = b.year + 1; i < a.year; i++){
			if((a.year+1)%4 == 0)
				{YearlyDays += 366;}
			else
				{YearlyDays +=365;}
			}
		result = count(b.day) + a.day  + TotalMonthlyDays + TotalMonthlyDays2 + YearlyDays;
	}
	cout<<"roznica wynosi:"<<endl;
	return result;
}

