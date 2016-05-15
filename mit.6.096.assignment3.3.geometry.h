#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public: 
	Point(int a = 0, int b = 0) : x(a), y(b) {}
	int getX() const;
	int getY() const;
	void setX(const int);
	void setY(const int);
};

