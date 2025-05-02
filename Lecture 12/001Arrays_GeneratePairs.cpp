#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	// iterate over indices of 1st element of pair

	for (int i = 0; i <= n - 2; i++) {

		// for each i, iterate over all the indices of the 2nd element of the pair

		for (int j = i + 1; j <= n - 1; j++) {

			cout << arr[i] << " " << arr[j] << endl;

		}

		cout << endl;

	}

	return 0;
}