/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "string.h"
#include <cstdio>
using namespace std;

class String {
private:
	char* ryadok;
	int kilkist;
public:
	String() {
		printf("input your string, 0 -the end");
		cin >> this->ryadok;
		this->kilkist = strlen(this->ryadok);
	}
	~String(){}
	void set();
	void get();
	char* getR(String a);
	void isIn();
	void concat();
};
String s, t;
int main() {
	s.get();
	s.isIn();
	s.concat();

}

void String::set() {
	printf("\ninput your string");
	cin >> this->ryadok;
	this->kilkist = strlen(this->ryadok);
}
void String::get() {
	printf("\nstring:\n");
	puts(this->ryadok);
	printf("\nthe number of signs - %d", this->kilkist);
}
char* String::getR(String a) {
	return a.ryadok;
}
void String::isIn() {
	if (strstr(getR(s), getR(t))) printf("\nstring \"%s\" is in \"%s\"", getR(s), getR(t));
	else printf("\nstring \"%s\" isn't in \"%s\"", getR(s), getR(t));
}
void String::concat() {
	printf("\nconcatanation:\n%s", strcat(getR(s), getR(t)));
}*/
