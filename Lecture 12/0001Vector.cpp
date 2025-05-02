#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	v.pop_back();

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	vector<int> v2 = {200, 100, 300, 500, 400};

	sort(v2.begin(), v2.end());  // sorts the entire vector<> in inc. order

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}

	cout << endl;

	sort(v2.begin(), v2.end(), greater<int>());  // sorts the entire vector<> in dec. order

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}

	cout << endl;

	vector<int> v3 = {6, 3, 0, 1, 2, 5};

	reverse(v3.begin(), v3.end());

	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";
	}

	cout << endl;

	return 0;
}