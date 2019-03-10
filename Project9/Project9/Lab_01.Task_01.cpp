/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time() {
	}
	Time(int h, int m, int s) {
		if(h>=0&&h<24) this->hour = h;
		if (m >= 0 && m < 60)this->min = m;
		if (s >= 0 && s < 60)this->sec = s;
	}
	int timeChange(int h,int m,int s);
	void showTime1();
	void showTime2();
	void setTime(int h, int m, int s);
	~Time() {}
};
Time t;
int a, b, c;

int main() {
	scanf("\n%d\n%d\n%d", &a, &b, &c);
	t.setTime(a,b,c);
	t.showTime1();
	t.showTime2();
	printf("\ninput other time");
	scanf("\n%d\n%d\n%d", &a, &b, &c);
	t.timeChange(a, b, c);
	t.showTime1();
	t.showTime2();
	getchar();
	getchar();
}
int Time::timeChange(int h, int m, int s) {
	int i = 0;
	if (h >= 0 && h < 24) this->hour = h;
	else ++i;
	if (m >= 0 && m < 60)this->min = m;
	else ++i;
	if (s >= 0 && s < 60)this->sec = s;
	else ++i;
	while (i != 0) {
		printf("\nsomething went wrong.\n if you want try again press 0");
		int c;
		scanf("%d", &c);
		if (c == '0') {
			scanf("\n%d\n%d\n%d", &a, &b, &c);
			t.timeChange(a, b, c);
		}
	}
	return 0;
}
void Time::showTime1() {
	printf("%d hours %d minutes %d seconds", this->hour, this->min, this->sec);
}
void Time::showTime2() {
	printf("\n%d:%d:%d", this->hour, this->min, this->sec);
}
void Time::setTime(int h, int m, int s) {
	if (h >= 0 && h < 24) this->hour = h;
	if (m >= 0 && m < 60)this->min = m;
	if (s >= 0 && s < 60)this->sec = s;
}*/