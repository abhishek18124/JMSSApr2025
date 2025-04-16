#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cin >> n;

	int smallestSoFar = INT_MAX; // INT_MAX is equivalent to +ve infinity

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (x < smallestSoFar) {
			smallestSoFar = x;
		}
	}

	cout << smallestSoFar << endl;

	return 0;
}