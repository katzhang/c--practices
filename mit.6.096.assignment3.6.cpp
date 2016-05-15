#include <iostream>
#include <string>

using namespace std;

const string VOWELS = "aeiou";

string pigLatinify(string original) {
	string result;
	char initial = original[0];
	if (VOWELS.find(initial) != string::npos) {
		// It's a vowel, so + way
		result += original.substr(1) + "-way";
	} else if (original.substr(0, 2) == "qu") {
		result += original.substr(2) + "-quay";
	} else {
		result += original.substr(1) + "-" + initial + "ay";
	}
	return result;
}

int main() {
	cout << "beast: " << pigLatinify("beast") << endl;
	cout << "dough: " << pigLatinify("dough") << endl;
	cout << "question: " << pigLatinify("question") << endl;
	cout << "apple: " << pigLatinify("apple") << endl;
}



