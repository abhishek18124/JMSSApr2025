#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	bool flag = true; // assume n is prime

	for (int i = 2; i <= n - 1; i++) {

		if (n % i == 0) {

			// you've found a factor of n in the range [2, n-1]

			flag = false;
			cout << "not prime" << endl;
			break;

		}

	}

	if (flag == true) {
		cout << "prime" << endl;
	}

	return 0;
}