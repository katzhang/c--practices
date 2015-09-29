#include <iostream>

using namespace std;

namespace Chrono {
	enum class Month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

	class Date {
	public: 
		class Bad_date {};
		explicit Date(int dd = {}, Month mm = {}, int yy = {}); // {} means "pick a default"

		// nonmodifying functions for examining the Date
		int day() const;
		Month month() const;
		int year() const;

		string string_rep() const;
		void char_rep(char s[], int max) const;

		// modifying functions for changing the Date
		Date& add_year(int n);
		Date& add_month(int n);
		Date& add_day(int n);
	private:
		bool is_valid();
		int d, m, y;
	};

	bool is_date(int d, Month m, int y);
	bool is_leapyear(int y);

	bool operator==(const Date& a, const Date& b);
	bool operator!=(const Date& a, const Date& b);

	const Date& default_date();

	ostream& operator<<(ostream& os, const Date& d);
	istream& operator>>(istream& is, Date& d);
};

int main() {
	Date d1 {15}; // ok
	Date d2 = {15}; // error: = initialization does not do implicit conversions
}

