#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cin >> n;

	int x;
	cin >> x;

	int maxSofar = x;

	for (int i = 1; i <= n - 1; i++) {
		cin >> x;
		if (x > maxSofar) {
			maxSofar = x;
		}
	}

	cout << maxSofar << endl;

	return 0;
}