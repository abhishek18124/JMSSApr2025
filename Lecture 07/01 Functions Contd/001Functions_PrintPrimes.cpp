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

// 3 adv. of using fn

// readability
// reusability
// modularity

void printPrimes(int m) {

	for (int n = 2; n <= m; n++) {

		// check if n is prime or not

		if (isPrime(n)) {
			cout << n << endl;
		}

	}

}

int main() {

	int m;
	cin >> m;

	printPrimes(m);

	return 0;
}