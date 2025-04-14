#include<iostream>

using namespace std;

int main() {

	char grade;
	cin >> grade;

	// if (grade == 'A') {
	// 	cout << "good" << endl;
	// } else if (grade == 'B') {
	// 	cout << "average" << endl;
	// } else if (grade == 'C') {
	// 	cout << "bad" << endl;
	// } else {
	// 	cout << "invalid" << endl;
	// }

	switch (grade) {
	case 'A': cout << "good" << endl; break;
	case 'B': cout << "average" << endl; break;
	case 'C': cout << "bad" << endl; break;
	default: cout << "invalid" << endl; break;
	}

	return 0;
}