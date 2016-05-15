#include <iostream>
#include "mit.6.096.assignment3.4.cpp"

using namespace std;

class Polygon {
private:
	PointArray points;
	static int n;
public:
	Polygon(const Point pts[], const int size) : points(pts, size) {
		n++;
	};

	Polygon(const PointArray& pv) : points(pv) {
		n++;
	};
	~PointArray() {
		delete points;
		n--;
	};
	virtual double area() const = 0;
	static int getNumPolygons() {
		return n;
	}
	int getNumSides() const {
		return points.getSize();
	}
	const PointArray *getPoints() const {
		return &points;
	};

};

// Trick
Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0, 0)) {
	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	constructorPoints[3] = p4;
	return constructorPoints;
}

class Rectangle : class Polygon {

public:
	Rectangle(const Point &p1, const Point &p2);
	Rectangle(const int a1, const int a2, const int b1, const int b2);
};

Rectangle::Rectangle(const Point &ll, const Point &ur) : Polygon(updateConstructorPoints(ll, Point(ll.getX(), ur.getY(), ur, Point(ur.getX(), ll.getY()))), 4) {}

double Rectangle::area() {
	int len = points.get(1)->getY() - points.get(0)->getY();
	int wid = points.get(2)->getX() - points.get(1)->getX();

	return abs((double) len * wid);
}


