#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	int p;
	cin >> p;

	int r;
	cin >> r;

	int t;
	cin >> t;

	cout << (p * r * t) / 100 << endl;
	cout << ((float)p * r * t) / 100 << endl;

	float si = ((float)p * r * t) / 100;
	cout << setprecision(2) << fixed << si << endl;

	return 0;
}