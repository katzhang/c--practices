#include <iostream>

using namespace std;

class Date {
	int d, m, y;

public:
	Date(int dd = 0, int mm = 0, int yy = 0);

	void add_year(int n);
	void add_month(int n);
	void add_day(int n);
};

Date::Date(int dd, int mm, int yy) {
	d = dd ? dd : today.d;
	m = mm ? mm : today.m;
	y = yy ? yy : today.y;
}

