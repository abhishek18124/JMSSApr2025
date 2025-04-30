#include<iostream>

using namespace std;

int f(int x, int y) {
	// base case
	if (y == 0) {
		// add x, 0 times or multiply x with 0
		return 0;
	}

	// recursive case

	// add x, y times

	// 1. ask your friend to add x, y-1 times

	int A = f(x, y - 1);

	return A + x;

}

int main() {

	int x = 10;
	int y = 5;

	cout << f(x, y) << endl;

	return 0;
}