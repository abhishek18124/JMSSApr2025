#include<iostream>

using namespace std;

bool f(int X[], int n, int i) {

	// base case

	if (i == n - 1) {
		// f(n-1) = check if X[n-1...n-1] = {X[n-1]}
		return true;
	}

	// recursive case

	// f(i) = check if X[i...n-1] is sorted or not

	return X[i] < X[i + 1] and f(X, n, i + 1);

}

int main() {

	int X[] = {10, 30, 20, 40, 50};
	int n = sizeof(X) / sizeof(int);

	if (f(X, n, 0)) {
		cout << "sorted" << endl;
	} else {
		cout << "not sorted" << endl;
	}

	return 0;
}