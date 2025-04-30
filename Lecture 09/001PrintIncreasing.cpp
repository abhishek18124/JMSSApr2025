#include<iostream>

using namespace std;

void f(int n) {

	// base case

	if (n == 0) {
		return;
	}

	// recursive case

	// ask your friend to print nos. from 1 to n-1

	f(n - 1);

	cout << n << " ";

}

int main() {

	int n = 5;

	f(n);

	return 0;
}