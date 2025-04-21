#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50}; // specifying size during init is optional
	int n = 5;

	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// int B[5] = {100, 200, 300, 400, 500, 600}; // error

	int C[5] = {1000, 2000};

	for (int i = 0; i < 5; i++) {
		cout << C[i] << " ";
	}

	cout << endl;

	return 0;
}