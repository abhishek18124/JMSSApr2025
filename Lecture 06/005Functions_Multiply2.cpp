#include<iostream>

using namespace std;

int multiply(int a, int b) {

	return a * b;

}

int main() {

	cout << multiply(2, 3) << endl;

	cout << multiply(4, 5) + 100 << endl;

	cout << multiply(2, 3) + multiply(6, 7) + 200 << endl;

	return 0;
}