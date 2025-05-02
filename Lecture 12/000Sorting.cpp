#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {40, 20, 10, 50, 30};
	int n = sizeof(arr) / sizeof(int);

	sort(arr, arr + n); // sorts the entire array in inc. order

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	sort(arr, arr + n, greater<int>()); // sorts the entire array in dec. order

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	int brr[] = {4, 2, 1, 5, 3};
	int m = sizeof(brr) / sizeof(int);

	sort(brr + 1, brr + 4); // sorts the array brr from index 1 to 3

	for (int i = 0; i < m; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;

	sort(brr + 1, brr + 4, greater<int>());

	for (int i = 0; i < m; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;

	string crr[] = {"bcd", "aab", "def", "cde", "z"};
	int k = 5;

	sort(crr, crr + k); // sort the array crr in lexicographically inc. order

	for (int i = 0; i < k; i++) {
		cout << crr[i] << " ";
	}

	cout << endl;

	sort(crr, crr + k, greater<string>()); // sort the array crr in lexicographically inc. order

	for (int i = 0; i < k; i++) {
		cout << crr[i] << " ";
	}

	cout << endl;

	int drr[] = {4, 3, 0, 1, 2};
	int x = 5;

	reverse(drr, drr + x); // reverses the entire array

	for (int i = 0; i < x; i++) {
		cout << drr[i] << " ";
	}

	cout << endl;

	int err[] = {10, 50, 20, 30, 40};
	int y = 5;

	reverse(err + 2, err + 4); // reverses err from index 2 to 3

	for (int i = 0; i < y; i++) {
		cout << err[i] << " ";
	}

	cout << endl;

	return 0;
}