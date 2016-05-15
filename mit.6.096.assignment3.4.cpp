#include <iostream>
#include "mit.6.096.assignment3.3.geometry.cpp"

using namespace std;

class PointArray {
private:
	Point *points;
	int len;
	void resize(int);
public:
	PointArray() : {
		points = new Point[0];
		len = 0;
	};
	PointArray(const Point pointsToCopy[], const int size) : {
		points = new Point[size];
		for (int i = 0; i < size; ++i) {
			points[i] = pointsToCopy[i];
		}
		len = size;
	};
	PointArray(const PointArray& pv) {
		points = pv; // copy
	};
	~PointArray() {
		delete[] points;
		len = 0;
	};
	void push_back(const Point &p);
	void insert(const int position, const Point &p);
	void remove(const int pos);
	const int getSize() const;
	void clear();
	Point *get(const int);


};

void PointArray::resize(int n) {
	Point *copy = new Point[n];
	for (int i = 0; i < n; ++i) {
		copy[i] = points[i];
	}
	delete[] points;
	points = copy;
	len = n;
}

void PointArray::push_back(const Point &p) {
	resize(len + 1);
	points[len - 1] = p;
}

void PointArray::insert(const int position, const Point &p) {
	resize(len + 1);
	for (int i = len - 1; i > position; --i) {
		points[i] = points[i - 1];
	}
	points[position] = p;
}

const int PointArray::getSize() const {
	return len;
}


