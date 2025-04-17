#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int m = n - n / 2;

	// print part 1

	for (int i = 1; i <= m; i++) {

		// for the ith row, print i stars

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// print part 2

	for (int i = 1; i <= m - 1; i++) {

		// for the ith row, print m-i stars

		for (int j = 1; j <= m - i; j++) {
			cout << "*";
		}

		cout << endl;

	}

	return 0;
}