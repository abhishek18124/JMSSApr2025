#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;

	while (i <= n) {

		if (i % 2 == 0) {
			// i is even
			cout << i << endl;
		}

		i = i + 1;

	}

	cout << "loop has completed" << endl;

	return 0;
}