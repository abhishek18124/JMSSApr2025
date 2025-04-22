#include<iostream>

using namespace std;

void myswap(int& c, int& d) {
	int temp = c;
	c = d;
	d = temp;
}

int main() {

	int a = 10;
	int b = 20;

	myswap(a, b);

	cout << a << " " << b << endl;

	return 0;
}