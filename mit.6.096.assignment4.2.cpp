#include <iostream>
#include <string>
#define min3(a, b) ((a)<(b)?(a):(b))

using namespace std;

template<class T>
T min2(const T &a, const T &b) {
	return a < b ? a : b;
}

int main() {
	string a = "a";
	string z = "z";
	cout << "min: " << min3(z, a) << endl;
}



