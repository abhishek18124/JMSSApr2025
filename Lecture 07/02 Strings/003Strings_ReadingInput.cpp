#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1;
	// cin >> s1; // cin >> stops reading as soon as it encounters whitespace
	getline(cin, s1);
	cout << s1 << endl;

	return 0;
}