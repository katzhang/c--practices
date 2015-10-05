#include <iostream>

using namespace std;

class complex {
	double re, im;
public:
	complex():re{0}, im{0} {}
	complex(double r = 0):re{r}, im{0} {} // build a complex from a double
	complex(double r = 0, double i = 0):re{r}, im{i} {}

	constexpr complex(double r = 0, double i = 0): re{r}, im{i} {}

	// Accessor functions
	constexpr double real() const { return re; }
	constexpr double imag() const { return im; }

	void real(double r) { re = r; }
	void imag(double i) { im = i; }


	bool operator==(complex a, complex b) {
		return a.real() == b.real() && a.imag() == b.imag();
	}

	complex& operator+=(complex a) {
		re += a.re;
		im += a.im;
		return *this;
	} // needs access to representation

	complex& operator+=(double a) {
		re += a;
		return *this;
	}

	// -=, *=, and /=

};

complex operator+(complex a, complex b) {
	return a += b; // calls complex::operator+=(complex)
}

complex operator+(complex a, double b) {
	return {a.real() + b, a.imag()};
}

complex operator+(double a, complex b) {
	return {a + b.real(), b.imag()};
}

// binary -, *, and /

void f(complex x, complex y, complex z) {
	complex r1 {x+y+z}; // r1 = operator+(operator+(x, y), z)
	complex r2 {x};
	r2 += y;
	r2 += z;

	auto r3 = x + y; // calls operator+(complex, complex)
	auto r4 = x + 2; // calls operator+(complex, double)
	auto r5 = 2 + 3; // built-in integer addition

	x == y; // means operator==(x, y)
	x == 3; // means operator==(x, complex(3))
	3 == y; // means operator==(complex(3), y)
}

int main() {

}









