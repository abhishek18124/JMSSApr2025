#include<iostream>

using namespace std;

int main() {

	// int op int => int

	// float op int => float

	// double op int => double

	int a = 7;
	int b = 2;

	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << (float)a / b << endl;
	cout << "a%b = " << a % b << endl;

	// cout << "3+5*4 = " << 3 + 5 * 4 << endl;
	// cout << "8-4/2 = " << 8 - 4 / 2 << endl;
	// cout << "(3+5)*4 = " << (3 + 5) * 4 << endl;
	// cout << "(8-4)/2 = " << (8 - 4) / 2 << endl;
	// cout << "100/10*10 = " << 100 / 10 * 10 << endl;
	// cout << "5-2+3 = " << 5 - 2 + 3 << endl;

	return 0;
}