#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "malloc.h"
using namespace std;

class Mnozhina {
private:
	int k;
	int* m = (int*)calloc(k + 1, sizeof(int));
public:
	Mnozhina() {
		printf("\ninput number of elements");
		scanf("%d", &this->k);
		printf("\ninput elements");
		for (int i = 0; i <= this->k; ++i) 
			scanf("%d", &(this->m[i]));
	}
	~Mnozhina(){}
	void set();
	void get();
	int getK();
	int* getM();
	void peretin();
	void riznitsya();
};
Mnozhina n, l;
int main() {
	n.get();
	l.get();
	n.peretin();
	l.riznitsya();
	system("pause");
}
void Mnozhina::set() {
	printf("\ninput number of elements");
	scanf("%d", &this->k);
	printf("\ninput elements");
	for (int i = 0; i <= k; ++i)
		scanf("%d", &(this->m[i]));
}
int Mnozhina::getK() {
	return this->k;
}
int* Mnozhina::getM() {
	return this->m;
}
void Mnozhina::get() {
	printf("\nelements\n");
	for (int j = 0; j <= this->k; ++j)
			printf("\t%d", n.getM[j]);
}
void Mnozhina::peretin() {
	printf("\nperetin\n");
	for (int i = 0; i <= n.getK(); ++i)
		for (int j = 0; j <= l.getK(); ++j)
			if (n.getM[i] == l.getM[j])
				printf("\t%d", n.getM[i]);
}
void Mnozhina::riznitsya() {
	printf("\nperetin\n");
	int s;
	for (int i = 0; i <= n.getK(); ++i) {
		s = 0;
		for (int j = 0; j <= l.getK(); ++j)
			if (n.getM[i] == l.getM[j])
				++s;
		if (!s) printf("\t%d", n.getM[i]);
	}
}