#include<iostream>
using namespace std;
#define p 0.8
int main() {
	int a[100], i, s = 0;
	float x;
	a[1] = 2;
	s = s + a[1];
	for (i = 2; i <= 100; i++) {
		a[i] = 2 * a[i - 1];
		s = s + a[i];
		if (s >= 100) {
			s = s - a[i];
			x = s*p / (i - 1);
			break;
		}
	}
	cout << x << endl;
	return 0;
}