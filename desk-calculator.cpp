#include <iostream>
#include <string>

using namespace std;

enum class Kind:char {
	name, number, end,
	plus='+', minus='-', mul='*', div='/', print=';', assign='=', lp='(', rp=')'
};

struct Token {
	Kind kind;
	string string_value;
	double number_value;
};

class Token_stream {
public:
	Token get();
	const Token& current();
};

double expr(bool get) { // add and substract
	double left = term(get);
	for(;;) {
		switch(ts.current().kind)) {
			case Kind::plus:
				left += term(true);
				break;
			case Kind::minus:
				left -= term(true);
				break;
			default:
				return left;
		}
	}
};

double term(bool get) { // multiply and divide
	double left = prim(get);
	for(;;) {
		switch(ts.current().kind)) {
			case Kind::mul:
				left *= prim(true);
				break;
			case Kind::div:
				if (auto d = prim(true)) {
					left /= d;
					break;
				}
				return error("divide by 0");
			default:
				return left;
		}
	}
}

double prim(bool get) {
	if (get) ts.get();

	switch(ts.current().kind) {
		case Kind::number:
		{
			double v = ts.current().number_value;
			ts.get();
			return v;
		}
		case Kind::name:
		{
			double& v = table[ts.current().string_value];
			if (ts.get().kind == Kind::assign) v = expr(true);
			return v;
		}
		case Kind::minus:
		{
			return -prim(true);
		}
		case Kind::lp:
		{
			auto e = expr(true);
			if (ts.current().kind != Kind::rp) return error("')' expected");
			ts.get();
			return e;
		}
		default:
			return error("primary expected");
	}
}















