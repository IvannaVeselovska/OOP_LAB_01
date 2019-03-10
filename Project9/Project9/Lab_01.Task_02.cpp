/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Rectangle {
private:
	double length;
	double width;
public:
	Rectangle() {

	}
	Rectangle(double l, double w) {
		if (l > 0 && w > 0) {
			this->length = l;
			this->width = w;
		}
	}
	~Rectangle() {}
	void setRectangle();
	void getRectangle();
	void setLength();
	void setWidth();
	void getLength();
	void getWidth();
	void getArea();
	void getPerimeter();
};
Rectangle r;
int l, w;
int main() {
	r.setRectangle();
	r.getArea();
	r.getPerimeter();
	r.getLength();
	r.getWidth();
	r.getRectangle();
	r.setLength();
	r.setWidth();
	r.getRectangle();
	system("pause");
}
void Rectangle::setRectangle() {
	printf("\ninput your length and width");
	scanf("\n%d%d", &l, &w);
	if (l > 0 && w > 0) {
		this->length = l;
		this->width = w;
	}
}
void Rectangle::getRectangle() {
	printf("\nlength - %.2lf, width - %.2lf", this->length, this->width);
}
void Rectangle::getLength() {
	printf("\nlength - %.2lf", this->length);
}
void Rectangle::getWidth() {
	printf("\nwidth - %.2lf", this->width);
}
void Rectangle::setLength() {
	printf("\ninput your length");
	scanf("\n%d", &w);
	if (l > 0) this->length = l;
}
void Rectangle::setWidth() {
	printf("input your width");
	scanf("\n%d", &w);
	if (w > 0) this->width = w;
}
void Rectangle::getArea() {
	printf("\narea - %.2lf", (this->length)*(this->width));
}
void Rectangle::getPerimeter() {
	printf("\nperimeter - %.2lf", 2 * (this->length) + 2 * (this->width));
}*/