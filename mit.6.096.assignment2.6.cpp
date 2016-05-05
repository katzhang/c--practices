#include <iostream>

using namespace std;

void printArray(int array[], int n) {
	for (int i = 1; i <= n; ++i) {
		cout << array[i - 1] << (i == n ? "" : ",");
	}
	cout << endl;
}

void reverse(int *array, int n) {
	for (int i = 0; i <= n / 2; ++i) {
		int temp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = temp;
	}
}

int main() {
	int a[] = {1, 2, 3};
	reverse(a, 3);
	printArray(a, 3);
}


