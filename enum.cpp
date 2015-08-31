#include <iostream>

using namespace std;

enum class Color {red, green, blue};

enum Color2 {red, green, blue};

int main() {

	// Color a1 = 7; //  error: cannot initialize a variable of type 'Color' with an rvalue of type 'int'
	// int a2 = green; // error: use of undeclared identifier 'green'
	Color a3 = Color::red;

	cout << static_cast<int>(a3) << endl;
	cout << static_cast<int>(Color::green) << endl;
	cout << static_cast<int>(Color::blue) << endl;

	cout << red << endl; // for plain enums: same scope, implicit type conversion
	int a4 = green; // ok
	int a5 = Color2::green; // ok


}