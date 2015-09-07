#include <iostream>

using namespace std;

// bitwise local operators extract the middle 16 bits of a 32-bit int
unsigned short middle(int a) {
	static_assert(sizeof(int) == 4, "unexpected int size");
	static_assert(sizeof(short) == 2, "unexpected short size");

	return (a>>8)&0xFFFF;
}

struct S {int a, b;};
struct SS {double a, b; };

void f(S);

void g(S);
void g(SS); // g is overloaded

void h() {
	f({1, 2}); // ok, can be determined from the context of usage
	// g({1, 2}); // error: cannot be determined from the context, could be SS or S
	g(S{1, 2}); // ok
	g(SS{1, 2}); // ok
}

// C-style copying of characters
void copy(char* p, const char* q) {
	while (*p++ = *q++);
}

int main() {
	int x = 0xFF00FF00;
	short y = middle(x);
	cout << showbase << hex << "y: " << y << dec << endl; // y: 0xff
	h();

}