#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i = i + 1) {

		// for the ith row, print n-i spaces

		for (int j = 1; j <= n - i; j = j + 1) {
			cout << " ";
		}

		// followed by i stars

		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}

		cout << endl;

	}

	return 0;

}