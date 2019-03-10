/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator;
	int denominator=1;
public:
	Fraction(){}
	Fraction(int n, int d) {
		this->numerator = n;
		this->denominator = d;
	}
	~Fraction(){}
	double frac();
	void set();
	double sum();
	double diference();
	double multiply();
	double divide();

};
Fraction i, j;
int n, d;
int main() {
	i.set();
	j.set();
	printf("\nsum - %.2lf", i.sum());
	printf("\ndiference - %.2lf", i.diference());
	printf("\nmultiply - %.2lf", i.multiply());
	printf("\ndivide - %.2lf", i.divide());
	system("pause");
}
void Fraction::set() {
	printf("\ninput your numenator and denominator");
	scanf("\n%d%d", &n, &d);
	if (d > 0) {
		this->numerator = n;
		this->denominator = d;
	}
}

double Fraction::frac() { 
	if (d > 0) return numerator*1.0 / denominator;
}
double Fraction::sum(){
	return i.frac()+ j.frac();
}
double Fraction::diference(){
	return i.frac() - j.frac();
}
double Fraction::multiply(){
	return i.frac() * j.frac();
}
double Fraction::divide(){
	return i.frac() / j.frac();
}*/