#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	int t = a >= b ? a : b;
	int i;
	for (i = t; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			break;
		}
	}
	return i;
}
int min(int a, int b) {
	int t = a >= b ? a : b;
	int i;
	for (i = t; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			break;
		}
	}
	return i;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	cout << min(m, n) << endl;
	return 0;
}