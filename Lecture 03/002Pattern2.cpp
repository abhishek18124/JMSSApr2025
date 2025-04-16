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

		for (int j = 1; j <= i; j = j + 1) {
			cout << "*";
		}

		// print i-1 stars

		for (int j = 1; j <= i - 1; j = j + 1) {
			cout << "*";
		}

		cout << endl;

	}

	return 0;

}