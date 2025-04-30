#include<iostream>
#include<string>

using namespace std;

bool isGoodString(string str) {
	for (int i = 0; i < str.size(); i++) {
		char ch = str[i];
		if (!(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')) {
			// ch is not a vowel, then str is not good
			return false;
		}
	}

	// str is good
	return true;
}

int main() {

	string str = "uoiea";

	if (isGoodString(str)) {
		cout << "good" << endl;
	} else {
		cout << "not good" << endl;
	}

	return 0;
}