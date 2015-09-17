#include <iostream>

using namespace std;

void do_task();

// struct Some_error {};

// void taskmaster() {
// 	try {
// 		do_task();
// 	}
// 	catch(Some_error) {
// 		cout << "caught Some_error" << endl;
// 	}
// }

// void do_task() {
// 	throw Some_error{};
// }

class No_copy {
	No_copy(const No_copy&) = delete; // prohibit copying
};

class My_error {};

int main() {
	// taskmaster();
	cout << "before throw" << endl;
	// throw No_copy{}; // No copying, cannot be thrown
	cout << "after throw" << endl;
}