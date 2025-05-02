#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	int cntr = 0;

	int i = 0;
	int j = n - 1;

	while (i < j) {

		int pairSum = arr[i] + arr[j];
		if (pairSum == t) {
			cntr++;
			i++;
			j--;
		} else if (pairSum > t) {
			j--;
		} else {
			// pairSum < t
			i++;
		}

	}

	cout << cntr << endl;

	return 0;
}