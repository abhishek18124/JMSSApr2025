#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	int cntr = 0;

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			int pairSum = arr[i] + arr[j];
			if (pairSum == t) {
				cntr++;
			}
		}
	}

	cout << cntr << endl;

	return 0;
}