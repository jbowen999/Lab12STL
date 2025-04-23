#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	vector<int> numbers;
	int count = 10;
	while (count != 0) {
		int num;
		cout << "Enter an integer: " << count << " remaining" << endl;
		count--;
		cin >> num;
		numbers.push_back(num);
	}

	set<int> num_set(numbers.begin(), numbers.end());

	vector<int> num_vec(num_set.begin(), num_set.end());

	cout << "Duplicates removed!" << endl;
	for (int i = 0; i < num_vec.size(); ++i) {
		
		cout << num_vec.at(i) << " ";
	}
}
