#include<iostream>

using namespace std;

int main() {

	int x;
	cin >> x;

	if (x > 0) {
		cout << "+ve" << endl;
	} else if (x < 0) {
		cout << "-ve" << endl;
	} else {
		cout << "zero" << endl;
	}

	cout << "you are outside if-else-if";

	return 0;
}