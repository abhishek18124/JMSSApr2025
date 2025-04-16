#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cin >> n;

	int maxSofar = INT_MIN; // INT_MIN is equivalent to negative infinity

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (x > maxSofar) {
			maxSofar = x;
		}
	}

	cout << maxSofar << endl;

	return 0;
}