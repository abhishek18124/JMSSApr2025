#include<iostream>

using namespace std;

void greet() {

	cout << "hello" << endl;
	return;

}

int main() {

	cout << "before greet()" << endl;

	greet();

	cout << "after greet()" << endl;

	return 0;
}