#include<iostream>

using namespace std;

void f(int y) { // here x is passed by value
	y++;
}

int main() {

	int x = 100;

	f(x);

	cout << x << endl;

	return 0;
}