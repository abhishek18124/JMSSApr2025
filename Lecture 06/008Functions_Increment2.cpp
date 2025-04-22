#include<iostream>

using namespace std;

void f(int& y) { // x is passed by reference so changes done to paramter are reflected in caller fn
	y++;
}

int main() {

	int x = 100;

	f(x);

	cout << x << endl;

	return 0;
}