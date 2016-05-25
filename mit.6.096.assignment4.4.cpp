#include <iostream>
#include <vector>

using namespace std;

template<class Item>
class Stack {
	vector<Item> stack;
public:
	void push(const Item &item) {
		stack.push_back(item);
	}
	Item pop() {
		Item last = stack.back();
		stack.pop_back();
		return last;
	}
	Item top() {
		return stack[0];
	}
};

int main() {
	Stack<int> st;
	st.push(3);
	st.push(2);
	st.push(1);
	cout << st.pop() << endl;
}

