#include<iostream>

using namespace std;

int main() {

	int arr[100]; // based on constraints

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int t;
	cin >> t;

	bool flag = false; // assume t is not in arr[]

	for (int i = 0; i < n; i++) {
		if (arr[i] == t) {
			flag = true;
			cout << t << " found at index " << i << endl;
		}
	}

	if (flag == false) {
		cout << -1 << endl;
	}

	return 0;
}