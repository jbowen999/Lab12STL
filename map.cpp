#include <iostream>
#include <map>


using namespace std;

int main() {
	map<string, int> info = { {"Jayden", 12}, {"Chris", 42}, {"Bobby", 88}, {"Laura", 33}, {"Zig", 19} };

	for (auto name : info) {
		cout << name.first << endl;
	}

	while (true) {
		string input;
		cout << "Enter a name! (or press 'q' to quit)" << endl;
		cin >> input;
		if (input == "q") {
			break;
		}
		else if (info.count(input)) {
			cout << input << " is age " << info.at(input) << endl;
		}
		else {
			cout << "Name not found!" << endl;
		}
	}
}
