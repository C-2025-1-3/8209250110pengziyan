#include<iostream>
using namespace std;
int main() {
	int a, b, i, j, max, min;
	cin >> a >> b;
	max = a > b ? a : b;
	min = a < b ? a : b;
	for (i = min;; i--) {
		if (a % i == 0 && b % i == 0) {
			cout <<"最大公约数为："<< i << endl;
			break;
		}
	}
	for (j = max;; j++) {
		if (j % a == 0 && j % b == 0) {
			cout <<"最小公倍数为："<< j << endl;
			break;
		}
	}
	return 0;
}