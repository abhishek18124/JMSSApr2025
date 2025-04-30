#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "coding blocks";

	cout << s[0] << endl;
	cout << s[1] << endl;
	cout << s[2] << endl;

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}

	cout << endl;

	return 0;
}