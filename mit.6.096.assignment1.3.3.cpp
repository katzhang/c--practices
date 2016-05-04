#include <iostream>

using namespace std;

bool isPrime(int number) {
	int i = 2;
	bool result = true;
	while (i < number) {
		if (number % i == 0) {
			result = false;
			break;
		}
		i++;
	}
	return result;
}

int main(int argc, char** argv) {
	int n = atoi(argv[1]);
	int count = 0;
	int i = 1;
	cout << "primes: " << endl;
	while (count < n) {
		// cout << i << " is prime? " << isPrime(i) << endl;
		if (isPrime(i)) {
			cout << i << " ";
			count++;
		}
		i++;
	};
	cout << endl;
}

