#include <iostream>

using namespace std;

// difference between pass-by-value and pass-by-reference
void f(int val, int& ref) {
	++val;
	++ref;
}

void f2(int = 0, int val, int = 1);

int main() {
	int v = 0, r = 0;
	f(v, r);
	cout << "v: " << v << endl; // v: 0
	cout << "r: " << r << endl; // r: 1
	// f2(1, 1); error: missing default argument on parameter 'val'
} 