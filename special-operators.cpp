#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;


struct Assoc {
	vector<pair<string, int> > vec; // vector of {name, value} pairs

	const int& operator[] (const string&) const;
	int& operator[] (const string&);
};

int& Assoc::operator[] (const string& s) {
	// search for s; return a reference to its value if found;
	// otherwise, make a new pair {s, 0} and return a reference to its value
	for (auto x: vec) 
		if (s == x.first) return x.second;

	vec.push_back({s, 0});
	return vec.back().second; 
}

int main() {
	// count the ocurrences of each word on input
	Assoc values;
	string buf;
	while (cin >> buf) {
		++values[buf];
	}

	for (auto x:values.vec) {
		cout << '{' << x.first << ',' << x.second << "}\n";
	}
}

