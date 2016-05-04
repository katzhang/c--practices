#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

// Calculating pi


double getRandomCoordinate() {
	return (double)rand() / RAND_MAX;
};

double estimatePi(int n) {
	int countOfInside = 0;
	int totalCount = n;
	while (--n >= 0) {
		double x = getRandomCoordinate(), y = getRandomCoordinate();
		if ((x * x + y * y) <= 1) countOfInside++;
	}
	double pi = ((double)countOfInside / totalCount) * 4;

	return pi;
}

int main() {
	int n;
	srand(time(0));
	while (true) {
		cout << "please fill in a number: " << endl;
		cin >> n;
		double result = estimatePi(n);
		cout << "estimated pi is " << result << endl;
	}
}


