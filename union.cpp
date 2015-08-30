#include <iostream>
#include <string>

using namespace std;

enum Type {str, num };

union Value {
	char s;
	int i;
	// string str; // string has a constructor, which will be deleted here
};

struct Entry {
	string name;
	Type t;
	Value v; // use v.s if t == str; use v.i if t == num
};

void f(Entry* p) {
	if (p->t == str) {
		cout << p->v.s << endl;
	} else if (p->t == num) {
		cout << p->v.i << endl;
	}
}

// A variant of Entry that overcomes the misuses of a union
class Entry2 {
private:
	enum class Tag {number, text};
	Tag type;

	union {
		int i;
		string s;
	};

public:
	struct Bad_entry {};
	string name;

	~Entry2();
	Entry2& operator=(const Entry2&);
	Entry2(const Entry2&);

	int number() const;
	string text() const;

	void set_number(int n);
	void set_text(const string&);
};

// ...

int main() {
	Entry e = {"entry name", str, 'b'};
	Entry* p = &e;
	f(p);

	Entry e2 = {"entry name", num, 123};
	Entry* p2 = &e2;
	f(p2);
}