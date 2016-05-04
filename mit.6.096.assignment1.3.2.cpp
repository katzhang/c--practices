#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int arg1;
	arg1 = -1;
	{
		char arg1 = 'A';
		cout << arg1 << "\n";
	}

// 3.2
	int n = atoi(argv[1]);
	int numbers[n];
	int max, min, range;
	double mean;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		int current;
		cout << "please type a number: " << endl;
		cin >> numbers[i];
		if (i == 0) {
			max = numbers[i];
			min = numbers[i];
		}
		if (numbers[i] > max) max = numbers[i];
		if (numbers[i] < min) min = numbers[i];
		sum += numbers[i];
	}
	mean = (double)sum / n;

	cout << max << " " << min << " " << mean << endl;

}

