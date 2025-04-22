#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {

	for (int i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			return false; // n is ood
		}
	}

	return true; // n is prime

}

int main() {

	int n;
	cin >> n;

	if (isPrime(n)) {
		cout << n << " is prime" << endl;
	} else {
		cout << n << " is not prime" << endl;
	}

	return 0;
}