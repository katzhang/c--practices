#include <iostream>
#include <string>

using namespace std;

class Employee {
	string name;
public:
	Employee(const string n):name{n} {};
	virtual void print() const;
};


void Employee::print() const {
	cout << "name: " << name << endl;
}


class Manager:public Employee {
	string name;
public:
	Manager(const string n):name{n} {};
	void print() const;
};

void Manager::print() const {
	Employee::print();
	cout << "manager prints" << endl;
}

int main() {
	Manager m {"Ben"};
	m.print();
}