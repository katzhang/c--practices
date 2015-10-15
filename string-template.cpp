#include <iostream>

using namespace std;

template<typename C>
class String {
public:
	String();
	explicit String(const C*);
	String(const String&);
	String operator=(const String&);

	C& operator[](int n) { return ptr[n]; } // unchecked element access
	String& operator+=(C c);

private:
	static const int short_max = 15;
	int sz;
	C* ptr; // pointer to sz Cs
}