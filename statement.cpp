#include <iostream>
#include <vector>

using namespace std;

void print_vector(const vector<int>& v) {
	for (int x : v) {
		cout << "vector value: " << x << endl;
	}
}

int main() {
	void* p1;
	int* p2;

	int n1 = 0;
	int n2 = 1;

	if (p1) {
		cout << "p1 is converted to true" << endl;
	}

	if (p2) {
		cout << "p2 is converted to true" << endl;
	}

	if (!nullptr) {
		cout << "nullptr is converted to false" << endl;
	}

	if (!n1) {
		cout << "n1 is converted to false" << endl;
	}

	if (n2) {
		cout << "n2 is converted to true" << endl;
	}

	char c = 'c';
	switch(c) {
		case 'a':
			cout << "its an a" << endl;
			break;
		case 'c':
			cout << "its a c" << endl;
	}

	vector<int> v {1, 4, 5, 6};
	print_vector(v);
}