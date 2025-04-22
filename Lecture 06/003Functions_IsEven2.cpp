#include<iostream>

using namespace std;

bool isEven(int n) {
	if (n % 2 == 0) {
		return true;
	} else {
		return false;
	}
}

int main() {

	// when a fn call returns a value, you can treat that
	// fn call like an expr therefore we can assign such
	// fn calls to variables or print them directly

	bool ans = isEven(5);
	cout << ans << endl;

	cout << isEven(4) << endl;

	return 0;
}