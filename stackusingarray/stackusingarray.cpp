#include <iostream>
#include <string>

using namespace std;

class Program {
private:
	string stack_array[5];
	int top;

public:
	Program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << " ditambahkan(pushed)." << endl;

		return element;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. cannot pop." << endl;
			return;
		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp = 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
		Program s;

		while (true) {
			cout << endl;
			cout << "\n*Stack Menu**\n";
			cout << "Push\n";
			cout << "Pop\n";
			cout << "Display\n";
			cout << "Exit\n";
			cout << "\nEnter your choice: ";
			string input;
			getline(cin, input);
			char ch = (input.empty() ? '0' : input[0]);
			switch (ch) {
			case '1': {
				cout << "\nEnter an element: ";
				string element;
				getline(cin, element);
				s.push(element);
				break;
			}

			}
		}

}