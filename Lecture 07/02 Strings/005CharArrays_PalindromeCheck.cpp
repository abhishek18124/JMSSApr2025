#include<iostream>

using namespace std;

bool isPalindrome(string s) {
	int i = 0;
	int j = s.size() - 1;
	while (i < j) {
		if (s[i] == s[j]) {
			i++;
			j--;
		} else {
			return false;
		}
	}

	// s is a palindrome
	return true;
}

int main() {

	string s;
	cin >> s;

	if (isPalindrome(s) ) {
		cout << s << " is a palindrome" << endl;
	} else {
		cout << s << " is not a palindrome" << endl;
	}

	return 0;
}