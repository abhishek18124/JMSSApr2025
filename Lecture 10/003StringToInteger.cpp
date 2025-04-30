#include<iostream>

using namespace std;

int f(string str, int n) {

	// base case
	if (str == "") { // n == 0
		return 0;
	}

	// recursive case

	string subString = str.substr(0, n - 1);
	int integerFromMyFriend = f(subString, n - 1);

	return integerFromMyFriend * 10 + (str[n - 1] - '0');

}

int main() {

	string str = "123";
	int n = str.size();

	cout << f(str, n) << endl;

	return 0;
}