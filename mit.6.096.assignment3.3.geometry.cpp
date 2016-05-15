#include <iostream>
#include "mit.6.096.assignment3.3.geometry.h"

using namespace std;

int Point::getX() const {
	return x;
};
int Point::getY() const {
	return y;
};
void Point::setX(const int newx) {
	x = newx;
};
void Point::setY(const int newy) {
	y = newy;
};

int main() {
	Point *p = new Point(2, 5);
	cout << p->getX() << endl;
}

