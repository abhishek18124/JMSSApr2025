#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int ans = 1;

	for (int i = n; i >= 1; i--) {
		ans = ans * i;
	}

	cout << ans << endl;

	return 0;
}