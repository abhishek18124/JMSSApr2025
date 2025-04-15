#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;

	while (i <= n) {

		cout << '*';
		i = i + 1;
	}

	cout << endl << "loop has completed" << endl;

	return 0;

}