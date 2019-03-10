/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int d, m, y;
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date() {
		printf("\ninput your date");
		scanf("\n%d%d%d", &d, &m,&y);
		if (d > 0 && m > 0&&d<32&m<13&&y>0) 
		if(m==2)
			if(y%4==0)
				if (d < 30) {
					this->day = d;
					this->month = m;
					this->year = y;
				}
				else printf("\nsomething went wrong");
			else if (d < 29) {
				this->day = d;
				this->month = m;
				this->year = y;
			}
			else printf("\nsomething went wrong");
		else if(m==4||m==6||m==9||m==11)
			if (d<31) {
				this->day = d;
				this->month = m;
				this->year = y;
			}
			else printf("\nsomething went wrong");
		else {
			this->day = d;
			this->month = m;
			this->year = y;
		}
	}
	~Date(){}
	void set();
	void setDay();
	void setMonth();
	void setYear();
	void get();
	void get2();
	void getDay();
	void getMonth();
	void getYear();
	void increase();
};
Date a;
int main() {
	//a.set();
	a.get();
	a.setDay();
	a.setMonth();
	a.setYear();
	a.get2();
	a.increase();
	a.getDay();
	a.getMonth();
	a.getYear();
	system("pause");
}
void Date::set() {
	printf("\ninput your date");
	scanf("\n%d%d%d", &d, &m, &y);
	if (d > 0 && m > 0 && d < 32 & m < 13 && y>0)
		if (m == 2)
			if (y % 4 == 0)
				if (d < 30) {
					this->day = d;
					this->month = m;
					this->year = y;
				}
				else printf("\nsomething went wrong");
			else if (d < 29) {
				this->day = d;
				this->month = m;
				this->year = y;
			}
			else printf("\nsomething went wrong");
		else if (m == 4 || m == 6 || m == 9 || m == 11)
			if (d < 31) {
				this->day = d;
				this->month = m;
				this->year = y;
			}
			else printf("\nsomething went wrong");
		else {
			this->day = d;
			this->month = m;
			this->year = y;
		}
}
void Date::setDay() {
	printf("\ninput your day");
	scanf("\n%d", &d);
	if (d > 0 && d<32) this->day = d;
}
void Date::setMonth() {
	printf("\ninput your month");
	scanf("\n%d", &m);
	if (m > 0 && m < 13) this->month = m;
}
void Date::setYear(){
	printf("\ninput your year");
	scanf("\n%d", &y);
	if (y > 0) this->year = y;
}
void Date::getDay(){
	printf("\nday - %d", this->day);
}
void Date::getMonth(){
	printf("\nmonth - %d", this->month);
}
void Date::getYear(){
	printf("\nyear - %d", this->year);
}
void Date::increase() {
	if (m == 2)
		if (y % 4 == 0)
			if (d ==29) {
				this->day = 1;
				(this->month)++;
			}
			else printf("\nsomething went wrong");
		else if (d ==28) {
			this->day = 1;
			(this->month)++;
		}
		else printf("\nsomething went wrong");
	else if (m == 4 || m == 6 || m == 9 || m == 11)
		if (d ==30) {
			this->day = 1;
			(this->month)++;
		}
		else printf("\nsomething went wrong");
	else if(d==31&&m==12) {
		this->day = 1;
		this->month = 1;
		(this->year)++;
	}
}
void Date::get() {
		printf("\n%d/%d/%d", this->day, this->month,this->year);
}
void Date::get2() {
	printf("\n%d-%d-%d", this->year,this->month, this->day);
}*/