#include <iostream>

using namespace std;

namespace NP_1 {
	void f2() {
		cout << "this is np1 f2" << endl;
	}
	void f1() {
		f2();
	}
}

namespace NP_2 {
	void f2() {
		cout << "this is np2 f2" << endl;
	}
	void f1() {
		NP_1::f2();
		f2();
	}
}

int main() {
	NP_2::f1();
};