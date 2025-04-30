#include<iostream>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                         "eight", "nine"
                       };


void f(int n) {

	// base case

	if (n == 0) {
		return;
	}

	// recursive case

	// 1. ask your friend to print spelling of n/10

	f(n / 10);

	int d = n % 10;

	cout << spellingMap[d] << " ";

}

int main() {

	int n = 123;

	f(n);

	return 0;
}