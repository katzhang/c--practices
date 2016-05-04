#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	const char *hw = "Hello, World!";
	cout << hw << endl;

	int n = atoi(argv[1]);

	for (int i = 0; i < n; ++i) {
		cout << hw << endl;
	}

	cout << "------" << endl;

	int j = n;
	while (j-- > 0) {
		cout << hw << endl;
	}

	cout << "------" << endl;

	int k = 0;
	do {
		cout << hw << endl;
	} while (++k < n);

}

