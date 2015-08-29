#include <iostream>

using namespace std;

struct Address {
	const char* name;
	int number;
	const char* street;
	char state[2];
};

// Can be accessed via pointers
void print_addr1(Address* p) {
	cout << p->name << endl;
}

// And references
void print_addr2(const Address& r) {
	cout << r.name << endl;
}

struct Incomplete;

int main() {

	Address jd;
	jd.name = "Jim Dandy";
	jd.number = 61;

	cout << jd.name << endl;
	cout << jd.number << endl;
	// cout << jd.street << endl; // Segmentation fault: 11

	Address jd2 = {
		"James Dandy", 
		62
	};
	cout << jd2.name << endl;
	cout << jd2.number << endl;
	// cout << jd2.street << endl; // Segmentation fault: 11

	// Access using pointers and references
	Address* pointer = &jd;
	Address& reference = jd;
	print_addr1(pointer);
	print_addr2(reference);

	// Members' addresses are allocated in declaration order
	cout << "jd.name's address: " << &(jd.name) << endl;
	cout << "jd.number's address: " << &(jd.number) << endl;

	// Incomplete i; // error: variable has incomplete type 'Incomplete'


	struct Point {
		int x, y;
	};

	Point p0;
	cout << "p0.x: " << p0.x << endl;
	Point p1 = {};
	cout << "p1.x: " << p1.x << endl;

}



























