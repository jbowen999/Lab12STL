#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
	vector<double> aScores = { 77, 83, 76 };
	vector<double> bScores = { 98, 99, 90 };
	vector<double> cScores = { 89, 86, 85 };
	vector<double> dScores = { 77, 76, 74 };
	vector<double> eScores = { 77, 77, 83 };

	map<string, vector<double>> students = { 
		{"James", aScores}, 
		{"Olivia", bScores},
		{"Ethan", cScores },
		{"Mia", dScores},
		{"Ava", eScores}
	};

	for (auto student : students) {
		cout << student.first << endl;
	}

	while (true) {
		string input;
		cout << "Enter a name! (or press 'q' to quit)" << endl;
		cin >> input;
		if (input == "q") {
			break;
		}
		else if (students.count(input)) {
			double avg = 0;
			for (auto score : students.at(input)) {
				avg += score;
			}
			avg /= students.at(input).size();
			cout << input << " has an average score of: " << avg << endl;
		}
		else {
			cout << "Student not found!" << endl;
		}
	}
}
