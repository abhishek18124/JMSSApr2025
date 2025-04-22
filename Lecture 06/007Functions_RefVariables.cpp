#include<iostream>

using namespace std;


int main() {

	int x = 10;
	int& y = x;

	// y is a reference to x i.e. a new name for x
	// so any changes to y will be seen in x

	y++;
	cout << x << endl;
	cout << y << endl;

	return 0;
}