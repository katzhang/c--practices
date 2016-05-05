#include <iostream>

using namespace std;

int getLength(char* string) {
	int len = 0;
	cout << *(string + 3) << endl;
	while (*(string + len) != '\0') {
		len++;
	}
	return len;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapWithPointers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapPointers(int **a, int **b) {
	int *temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	// int a = 1, b = 2;
	// int *pa = &a;
	// int *pb = &b;
	// swapWithPointers(pa, pb);
	// cout << "a: " << a << endl;
	// cout << "b: " << b << endl;

	// int x = 5, y = 6;
	// int *ptr1 = &x, *ptr2 = &y;
	// swapPointers(&ptr1, &ptr2);
	// cout << * ptr1 << " " << * ptr2 << endl; ; // Prints "6 5"

	char *oddOrEven = "Never odd or even";
	char *nthCharPtr = &oddOrEven[6];
	char **pointerPtr = &nthCharPtr;
	cout << pointerPtr << endl;
	cout << **pointerPtr << endl;
}


