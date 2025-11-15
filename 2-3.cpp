#include<iostream>
using namespace std;
int main() {
	double a, b, c, C;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "无法构成三角形" << endl;
	}
	else {
		C = a + b + c;
		cout << "周长为：" << C << endl;
		if (a == b || b == c || a == c) {
			cout << "为等腰三角形" << endl;
		}
		else cout << "不是等腰三角形" << endl;
	}
	return 0;
}