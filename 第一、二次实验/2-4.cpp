#include<iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cin >> a >> c >> b;
	if (c == '+') cout << a + b << endl;
	if (c == '-') cout << a - b << endl;
	if (c == '*') cout << a * b << endl;
	if (c == '/' && b != 0) cout << a / b << endl;
	if (c == '/' && b == 0) cout << "除数不能为0" << endl;
	if (c != '+' && c != '-' && c != '*' && c != '/') cout << "运算符非法" << endl;
	return 0;
}