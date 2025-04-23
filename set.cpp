#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> numbers;
	int count = 10;
	while (count != 0) {
		int num;
		cout << "Enter an integer: " << count << " remaining" << endl;
		count--;
		cin >> num;
		numbers.insert(num);
	}

	cout << "Your Set: ";
	for (auto number : numbers) {
		cout << number << " ";
	}
	cout << endl;

	while (true) {
		string input;
		cout << "Press 'd' to delete a number\nPress 's' to search for a number in your set\nPress 'q' to quit" << endl;
		cin >> input;
		if (input == "q") {
			break;
		}
		else if (input == "s") {
			int num;
			cout << "Enter a number:";
			cin >> num;
			cout << endl;
			if (numbers.count(num)) {
				cout << num << " is in the set" << endl;
			}
			else {
				cout << num << " is NOT in the set" << endl;
			}
			cout << endl;
		}

	}
}
