#include<iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int n;
	cin >> n;

	int i = 1;

	while (i <= n) {
		cout << a + i*b << endl;
		i = i + 1;
	}

	cout << "loop has completed" << endl;

	return 0;
}